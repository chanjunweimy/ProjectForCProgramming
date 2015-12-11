// UVa 11450

#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int M, C, price[25][25];
int memo[210][25];

int shop(int money, int g) 
{
    if (money < 0)  return -10000000;   // Fail, return large negative num
    if (g == C) return M - money;       // Bought last garment
    if (memo[money][g] != -1)           // State computed before, return value
        return memo[money][g];

    int ans = -1;
    for (int model = 1; model <= price[g][0]; model++)
        ans = max(ans, shop(money-price[g][model], g+1));

    return memo[money][g] = ans;        // Memoize ans and return
}

int main() 
{
    int i, j, TC, score;
    scanf("%d", &TC);
    while (TC--)
    {
        scanf("%d %d", &M, &C);
        for (i=0; i<C; i++)
        {
            scanf("%d", &price[i][0]);
            for (j=1; j<=price[i][0]; j++)
                scanf("%d", &price[i][j]);
        }
        memset(memo, -1, sizeof(memo));     // Initialize
        score = shop(M, 0);

        if (score < 0)  printf("No solution\n");
        else            printf("%d\n", score);
    }
}
