// 1차원 배열의 선언
#include <stdio.h>

void main() {
    int array[4];
    int array1[4] = {10, 20, 30, 40};
    int array2[] = {10, 20, 30, 40,};   // 10, 20, 30, 40
    int array3[4] = {10, 20,};  // 10, 20, 0, 0
    int array4[4] = {1};    // 1, 0, 0, 0
    for (int i = 0; i <= 3; i++) {
        printf("array1[%d] = %d\t", i, array1[i]);
    }
    printf("\n");
    for (int i = 0; i <= 3; i++) {
        printf("array2[%d] = %d\t", i, array2[i]);
    }
    printf("\n");
    for (int i = 0; i <= 3; i++) {
        printf("array3[%d] = %d\t", i, array3[i]);
    }
    printf("\n");
    for (int i = 0; i <= 3; i++) {
        printf("array4[%d] = %d\t", i, array4[i]);
    }
    printf("\n");
}