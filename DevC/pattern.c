#include <stdio.h>

int main() {
    int n = 5; // Set your desired value of n

    for (int i = 1; i <= n; i++) {
        int spaces = n - i;
        int hashes = i;

        // Print spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // Print hashes
        for (int j = 0; j < hashes; j++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}

