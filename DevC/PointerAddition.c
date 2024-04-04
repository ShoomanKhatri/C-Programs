#include <stdio.h>

int main() {
    int *p = (int*)1000;  // Declare an integer pointer and initialize it with the value 1000

    // Increment the pointer by 5 (assuming sizeof(int) is 4 bytes)
    p += 5;
    printf( "%d\n",sizeof(p)); //it returns 4.

    // Print the result
    printf("The value of p + 5 is: %p\n", 
	p);

    return 0;
}

//The value of p + 5 is: 000003FC.
//In decimal, this value is 1020.

