// 구조체 배열의 사용
#include <stdio.h>

int main() {
    struct person {
        char name[10];
        int age;
        char sex;
    };
    struct person X[3] = {{"홍길동", 20, 'M'},
                          {"황진이", 20, 'F'},
                          {"임꺽정", 30, 'M'}};
    int i, sum = 0;
    for (i = 0; i < 3; i++) {
        printf("이름: %s 나이: %d 성별: %c\n", X[i].name, X[i].age, X[i].sex);
        sum = sum + X[i].age;
    }
    printf("나이 합: %d\n", sum);
}