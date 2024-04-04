//C Program to Find the Average of Three Numbers Using Function

#include<stdio.h>
void average(int,int, int);
void main()
{
   int x, y, z;           //Declaring Variables
   printf("Enter Three Numbers : \n");    
   scanf("%d %d %d",&x, &y, &z);     //Input Numbers
 
   average(x,y,z);  //Calling Function to find the Average of three numbers
   
}
void average(int a,int b, int c)
{   
    float avg;
    avg=(a+b+c)/3.0;     
    printf("Average of Three Numebers is : %f", avg);    
}