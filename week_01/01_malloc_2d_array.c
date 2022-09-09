#include <stdio.h>
#include <stdlib.h>

// QUIZ 1

int main(void)
{
    int n_row, n_col;
    int** array;
    n_row = 2;
    n_col = 3;
    int i, j;

    array = (int**)malloc(sizeof(int*) * n_row);
    for (i = 0; i < n_row; i++) {
        array[i] = (int**)malloc(sizeof(int*) * n_col);
    }

    for (i = 0; i < n_row; i++) {
        for (j = 0; j < n_col; j++) {
            array[i][j] = i + j; // 임의로 배열안의 값을 i+j로 설정
         }
    }

    for (i = 0; i < n_row; i++) {
        for (j = 0; j < n_col; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n_row; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}