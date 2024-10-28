#include <stdio.h>



int main(void) {

    int i = 10;         // 변수 선언

    int* p;             // 포인터 값 선언


    p = &i;              // 변수 i의 주소를 포인터 p에 대입

    printf("i=%d\n", i);



    *p = 20;             // 포인터를 통해 변수의 값 변경

    printf("i=%d\n", i);


    return 0;

}