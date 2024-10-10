#include <stdio.h>

int main(void) {

    // 1번
    int a, b;

    for (a = 1; a <= 5; a++) {
        b = a;                          // 첫 번째 숫자는 a로 시작
        for (int i = 0; i < 5; i++) {
            printf("%d", b);
            b++;                        // 다음 숫자를 출력하기 위해 증가
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");


    // 2번
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < i + i; j++) // i부터 i + (i - 1)까지 숫자 출력
            printf("%d ", j);           // 즉 2부턴 2 + 1 = 3, 2와 3을 함께 출력
        printf("\n");
    }

    return 0;
}
