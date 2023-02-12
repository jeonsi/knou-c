#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    FILE *fp;
    fp = fopen("sample4.txt", "a");
    fputs("Cho DS\n", fp);
    fputs("Han JK\n", fp);
    fputs("Knag MH\n", fp);
    fclose(fp);
}