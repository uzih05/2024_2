#include <stdio.h>

int Discrimination(int x) {
    if (x > 0) {
        printf("Plus", x);
    }
    else if (x == 0) {
        printf("Zero", x);
    }
    else {
        printf("Minus", x);
    }
}

int main(void) {
    int a;
    printf("정수를 입력하세요: \n");
    scanf("%d", &a);
    Discrimination(a);
}
