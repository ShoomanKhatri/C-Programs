#include<stdio.h>
int sum(int a,int b); //function prototype or definition.
int main()
{
    int a,b,c;
    a=9;
    b=1;
    c=sum(a,b);              //function calling
    printf("The sum is %d",c);
    return 0;
}
int sum(int a,int b)                //defintion
{
    return a+b;
}