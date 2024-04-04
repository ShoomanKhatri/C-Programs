#include<stdio.h>
int main()
{
    int a=5, b=7, c;
    c= a;
    a = b;
    b = c;
    printf("Value of a and b are %d, %d ", a, b );
    return 0;
}

