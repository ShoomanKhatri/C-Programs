#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;  // Calculate the carry
        a = a ^ b;          // Sum without considering carry
        b = carry << 1;     // Carry is added by shifting it
    }
    return a;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    printf("Sum: %d\n", add(num1, num2));
    return 0;
}

