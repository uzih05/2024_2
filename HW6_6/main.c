#include <stdio.h>

// 3의 배수가 처음으로 1000보다 커지는 값을 리턴하는 함수
int three() {
    int num = 1000;

    // 1000보다 큰 첫 번째 3의 배수 찾기
    while (num % 3 != 0) {
        num++;
    }

    return num;
}

int main() {
    int result = three();

    // 결과 출력
    printf("3의 배수가 처음으로 1000보다 커지는 값은 %d입니다.\n", result);
    return 0;
}
