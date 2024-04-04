#include<stdio.h>
int main()
{
    int a[]={5,12,23,39,48,52,60,74};
    int key,mid,l=0,r=7,found=0;
    printf("Enter the data to be search:  ");
    scanf("%d",&key);
    while(l<=r)
    {
        mid=(l+r)/2;
        if(key==a[mid]){
            found=1;
            break;
        }
        else if(key<a[mid])
            r=mid-1;
        else
        l=mid+1;
    }

    if (found==1)
    {
      printf("key found in %d index",mid);
    }else{
        printf("Key not found");
    }

    return 0;
}