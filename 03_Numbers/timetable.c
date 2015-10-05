#include <stdio.h>

/*
 * Calculates the timetables for a given integer
 *
 * Example: 
 * Input: 4
 * Output:
 * 4 * 1 = 4
 * 4 * 2 = 8
 * 4 * 3 = 12
 * 4 * 4 = 16
 * 4 * 5 = 20
 * 4 * 6 = 24
 * 4 * 7 = 28
 * 4 * 8 = 32
 * 4 * 9 = 36
 * 4 * 10 = 40
 * 4 * 11 = 44
 * 4 * 12 = 48
 */

int main()
{
    int x;
    int i;
    printf("We will calculate number x * 1 to x * 12\n");
    printf("Please key in a number x: \n");
    scanf("%d", &x);
    for (i = 1 ; i <= 12; i++) 
    {
        printf("%d * %d = %d \n", x, i, x * i);
    }
    return 0;
}
