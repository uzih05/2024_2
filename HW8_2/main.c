#include <stdio.h>
#define SIZE 9

void ArrSum(const int *A, const int *B, int *C, int size);

int main() {
    int arr1[SIZE] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
    int arr2[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int rst[SIZE];

    ArrSum(arr1, arr2, rst, SIZE);

    printf("[각 직원들의 지급받을 월급 총액]\n");

    for(int j = 0; j < SIZE; j++)
        printf("직원%d  %3d\n", j + 1, rst[j]);

    return 0;
}

void ArrSum(const int *A, const int *B, int *C, int size) {
    for(int i = 0; i < size; i++) {
        C[i] = A[i] + B[i];
    }
}
