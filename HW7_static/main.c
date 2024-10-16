#include <stdio.h>

void store_value(int input);

int main() {
    int number;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    // 입력 받은 값을 저장
    store_value(number);

    return 0;
}

void store_value(int input) {
    static int stored_value = 0;  // static 변수 선언
    stored_value = input;         // 입력값을 static 변수에 저장
    printf("저장된 값은: %d입니다.\n", stored_value);
}
