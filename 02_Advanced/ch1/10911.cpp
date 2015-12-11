// UVa 10911 - Forming Quiz Teams 

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int N, target;
double dist[20][20], memo[1<<16];   // note that max N =8

double matching (int bitmask)       // DP state = bitmask
{
    if (memo[bitmask] > -0.5)       // This state has been computed before
        return memo[bitmask];
    if (bitmask == target)          // All students already matched
        return memo[bitmask] = 0;

    double ans = 20000000000.0;      // Initialise big value 
    int p1, p2;
    for (p1=0; p1<2*N; p1++)
    {
        if (!(bitmask & (1 << p1))) // Find the first bit that is off
            break;
    }
    for (p2 = p1+1; p2<2*N; p2++)
    {
        // Match with another p2 bit that is off
        if (!(bitmask & (1<<p2)))
        {
            ans = min(ans,
                    dist[p1][p2] + matching(bitmask | (1<<p1) | (1<<p2)));
        }
    }


    return memo[bitmask] = ans;     // Store result in memo table
}

int main() 
{
    int i, j, caseNo = 1, x[20], y[20];

    while (scanf("%d", &N), N) 
    {
        for (i=0; i<2*N; i++)
        {
            scanf("%*s %d %d", &x[i], &y[i]);
        }
        for (i=0; i<2*N-1; i++)
        {
            for (j=i+1; j<2*N; j++)
            {
                dist[i][j] = dist[j][i] = hypot(x[i]-x[j], y[i]-y[j]);
            }
        }
        for (i=0; i<(1<<16); i++)
        {
            memo[i] = -1.0;
        }
        target = (1 << (2*N)) -1;
        printf("Case %d: %.21f\n", caseNo++, matching(0));
    }
}

