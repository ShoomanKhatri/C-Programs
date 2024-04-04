#include<stdio.h>
int main()
{
    int a,b,c,g;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    g=a;
    else if(b>=a && b>=c)
    g=b;
    else
    g=c;
    printf("The greater number is %d : ",g);
    return 0;
}
