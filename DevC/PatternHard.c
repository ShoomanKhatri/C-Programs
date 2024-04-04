#include<stdio.h>
#include<stdlib.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int val = n - min(min(i, 2 * n - 2 - i), min(j, 2 * n - 2 - j));
            printf("%d ", val);
        }
        printf("\n");
    }
    
    return 0;
}
