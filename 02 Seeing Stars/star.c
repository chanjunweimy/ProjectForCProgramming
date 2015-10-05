#include <stdio.h>

/*
 * Prints out n level of stars
 *
 * Example:
 * Input: 3
 * Output:
 * *
 * **
 * ***
 */

int main() 
{
    int i, j;
    int n;

    printf("How many level of stars you want to see? Integer: \n");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
