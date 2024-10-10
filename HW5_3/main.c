#include <stdio.h>

int main(void) {
    int a = 0, b = 0;  // 초기화는 필수

    // a가 1000 이상이 될 때까지 루프를 실행!
    while(a < 1000) {
        for(int i = 1; i <= 1000; i++) {
            b = i * i;          // i의 제곱을 b에 저장
            printf("%d\n", b);  // b 출력 디버깅 느낌
            a = b;              // a에 b 값 넣기

            if (a >= 1000)      // a가 1000 이상이면 종료
                break;
        }
    }

    // 1000을 넘는 최초의 a값 출력
    printf("1000을 넘어갔을 때 a의 값: %d\n", a);

    return 0;
}
