#include <stdio.h>
#include <math.h>
#include "main.h"

double f1(double x){
    return 3 * (0.5 / (x + 1) + 1);
}

double f2(double x){
    return 2.5 * x - 9.5;
}

double f3(double x){
    return 5 / x;
}

int main(void){
    printf("f1 f3:\n");
    double x1 = root(f1, f3, 1, 2, 0.001, 1, 0);

    printf("\nf2 f3:\n");
    double x2 = root(f2, f3, 3.5, 4.5, 0.001, 1, 0);

    printf("\nf1 f2:\n");
    double x3 = root(f1, f2, 4.5, 5.5, 0.001, 1, 0);

    double s1 = integral(f1, x1, x3, 0.001);
    double s2 = integral(f2, x2, x3, 0.001);
    double s3 = integral(f3, x1, x2, 0.001);


    printf("\nf1: %.4f\n", s1);
    printf("f2: %.4f\n", s2);
    printf("f3: %.4f\n", s3);

    printf("\nTotal area: %.4f\n", s1 - s2 - s3);
}
