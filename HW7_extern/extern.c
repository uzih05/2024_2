#include <stdio.h>

extern int a;  // extern 키워드를 사용하여 a를 외부에서 정의된 전역 변수로 선언

void check_value() {
    // a의 값 출력
    printf("extern.c에서 본 ex의 값은: %d\n", a);
}
