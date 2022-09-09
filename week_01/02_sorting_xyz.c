#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// QUIZ2
/* sorting 해야하는 값이 3개만 있으므로 min, max를 구하고
남은 값을 remainder로 두어 순서대로 출력*/
int sort_3(x, y, z) {
    int array[3];
    int i, j, max, min, min_index, max_index;
    max = 0;
    array[0] = x;
    array[1] = y;
    array[2] = z;
    for (i = 0; i < 3; i++) {
        if (max < array[i]) {
            max = array[i];
            max_index = i;
        }
    }
    min = INT_MAX;
    for (j = 0; j < 3; j++) {
        if (min > array[j]) {
            min = array[j];
            min_index = j;
        }
    }
    int remainder = array[3 - min_index - max_index];
    printf("%d %d %d -> %d %d %d", x, y, z, min, remainder, max);
    return 0;
}

int main(void) {
    int x, y, z;
    printf("please input x y z ");
    scanf("%d %d %d", &x, &y, &z);
    sort_3(x, y, z);
    return 0;
}