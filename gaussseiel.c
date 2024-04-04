#include <stdio.h>
#include <math.h>

#define N 3  // Number of equations and variables
#define MAX_ITER 5  // Maximum number of iterations

// Function to calculate the absolute value of a number
double abs_val(double x) {
    return x >= 0 ? x : -x;
}

// Gauss-Seidel method implementation
void gauss_seidel(double A[N][N + 1], double x[N]) {
    int i, j, iter;
    double sum;

    for (iter = 0; iter < MAX_ITER; iter++) {
        for (i = 0; i < N; i++) {
            sum = 0.0;
            for (j = 0; j < N; j++) {
                if (j != i) {
                    sum += A[i][j] * x[j];
                }
            }
            x[i] = (A[i][N] - sum) / A[i][i];
        }

        // Print the solution after each iteration
        printf("Iteration %d:\n", iter + 1);
        for (i = 0; i < N; i++) {
            printf("x[%d] = %.6lf\n", i, x[i]);
        }
        printf("\n");
    }
}

int main() {
    double A[N][N + 1] = {
        {10, 2, 1, 7},
        {1, 5, 1, -8},
        {2, 3, 10, 6}
    };

    double x[N] = {0};  // Initial guess for solution

    gauss_seidel(A, x);

    return 0;
}
