#include <stdio.h>

void findMax(int arr[], int size, int *maxValue, int *maxIndex) {
    *maxValue = arr[0];
    *maxIndex = 0;

    for (int i = 1; i < size; i++) {    //i = 1 부터 size 까지 1씩
        if (arr[i] > *maxValue) {       //큰 값보다 작으면
            *maxValue = arr[i];
            *maxIndex = i;
        }
    }
}

int main() {
    int n;

    // 사용자로부터 배열의 크기를 입력받음
    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &n);

    int arr[n];

    // 사용자로부터 배열의 값을 입력받음
    printf("배열의 값을 입력하세요:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int maxValue, maxIndex;

    // 가장 큰 값과 그 값의 위치 찾기
    findMax(arr, n, &maxValue, &maxIndex);

    // 결과 출력
    printf("가장 큰 값: %d\n", maxValue);
    printf("가장 큰 값의 위치: %d\n", maxIndex);

    return 0;
}
