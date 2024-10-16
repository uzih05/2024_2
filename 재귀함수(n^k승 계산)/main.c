#include <math.h>
#include <stdio.h>
int power(int x, int n) {
    if (n > 0)
        return x * power(x,n-1);
    return 1;
}
int main(void){
    int a, b;
    printf("밑과 지수를 입력하세요: ");
    scanf("%d", &a);
    scanf("%d", &b);
    power(a, b);
    printf("%d\n", power(a, b));
}