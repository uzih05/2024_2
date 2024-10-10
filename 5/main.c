#include <stdio.h>

int Fibonacci(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

int main() { // return type을 int로 변경
    int n, result;
    printf("피보나치 수열\n");
    printf("n = ");
    scanf("%d", &n);
    printf("%d\n", n);

    result = Fibonacci(n);
    printf("결과 : %d\n", result);

    return 0;
}
