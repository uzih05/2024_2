#include <stdio.h>
#include <sys/wait.h>

int main() {
    FILE *f1, *f2; // 파일포인터 정의
    char grade;
    char topName[50], bottomName[50]; // 이름을 위한 배열 추가
    int n, id, kor, eng, math, total, i;
    int korTotal, engTotal, mathTotal, classTotal, maxTotal, minTotal, topId, bottomId;
    float avg, korAvg, engAvg, mathAvg, classAvg;

    f1 = fopen("data2.txt", "r");
    f2 = fopen("summary.txt", "w"); // 수정된 부분

    fprintf(f2, "--------------------------------------------\n");
    fprintf(f2, "성적처리 결과 \n");
    fprintf(f2, "--------------------------------------------\n");

    fscanf(f1, "%d", &n);

    fscanf(f1, "%s %d %d %d %d", topName, &id, &kor, &eng, &math); // 이름 저장
    total = kor + eng + math;
    avg = total / 3.0;

    // 성적 계산 기준 수정
    if (total > 360) grade = 'A';
    else if (total > 320) grade = 'B';
    else if (total > 280) grade = 'C';
    else if (total > 240) grade = 'D';
    else grade = 'F';

    fprintf(f2, "이름:%s 학번:%4d 국어:%3d 영어:%3d 총점:%3d 평균:%6.2f 학점:%2c\n", topName, id, kor, eng, total, avg, grade);

    // 총점 초기화
    korTotal = kor;
    engTotal = eng;
    mathTotal = math;
    classTotal = total;
    maxTotal = minTotal = total;
    topId = bottomId = id;

    for (i = 1; i < n; i++) {
        fscanf(f1, "%s %d %d %d %d", bottomName, &id, &kor, &eng, &math); // 이름 저장
        total = kor + eng + math;
        avg = total / 3.0;

        // 성적 계산 기준 수정
        if (total > 360) grade = 'A';
        else if (total > 320) grade = 'B';
        else if (total > 280) grade = 'C';
        else if (total > 240) grade = 'D';
        else grade = 'F';

        fprintf(f2, "이름:%s 학번:%4d 국어:%3d 영어:%3d 수학:%3d 총점:%3d 평균:%6.2f 학점:%2c\n", bottomName, id, kor, eng, math, total, avg, grade);

        korTotal += kor;
        engTotal += eng;
        mathTotal += math;
        classTotal += total;

        if (maxTotal < total) {
            maxTotal = total;
            topId = id;
            // 최고 점수일 때 이름 저장
            sprintf(topName, "%s", bottomName); // 이전 최고 점수 학생의 이름을 저장
        }
        if (minTotal > total) {
            minTotal = total;
            bottomId = id;
            // 최저 점수일 때 이름 저장
            sprintf(bottomName, "%s", bottomName); // 현재 학생의 이름을 저장
        }
    }

    korAvg = korTotal / (float)n;
    engAvg = engTotal / (float)n;
    mathAvg = mathTotal / (float)n;
    classAvg = classTotal / (float)(n * 3);

    fprintf(f2, "\n학생 수 : %d \n", n);
    fprintf(f2, "학급 평균 : %6.2f \n", classAvg);
    fprintf(f2, "국어 평균 : %6.2f \n", korAvg);
    fprintf(f2, "영어 평균 : %6.2f \n", engAvg);
    fprintf(f2, "수학 평균 : %6.2f \n", mathAvg);
    fprintf(f2, "최고득점자 : %s (학번: %d) \n", topName, topId);
    fprintf(f2, "최저득점자 : %s (학번: %d) \n", bottomName, bottomId);

    fclose(f1);
    fclose(f2);

    return 0;
}
