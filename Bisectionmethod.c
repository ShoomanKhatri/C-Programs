#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001

double func(double x) {
    return x*x*x - 4*x - 9; 
}

double bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("Bisection method not applicable for the given interval.\n");
        return 0.0;
    }

    double c;

    while ((b - a) >= EPSILON) {
        c = (a + b) / 2;

        if (func(c) == 0.0) {
            break;
        } else if (func(c) * func(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}

int main() {
    double a, b;
    printf("Enter interval [a, b]: ");
    scanf("%lf %lf", &a, &b);

    double root = bisection(a, b);

    if (root != 0.0) {
        printf("Approximate root: %lf\n", root);
    }

    return 0;
}

