#include <stdio.h>
#include <stdbool.h>

void countPairs(int lower, int upper, int results[]);
int sumFactors(int number);
void printMessage(int results[]);
bool inRange(int lower, int upper, int number);

int main()
{
    int lower, upper;
    int results[2] = {0};

    printf("Enter range: ");
    scanf("%d %d", &lower, &upper);

    countPairs(lower, upper, results);

    return 0;
}

void countPairs(int lower, int upper, int results[])
{
    int isChecked[upper-lower];

    for (int i=lower; i<=upper; i++)
    {
        int sumOfFactors = sumFactors(i);
        isChecked[i-lower] = 1;
        
        int sum2 = sumFactors(sumOfFactors);
        if (sum2 == i)
        {
            if (inRange(lower, upper, sumOfFactors))
            {
                if (isChecked[sumOfFactors-lower] == 0)
                {
                    results[0]++;
                    isChecked[sumOfFactors-lower] = 1;
                }
            }
            else
                results[1]++;
        }
    }

    printMessage(results); 
}

int sumFactors(int number)
{
    int sum = 0;
    for (int i=1; i < number; i++)
    {
        if (number % i == 0) sum += i;
    } 

    return sum;
}

void printMessage(int results[])
{
    printf("Number of full pairs: %d\n", results[0]);
    printf("Number of half pairs: %d\n", results[1]);
}

bool inRange(int lower, int upper, int number)
{
    return (number >= lower && number <= upper);
}
