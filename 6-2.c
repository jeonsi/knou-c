// 배열이 함수의 매개변수로 사용된 예
#include <stdio.h>
int score_sum(int gr[], int);

void main() {
    int score[5] = {10, 20, 30, 40, 50};
    int sum;
    sum = score_sum(score, 5);
    printf("sun = %d\n", sum);
    printf("score[0] = %d\n", score[0]);
}

int score_sum(int gr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += gr[i];
    }
    gr[0] = 0;
    return sum;
}