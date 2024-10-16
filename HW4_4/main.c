#include <stdio.h>

int main() {
    char ch;
    int num_count = 0;  // 숫자 개수
    int char_count = 0; // 문자 개수
    int total_count = 0; // 총 입력 개수

    printf("데이터를 입력하세요 ('EOF' 입력 시 종료):\n");

    while (1) {
        ch = getchar(); // 문자 입력받기

        // 'EOF'가 입력되면 종료
        if (ch == 'E') {
            if (getchar() == 'O' && getchar() == 'F') {
                break; // 'EOF' 입력 확인 후 종료
            }
        }

        // 입력된 문자가 유효한 경우 카운트
        total_count++;
        if (ch >= '0' && ch <= '9') {
            num_count++; // 숫자 개수 증가
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char_count++; // 문자 개수 증가
        }
    }

    // 결과 출력
    printf("숫자의 개수: %d\n", num_count);
    printf("문자의 개수: %d\n", char_count);
    printf("총 입력 받은 데이터의 개수: %d\n", total_count);

    return 0;
}