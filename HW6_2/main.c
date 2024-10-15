#include <stdio.h>

// 소수가 아니면 1을, 소수이면 0을 리턴하는 함수
int isNotPrime(int num) {
    if (num < 2) {
        return 1; // 1이나 0은 소수가 아님
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 1; // num이 i로 나누어 떨어지면 소수가 아님
        }
    }

    return 0; // 소수임
}

int main() {
    int num;

    printf("자연수를 입력하세요: ");
    scanf("%d", &num);

    if (isNotPrime(num)) {
        printf("%d는 소수가 아닙니다.\n", num);
    } else {
        printf("%d는 소수입니다.\n", num);
    }

    return 0;
}
