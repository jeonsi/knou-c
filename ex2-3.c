/* 예제 2-3 */
/* 매크로 정의가 된 자신의 헤더 파일을 판들어서 사용하는 프로그램 */
#include "exam2-3.h"    // exam2-3.h 헤더파일 포함
void main() {   // main 함수 호출 시작
    int add_result, sub_result;     // 결과값 변수 정의, 사용되지 않음
    printf("10과 5를 더하면 %d이다.\n", ADD(10, 5));    // ADD 매크로 함수 호출 및 출력
    printf("10에서 5를 빼면 %d이다.\n", SUB(10, 5));    // SUB 매크로 함수 호출 및 출력
}   // main 함수 종료