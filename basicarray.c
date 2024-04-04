#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the value of 10 numbers : ");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}