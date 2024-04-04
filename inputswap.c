#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    c= a;
    a = b;
    b = c;
    printf("Value of a and b are %d, %d ", a, b );
    return 0;
}

