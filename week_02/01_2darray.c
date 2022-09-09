#include <stdio.h>
#include <stdlib.h>

int** make2darray2(int rows) {
    int** array, i;
    array = (int**)malloc(rows * sizeof(int*));
    for (i = 0; i < rows; i++) {
        array[i] = (int*)malloc(i * sizeof(int));
    }
    return array;
}

int main(void)
{
    int rows;
    printf("number of rows: ");
    scanf("%d", &rows);
    int** array, i, j;
    array = make2darray2(rows);
    for (i = 0; i < rows; i++)
	{
        for (j = 0; j <= i; j++)
		{
            array[i][j] = i + j;
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}
