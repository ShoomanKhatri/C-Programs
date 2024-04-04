#include<stdio.h>
int large(int a, int b, int c)
{
    if(a>=c && b>=c) 
    return a;
    else if(b>=a && b>=c)
    return b;
    else 
    return c;
}
int main()
{
    int a=1,b=2,c=3,large;
    large=(a,b,c);
    printf("Large number is %d",large);
    return 0;
}