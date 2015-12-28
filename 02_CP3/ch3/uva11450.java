// UVa 11450

import java.util.*;

class Main {
    private static int M, C, K;
    private static int[][] price = new int[25][25];
    private static int[][] memo = new int[210][25];

    private static int shop(int money, int g) {
        if (money < 0)              return -100000;
        if (g == C)                 return M - money;
        if (memo[money][g] != -1)   return memo[money][g];

        int ans = -1;
        for (int model = 1; model <= price[g][0]; model++)
            ans = Math.max(ans, shop(money - price[g][model], g+1));
        
        return memo[money][g] = ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i, j, TC, score;

        TC = sc.nextInt();

        while (TC-- > 0) {
            M = sc.nextInt(); C = sc.nextInt();
            for (i=0; i<C; i++) {
                K = sc.nextInt();
                price[i][0] = K;
                for (j=1; j<=K; j++)
                    price[i][j] = sc.nextInt();
            }

            // Initialize DP memo table
            for (i=0; i<210; i++)
                for (j=0; j<25; j++)
                    memo[i][j] = -1;

            score = shop(M, 0);
           
            if (score < 0)  System.out.printf("No Solutions\n");
            else            System.out.printf("%d\n", score);
        }
    }
}
