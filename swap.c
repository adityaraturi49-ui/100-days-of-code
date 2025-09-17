#include <stdio.h>
int main() {
    int a, b, temp;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("\nbefore swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
