#include <stdio.h>

/*
 * Prints out the first n terms in the Fibonacci Sequence
 * Iterative Version
 *
 * Example:
 * Input: 5
 * Output: 1 1 2 3 5
 */

int main()
{
    int n, i;
    int firstNum = 1, secondNum = 1;
    int nextNum;

    printf("Fibonacci Sequence... Iterative Version\nPrints the first n terms in the Fibonacci Sequence. \nEnter n: ");

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            nextNum = 1;
        }
        else
        {
            nextNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = nextNum;
        }
        printf("%d ", nextNum);
    }
    printf("\n");

    return 0;
}
