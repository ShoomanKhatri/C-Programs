
#include<stdio.h>
void main()
{
	int n1,n2,n3;
	void avg (int a, int b, int c);
	clrscr();
	printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	avg(n1,n2,n3);
	getch();
}
void avg (int a, int b, int c)
{
	float average;
	average=(a+b+c)/3.0;
	printf("Average=%f",average);
}
