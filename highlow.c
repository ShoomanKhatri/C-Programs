#include<stdio.h>
int main()
{
    int a[4],i,high,low;
    printf("Insert 4 number: ");
    for(i=0;i<4;i++) 
    {
    scanf("%d",&a[i]);
    }
    high=a[0];
    low=a[0];
    for(i=0;i<4;i++)
    {
    if(a[i]>high)
    high=a[i];
    else if(a[i]<low)
    low=a[i];
    }
    printf("The highest and lowest number are %d and %d respectively.",high,low);
    return 0;
}