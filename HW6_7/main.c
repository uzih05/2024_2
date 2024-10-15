#include <stdio.h>

void fibonacci(int n, int *temp, int *sum) {
    int a = 0, b = 1, next;
    *sum = 0;

    if (n == 0) {
        *temp = 0;
        *sum = 0;
        return;
    } else if (n == 1) {
        *temp = 1;
        *sum = 1;
        return;
    }

    *sum = a + b;  // 첫 번째 항과 두 번째 항의 합
    for (int i = 2; i <= n; i++) {
        next = a + b;  // f(i) = f(i-1) + f(i-2)
        *sum += next;  // 합계에 현재 항(next)을 더함
        a = b;  // 이전 항 업데이트
        b = next;  // 다음 항 업데이트
    }

    *temp = b;  // n번째 항의 값
}

int main() {
    int n, nthTerm, sum;

    // 자연수 n 입력받기
    printf("자연수 n을 입력하세요: ");
    scanf("%d", &n);

    // 피보나치 함수 호출하여 n번째 항과 n항까지의 합 계산
    fibonacci(n, &nthTerm, &sum);

    // 결과 출력
    printf("피보나치 수열의 %d번째 항은 %d입니다.\n", n, nthTerm);
    printf("%d번째 항까지의 합은 %d입니다.\n", n, sum);

    return 0;
}
