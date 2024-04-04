#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; // The string to be reversed
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
//output
//Reversed string: !dlroW ,olleH