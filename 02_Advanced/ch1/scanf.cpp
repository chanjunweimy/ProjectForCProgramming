/*
 * Scans in first number N, which indicates number of numbers after
 * Numbers after have ... appended
 * Prints out the numeric digits
 *
 * Example input:
 * 3
 * 0.1227...
 * 0.51761178...
 * 0.734526381927749399493949372362535219378...
 */

#include <cstdio>
using namespace std;

int N;
char x[110];

int main() {
    scanf("%d\n", &N);
    while (N--) {
        scanf("0.%[0-9]...\n", &x);
        printf("The digits are 0.%s\n", x);
    }
    return 0;
}

