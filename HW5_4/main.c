#include <stdio.h>

int main(void) {
    char str[100];  // 문자열을 저장할 배열
    int space_count = 0;  // 빈칸의 개수를 셀 변수

    // 사용자로부터 한 줄의 문자열 입력받기
    printf("문자열을 입력하세요: ");
    scanf("%[^\n]", str);  // 줄바꿈 문자 전까지 입력받기

    // 빈칸의 개수 세기 및 빈칸 제거
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            space_count++;  // 빈칸의 개수 증가
        } else {
            printf("%c", str[i]);  // 빈칸이 아닌 문자를 바로 출력
        }
    }

    // 결과 출력
    printf("\n빈칸의 개수: %d\n", space_count);

    return 0;
}
