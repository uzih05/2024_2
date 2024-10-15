#include <stdio.h>
#include <string.h>

void processString(const char *input, int *spaceCount, char *output) {
    *spaceCount = 0; // 빈칸 개수 초기화
    int j = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ') {
            (*spaceCount)++; // 빈칸 개수 증가
        } else {
            output[j++] = input[i]; // 빈칸이 아닌 문자를 output에 추가
        }
    }
    output[j] = '\0'; // 문자열 끝에 NULL 추가
}

int main() {
    char input[100]; // 입력 문자열을 저장할 배열
    char output[100]; // 빈칸이 제거된 문자열을 저장할 배열
    int spaceCount;

    printf("문자열을 입력하세요: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0'; //개행 제거
    }

    processString(input, &spaceCount, output);

    // 결과 출력
    printf("빈칸의 개수: %d\n",spaceCount);
    printf("빈칸이 제거된 문자열: '%s'\n", output);

    return 0;
}
