#include <stdio.h>

int main() {
    char str[20] = "Hello, World!"; // The string to be reversed   This code is tested on online c compiler.
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
