// UVA750 - 8 Queens Problem

import java.util.*;

class Main {
    private static int[] row = new int[9];
    private static int TC, a, b, lineCounter;

    private static boolean place(int col, int testrow) {
        for (int prev=1; prev<col; prev++)
            if (row[prev] == testrow || (Math.abs(row[prev]-testrow) == Math.abs(prev-col)))
                return false;
        return true;
    }

    private static void backtrack(int col) {
        for (int testrow=1; testrow <= 8; testrow++) {
            if (place(col, testrow)) {
                row[col] = testrow;
                if (col == 8 && row[b] == a) {
                    // Solution found 
                    System.out.printf("%2d      %d", ++lineCounter, row[1]);
                    for (int j=2; j<=8; j++)
                        System.out.printf(" %d", row[j]);
                    System.out.printf("\n");
                }
                else {
                    backtrack(col+1);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        TC = sc.nextInt();
        while (TC-- > 0) {
            a = sc.nextInt();
            b = sc.nextInt();
            for (int i=0; i<9; i++)
                row[i] = 0;
            lineCounter = 0;

            System.out.printf("SOLN     COLUMN\n");
            System.out.printf(" #   1 2 3 4 5 6 7 8\n\n");
            backtrack(1);
            if (TC > 0)
                System.out.printf("\n");
        }
    }
}
