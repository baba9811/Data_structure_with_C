#include <stdio.h>
#include <stdlib.h>
#define MAX_COL 9

typedef struct{
	int row;
	int col;
	int value;
} sparseMatrix;

void fastTranspose(sparseMatrix a[], sparseMatrix b[])
{
	int i,j, numCols = a[0].col, numTerms = a[0].value;
	int startingPos[numCols];
	b[0].row = numCols;
	b[0].col = a[0].row;
	b[0].value = numTerms;
	
	if (numTerms > 0){
		for (i=0; i<numCols; i++){startingPos[i] = 0;}
		for (i=1; i<= numTerms; i++){
			startingPos[a[i].col]++;
		}
		for (i= 1; i<numCols; i++){
			startingPos[i] += startingPos[i-1];
		}
		for (i=numCols ; i>0; i--){
			startingPos[i] = startingPos[i-1]+1;
		}
		startingPos[0] = 1;
		
		for(i=1; i<= numTerms; i++){
			j = startingPos[a[i].col];
			b[j].row = a[i].col;
			b[j].col = a[i].row;
			b[j].value = a[i].value;
			startingPos[a[i].col]++;
		}
	}
}

int main(void)
{
	int i;
	sparseMatrix a[MAX_COL] = {{6, 6, 8}, {0, 0, 15}, {0, 3, 22}, {0, 5, -15},
	{1, 1, 11}, {1, 2, 3}, {2, 3, -6}, {4, 0, 91}, {5, 2, 28}}; // 3주차 9페이지 matrix
	sparseMatrix b[MAX_COL];
	fastTranspose(a, b);
	for(i=0; i<MAX_COL; i++){
		printf("%d %d %d\n", b[i].row, b[i].col, b[i].value);
	}
	return 0;
}
