#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; // The string to be reversed
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {  //  \n0 is null character.
        length++;
    }
    printf("%d",length);
    return 0;
}

//Ouput 
//13