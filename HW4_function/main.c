#include <stdio.h>
#include "cmake-build-debug/sum.h"

int main() {
    int x, y;

    // 사용자로부터 두 정수를 입력받음
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // sum 함수 호출
    int result = sum(x, y);

    // 결과 출력
    printf("The sum is: %d\n", result);
    return 0;
}
