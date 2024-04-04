#include<stdio.h>
int main()
{
    int fact,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is = %d",fact);
    return 0;
}
