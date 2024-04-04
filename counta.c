#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[50];
    int count;
    printf("Enter name: ");
    scanf("%s",name);
    for(i=0;i<strlen(name);i++)
    {
       if(name[i]=='a'|| name[i]=='A')
       {
       count=count+1;
       }
    }
    printf(" \n Occurence of a is %d",count);
    return 0;
}