#include<stdio.h>
int main()
{
    int a[7],i,sum=0;
    printf("Enter the  7 value of  number:\t");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is %d",sum);
    return 0;
}