#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2, real, imag;
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct: %.2lf %.2l
