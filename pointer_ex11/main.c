#include <stdio.h>

int main() {
    int x[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int *ptr, i, j;
    ptr = x;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            printf("%d ", x[i][j]);
    printf("\n");

    for (i = 0; i < 12; i++)
        printf("%d ", *(ptr+i));
    printf("\n");

    for (i = 0; i < 12; i++)
        printf("%d ", ptr[i]);
}