/* 예제 1-2 */
/* 두 수를 입력받아 곱의 결과를 출력하는 프로그램 */
#include <stdio.h>  // 표준 입출력 헤더 포함
#pragma warning(disable:4996)   // 권장하지 않는 함수 사용에 대한 경고 메시지 무시

int a, b, c;    // 정수를 저장하는 변수 선언
int product(int x, int y);  // 사용자 함수 원형

void main() {    // main 함수 시작
    printf("Enter a number between 1 and 100 : ");   // 첫 번째 수를 입력
    scanf("%d", &a);    // scanf 함수를 사용하여 a의 주소 제공, 정수 포맷 지정
    printf("Enter another number between 1 and 100 : ");   // 두 번째 수를 입력
    scanf("%d", &b);    // scanf 함수를 사용하여 b의 주소 제공, 정수 포맷 지정
    c = product(a, b);  // product 함수를 호출하고 결과를 c에 저장
    printf("%d * %d = %d\n", a, b, c);  // 입력한 수 a, b와 곱셈 결과 c를 출력
}   // main 함수 종료

int product(int x, int y) { // product 함수 정의, 입력 파라메터는 두개의 정수 x, y
    return (x * y); // x * y를 계산하여 return
}   // product 함수 종료