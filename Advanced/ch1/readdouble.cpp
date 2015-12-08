/*
 *  Read in a double eg 1.4732, 15.3245, echo it but with a minimum field width of 7 and 3 digits after the decimal point
 *   i.e. ss1.473 (where 's' denotes space), s15.325 etc
 */

#include <cstdio>

int main() {
    float d;
    while (scanf("%f\n", &d) != EOF) {
        printf("%*.2f\n", 7, d);
    }
}
