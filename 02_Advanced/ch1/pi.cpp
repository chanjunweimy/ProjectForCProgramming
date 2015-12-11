/*
 * Given an integer n (n < 15), print pi to n digits after the decimal point
 */

#include <cstdio> 
#include <cmath>
using namespace std;

int main() {
    double pi = 2 * acos(0.0);  // accurate way of computing pi
    int n; 
    scanf("%d", &n);
    printf("%.*lf\n",n, pi);   // manipulate field width
}
