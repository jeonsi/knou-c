#include <stdio.h>

struct data {
    int x;
    int y;
};

typedef struct data DATA;

int main() {
    DATA d = {1, 2};
    printf("d.x = %d, d.y = %d\n", d.x, d.y);
}