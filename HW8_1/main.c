#include <stdio.h>

#define SIZE 9

void ArrCpy(int *A, int *B, int size);

int main()
{
    int src[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int dst[SIZE];

    // 배열 복사 함수 호출
    ArrCpy(src, dst, SIZE);

    printf("src 배열의 값\n");
    for (int j = 0; j < SIZE; j++)
        printf("%3d ", src[j]);

    printf("\ndst 배열의 값\n");
    for (int j = 0; j < SIZE; j++)
        printf("%3d ", dst[j]);

    return 0;
}

void ArrCpy(int *A, int *B, int size) {
    for (int i = 0; i < size; i++) {
        B[i] = A[i];
    }
}
