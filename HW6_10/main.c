#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1; // 소수다
}

void findPrimes(int limit) {
    printf("1부터 %d까지의 소수:\n", limit);
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i); //소수면 출력
        }
    }
    printf("\n");
}

int main() {
    int number;

    printf("정수값을 입력하세요: ");
    scanf("%d", &number);

    findPrimes(number);

    return 0;
}
