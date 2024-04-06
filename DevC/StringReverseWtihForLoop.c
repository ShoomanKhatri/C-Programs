#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; // The string to be reversed
    int length = 0;
    int i=0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    printf("Reversed String: ");
    for (i = length-1; i>=0; i--)     // lenght-1 because last character is '\0' which is  null.
	{
         printf("%c",str[i]);
   }


    return 0;
}
//output  //This is  also running in online programiz compiler.
//Reversed string: !dlroW ,olleH
