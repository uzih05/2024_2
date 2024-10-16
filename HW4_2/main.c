#include <stdio.h>

int main(void) {
    int sum = 0;  // 3의 배수의 합
    int first_3 = 3;  // 첫 번째 3의 배수
    int count = 0;  // 출력된 3의 배수 개수

    while (sum <= 1000) {
        sum += first_3;  // 3의 배수를 합산
        count++;  // 배수 개수 증가
        first_3 += 3;  // 다음 3의 배수로 이동
    }

    // 결과 출력
    printf("3의 배수가 처음으로 1000보다 커질 때의 값: %d\n", sum);
    printf("그 때의 3의 배수: %d\n", first_3 - 3);  // 마지막으로 더해진 배수 출력

    return 0;
}
