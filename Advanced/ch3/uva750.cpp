#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int queens[8], numDatasets, a, b, lineCounter;

// TO check previously placed queens
bool place(int row, int col)
{
    for (int prev=0; prev<col; prev++)
    {
        if (queens[prev] == row || 
                (abs(queens[prev] - row) == abs(prev-col)))
            return false;
    }
    return true;
}

void backtrack(int col)
{
    if (col == 8 && queens[b] == a) // candidate solution 
    {
        printf("%2d    %d", ++lineCounter, queens[0]+1);
        for (int j=1; j<8; j++)
            printf("    %d", queens[j]+1);
        printf("\n");
    }
    for (int row=0; row<8; row++)
    {
        // If can place the queen at this row and col,
        // recurse
        if (place(row, col))
        {
            queens[col]=row;
            backtrack(col+1);
        }
    }
}

int main() 
{
    scanf("%d", &numDatasets);
    while (numDatasets--)
    {
        scanf("%d %d", &a, &b);
        a--; b--;
        memset(queens, 0, sizeof queens);
        lineCounter = 0;
        printf("SOLN    COLUMN\n");
        printf("#   1 2 3 4 5 6 7 8\n\n");
        backtrack(0);   // Generate all possible 8! candidate solutions
        if (numDatasets)
            printf("\n");
    }
}
