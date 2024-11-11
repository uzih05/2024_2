#include <stdio.h>
#define N 10

int main() {
    FILE *fp;
    int id[N], score[N], temp, n;
    char nameMemory[N][20], addrMemory[N][20];
    char (*name[N])[20], (*addr[N])[20], (*tmp)[20];
    int i, j, limit;

    fp = fopen("student_name_address_test/data4.txt", "r");
    fscanf(fp, "%d", &n);

    for (i = 0; i < n; i++) {
        name[i] = nameMemory[i];
        addr[i] = addrMemory[i];
    }

    for (i = 0; i < n; i++) {
        fscanf(fp, "%d %s %s %d", &id[i], name[i], addr[i], &score[i]);
    }
    fclose(fp);

    limit = n - 1;
    for (i = limit; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (score[j] < score[j + 1]) {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;

                tmp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tmp;

                tmp = addr[j];
                addr[j] = addr[j + 1];
                addr[j + 1] = tmp;

                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
            }
        }
    }

    printf("------------------------------------------\n");
    printf(" 학번    이름       주소      성적\n");
    printf("------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%4d   %-8s %-8s %3d\n", id[i], name[i], addr[i], score[i]);
    }

    return 0;
}