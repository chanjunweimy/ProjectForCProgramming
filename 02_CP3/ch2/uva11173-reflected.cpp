/* UVA11173 Gray Codes reflected
 * Given Gray Code, output Binary
 * Need gray code (gray) and n (number of bits)
 */

#include <cstdio>
using namespace std;

int main()
{
    int tc, gray, n;
    scanf("%d", &tc);

    while (tc--)
    {
        scanf("%d %d", &gray, &n);
        printf("%d\n", gray ^ (gray >> n));   
    }
    
    return 0;
}
