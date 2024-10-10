#include <stdio.h>

int main() {
    int n;
    n = 5;

    // 1번
    // 위쪽 삼각형 부분
    for (int i = 1; i <= n; i++) {              // i = 1 ~ n(5) 까지 (높이)
        for (int j = 1; j <= i; j++)            // 한 줄 당 별의 갯수
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)  // 그 사이 공백
            printf(" ");
        for (int j = 1; j <= i; j++)            // 다시 오른쪽 별 출력
            printf("*");
        printf("\n");
    }

    // 아래쪽 삼각형 부분은 반대로 하면 댐
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // 2번
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        printf("*");
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 2 * n - 1; i++)
        printf("*");
    printf("\n");
    printf("\n");

    // 3번
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j < i; j++)
            printf("  ");
        for (int j = i; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}

