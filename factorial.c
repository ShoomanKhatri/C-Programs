#include<stdio.h>
int main()
{
    int fact,n,j;
    printf("Enter any number:");
    scanf("%d",&n);
    fact=1;
    while(n>1)
    {
         fact=fact*n;
        n=n-1;
       
    }
     printf("The factorial is %d",fact);
    return 0;
}