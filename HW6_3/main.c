#include <stdio.h>

int oddeven(int x) {
    return x % 2;
}

int main(void) {
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);
    if (oddeven(a)) {
        printf("홀수입니다.");
    }
    else {
        printf("짝수입니다.");
    }
}
