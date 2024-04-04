#include<stdio.h>
int main()
{
    int i,sum;
    int a[10]={1,2,5,6,7,10,3,4,15,12};
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        sum=sum+a[i];
    }
    printf("Sum of odd numbers in the array is %d",sum);
    return 0;
}