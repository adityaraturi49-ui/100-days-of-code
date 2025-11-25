#include <stdio.h>

enum Status {
    A = 10,
    B,
    C,
};

int main() {

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}