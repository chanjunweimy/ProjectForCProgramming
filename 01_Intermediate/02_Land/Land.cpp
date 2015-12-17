// CS1020E Lab 1 Land

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
  
#define MAX_SIZE_OF_GRID 80
#define MAX_NUM_OF_TREES 500  
#define NO_TREE 0
#define TREE 1
  
int main()
{
    // read input
	int sizeOfGrid, numOfTrees;
	cin >> sizeOfGrid >> numOfTrees;
    
	int medanLand[MAX_SIZE_OF_GRID][MAX_SIZE_OF_GRID] = {{NO_TREE}};
	int treeX, treeY;
	for (int i=0; i<numOfTrees; i++)
	{
		cin >> treeX >> treeY;
		medanLand[treeX-1][treeY-1] = TREE;
	}
	
	/*
	// Print Grid
	for (int i=0; i<sizeOfGrid; i++)
	{
		for (int j=0; j<sizeOfGrid; j++)
		{
			printf("%d ", medanLand[i][j]);
		}
		printf("\n");
	}
	*/
	
    // process the input
    int lengthOfLargestSquare = 1; 
	bool canBuy;
	//int i, j, k, h, tempGridWidth, squareWidth;
	
	// Exhaustive search
	for (int i=0; i<sizeOfGrid; i++)
	{
		for (int j=0; j<sizeOfGrid; j++)
		{
			if (medanLand[i][j] == NO_TREE)
			{
				// Find the largest width we can go
				int subGridWidth = min(sizeOfGrid-i, sizeOfGrid-j);
			
				for (int squareWidth = subGridWidth; squareWidth > 0; squareWidth--)
				{
					canBuy = true;
					for (int k=i; k<i+squareWidth; k++)
					{
						for (int h=j; h<j+squareWidth; j++)
						{
							//printf("%d %d\n", k, h);
							if (medanLand[k][h] == TREE)
							{
								canBuy = false;
							}
						}
					}
					if (canBuy && (squareWidth>lengthOfLargestSquare))
					{
						lengthOfLargestSquare = squareWidth;
					}
				}
			}
		}
	}
	 
    // output
	cout << lengthOfLargestSquare << endl;
    return 0;
}