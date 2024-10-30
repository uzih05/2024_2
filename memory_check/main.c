#include <stdio.h>
#include <string.h>

int main(){

    char test[10] = "Hi Hello";

    memset(test + 3, 'b', 5);

    printf("%s", test); //결과: "Hi bbbbb"

    return 0;
}