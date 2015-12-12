/* digitSum.c
 * Read in positive integers, add up the digits from right in even numbered positions
 *
 * e.g. 76524 should give 6+2=8
 */

#include <stdio.h>
#include <stdbool.h>

int digitSum(int number);
bool isEvenPosition(int i);

int main() 
{
    int number; 
    printf("Enter number: ");
    scanf("%d", &number);

    int sumOfEvenDigits = digitSum(number);

    printf("Sum of Even Digits: %d\n", sumOfEvenDigits);

    return 0;
}

int digitSum(int number)
{
    int i = 1, digitSum = 0;
    while (number > 0)
    {
        if (isEvenPosition(i))
        {
            digitSum += number % 10;
        } 
        number /= 10;        
        i++;
    }
    return digitSum;
}

// Check if i is even
bool isEvenPosition(int i)
{
    if (i % 2 == 0)
        return true;
    else
        return false;
}
