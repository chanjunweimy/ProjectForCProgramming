#include <stdio.h>

int main() {
    int x;
    int i;
    printf("We will calculate number x * 1 ... 12");
    printf("Please key in a number x: \n");
    scanf("%d", &x);
    for (i = 1 ; i <= 12; i++) {
        printf("%d * %d = %d \n", x, i, x * i);
    }
    return 0;
}
