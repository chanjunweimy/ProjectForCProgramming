/* 
 * Given a list of sorted integers L, determine whether a value v exists in L with no more than 20 comparisons
 */

#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n = 5, v = 7;
    int L[] = {10, 7, 5, 20, 8};
    sort(L, L+n);
    printf("%d\n", binary_search(L, L+n, v));
}
