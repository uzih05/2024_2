#include <stdio.h>

// 전역 변수 정의
int a;

// extern.c에 있는 함수의 프로토타입 선언
void check_value();

int main() {
    printf("ex의 값을 입력하세요:\n");
    scanf("%d", &a);
    printf("이제 다른 파일을 열어 ex의 값을 확인하세요.\n");

    check_value();
    return 0;
}
