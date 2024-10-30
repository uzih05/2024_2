#include <stdio.h>

int main() {
    int i, k, sum = 0, cnt = 0;

    for (i = 2; i < 100; i++) {
        for (k = 2; k < i; k++) {
            if (i % k == 0)
                break;
        }

        if (k == i) {
            sum += i;
            cnt++;
            printf("%d %d %d \n", cnt, i, sum);

            if (cnt >= 5)
                break;
        }
    }
    return 0;
}