#include <stdio.h>
#pragma warning(disable:4996)

int file_copy(char *oldname, char *newname);

int main() {
    char source[80], destination[80];
    printf("\nEnter source file: ");
    gets(source);
    printf("\nEnter destination file: ");
    gets(destination);
    if(file_copy(source, destination) == 0)
        puts("\ncopy operation successful");
    else
        fprintf(stderr, "\nerror during copy operation");
}

int file_copy(char *oldname, char *newname) {
    FILE *fold, *fnew;
    int c;
    if((fnew = fopen(newname, "wb")) == NULL) {
        return -1;
    }
    if((fold = fopen(oldname, "rb")) == NULL) {
        return -1;
    }
    while(1) {
        c = fgetc(fold);
        if(!feof(fold))
            fputc(c, fnew);
        else
            break;
    }
    fclose(fnew);
    fclose(fold);
    return 0;
}