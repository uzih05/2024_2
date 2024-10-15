#include <stdio.h>

// 함수 선언
void count(int *num_count, int *char_count, int *total_count);

int main() {
    int num_count = 0;  // 숫자 개수
    int char_count = 0; // 문자 개수
    int total_count = 0; // 총 입력 개수

    printf("데이터를 입력하세요 ('EOF' 입력 시 종료):\n");

    // 함수 호출하여 카운트 진행
    count(&num_count, &char_count, &total_count);

    // 결과 출력
    printf("숫자의 개수: %d\n", num_count);
    printf("문자의 개수: %d\n", char_count);
    printf("총 입력 받은 데이터의 개수: %d\n", total_count);

    return 0;
}

// 숫자와 문자를 카운트하는 함수
void count(int *num_count, int *char_count, int *total_count) {
    char ch;

    while (1) {
        ch = getchar(); // 문자 입력받기

        // 'EOF'가 입력되면 종료
        if (ch == 'E') {
            if (getchar() == 'O' && getchar() == 'F') {
                break; // 'EOF' 입력 확인 후 종료
            }
        }

        // 입력된 문자가 유효한 경우 카운트
        (*total_count)++;
        if (ch >= '0' && ch <= '9') {
            (*num_count)++; // 숫자 개수 증가
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            (*char_count)++; // 문자 개수 증가
        }
    }
}
