#include <stdio.h>

// 두 개의 정수를 받아 큰 수를 첫 번째 변수에, 작은 수를 두 번째 변수에 저장하는 함수
void bigsmall(int *a, int *b) {
    if (*a < *b) {
        // 두 값을 교환
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int num1, num2;

    // 두 개의 정수 입력받기
    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &num2);

    // 두 숫자를 call by reference로 전달하여 정렬
    bigsmall(&num1, &num2);

    // 결과 출력: num1에는 큰 수, num2에는 작은 수
    printf("큰 수: %d, 작은 수: %d\n", num1, num2);

    return 0;
}
