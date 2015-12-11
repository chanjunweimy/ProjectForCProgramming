// CS1010 AY2014/15 
// PE2 ex2 2048.c

#include <stdio.h>
#include <string.h>

#define SIZE 4
#define LENGTH 21

void readGrid(int [][SIZE]);
void printGrid(int [][SIZE]);
void play(int grid[][SIZE], char directions[]);
int exists(int grid[][SIZE], int target);

// Own helper functions 
void moveUp(int grid[][SIZE]);
void moveLeft(int grid[][SIZE]);
void printOutput(int grid[][SIZE]);

int main()
{
    int grid[SIZE][SIZE], target;
    char directions[LENGTH];

    printf("Enter grid:\n");
    readGrid(grid);

    printf("Enter directions: ");
    scanf("%s", directions);

    printf("Enter target: ");
    scanf("%d", &target);

    play(grid, directions);
    printGrid(grid);

    if (exists(grid, target) == 1)
    {
        printf("%d is formed\n", target);
    }
    else
    {
        printf("%d is not formed\n", target);
    }
    return 0;
}

// Read in the grid
void readGrid(int grid[][SIZE])
{
    int i, j;
    for (i=0; i<SIZE; i++)
        for (j=0; j<SIZE; j++)
            scanf("%d", &grid[i][j]);
}

// Print out the grid
void printGrid(int grid[][SIZE])
{
    int i, j;
    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }
}

void play(int grid[][SIZE], char directions[])
{
    for (int i=0; i<strlen(directions)-1; i++)
    {
        if (directions[i] == 'U')
        {
            moveUp(grid);
            printOutput(grid);
        }
        else if (directions[i] == 'L')
        {
            moveLeft(grid);
            printOutput(grid);
        }
    }
}

// Check if target has been formed in grid
int exists(int grid[][SIZE], int target)
{
    int i, j;
    for (i=0; i<SIZE; i++)
    {
        for (j=0; j<SIZE; j++)
        {
            if (grid[i][j] == target)
                return 1;
        }
    }
    return 0;
}

void moveUp(int grid[][SIZE])
{
    int i, j, k;
    for (i=0; i<SIZE; i++)
    {
        for (j=0; j<SIZE; j++)
        {
            if (grid[i][j] != 0 && i != 0)  // Cannot move above grid
            {
                k = i-1;
                // Disregard empty cells 
                while (k >= 0 && grid[k][j] == 0)
                {
                    k--;
                }

                if (grid[k][j] != grid[i][j])
                {
                    // No merge
                    grid[k+1][j] = grid[i][j];
                    grid[i][j] = 0;
                }
                else 
                {
                    // Merge
                    grid[k][j] *= 2;
                    grid[i][j] = 0;
                }
            }
        }
    }
}

void moveLeft(int grid[][SIZE])
{
    int i, j, k;
    for (j=0; j<SIZE; j++)
    {
        for (i=0; i<SIZE; i++)
        {
            if (grid[i][j] != 0 && j != 0)
            {
                k = j-1;

                // Disregard empty cells
                while (k >= 0 && grid[k][j] == 0)
                    k--;

                if (grid[i][k] != grid[i][j])
                {
                    // No merge
                    grid[i][k+1] = grid[i][j];
                    grid[i][j] = 0;
                }
                else
                {
                    // Merge
                    grid[i][j] *= 2;
                    grid[i][j] = 0;
                }
            }
        }
    }
}

void printOutput(int grid[][SIZE])
{
    printf("\n");
    printGrid(grid);
    printf("\n");
}
