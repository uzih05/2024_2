#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) { // i의 제곱이 num보다 작거나 같을 때까지 반복
        if (num % i == 0) return 0;      // 나누어 떨어지면 소수가 아님
    }
    return 1; // 소수인 경우
}

int main(void) {
    int n, sum = 0;

    printf("자연수를 입력하세요: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            sum += i; // 소수일 경우 합산
        }
    }
    printf("%d보다 작은 소수들의 합: %d\n", n, sum);

    return 0;
}
