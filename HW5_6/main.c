#include <stdio.h>

int main(void) {
    char grade;  // 문자형으로 변경

    while (1) {  // 무한 루프
        printf("학년을 입력하세요. (종료하려면 q): ");
        scanf(" %c", &grade);  // 문자를 입력받기

        switch (grade) {
            case '1':
                printf("진로를 다양하게 탐구하세요.\n");
            break;
            case '2':
                printf("진로 목표를 적극적으로 탐구하세요.\n");
            break;
            case '3':
                printf("진로 목표를 결정하고, 준비하세요.\n");
            break;
            case '4':
                printf("목표한 진로 준비에 매진하세요.\n");
            break;
            case 'q':
                printf("종료합니다.\n");
            return 0;  // 프로그램 종료

            default:
                printf("잘 못 입력하셨습니다.\n");
            break;
        }
    }
}
