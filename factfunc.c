#include<stdio.h>
int fact(n);
int main()
{
    int i,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    fact(n);
    return 0;
}

int fact(n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
    printf("The fact is %d",f);
}