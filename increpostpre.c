#include<stdio.h>
int main()
{
    int a,b,c;
    a=5;
    b=a++;
    c=++a;
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",c);
    return 0;
}