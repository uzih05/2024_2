#include <stdio.h>

int main(void) {
    int n = 0;
    printf("몇 단까지 출력하실 건가요?: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d단:\n", i);
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);  // 구구단 출력
        }
        printf("\n");                               // 각 단 사이에 빈 줄 추가
    }
    return 0;
}
