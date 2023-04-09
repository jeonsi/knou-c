/* 예제 2-2 */
/* 반지름을 입력받아 원의 면적을 구하는 프로그램 */
#include <stdio.h>  // 표준입출력 헤더 포함
#define IN "원의 반지름은 100입니다.\n" // IN 매크로 상수 정의
#define PI 3.1415926535 // PI 매크로 상수 정의
#define AREA(X) (PI*(X)*(X))    // AREA 매크로 함수 정의
#define OUT printf("원의 면적을 구하고 프로그램을 좋료합니다.\n")   // OUT 매크로 상수 정의
void main() {   // main 함수 시작
    printf("%s\n", IN); // IN 매크로 상수로 정의된 문자열 출력
    printf("원의 면적은 %10.5f입니다.\n\n", AREA(100)); // AREA() 매크로 함수 호출
    OUT;    // OUT 매크로 상수 사용
}