// 구조체 포인터의 사용
#include <stdio.h>

struct student {
    char name[10];
    int kor;
    int math;
};

int main() {
    struct student hs[4] = {{"KIM HS", 90, 95}, {"LEE SY", 85, 90},
                            {"PARK GS", 70, 85}, {"CHOI HJ", 95, 75}};
    struct student *p;
    p = hs;

    printf("%s %d %d\n", p->name, p->kor, p->math);
    p += 3;
    printf("%s %d %d\n", p->name, p->kor, p->math);
    p--;
    printf("%s %d %d\n", p->name, p->kor, p->math);
}
