#include<stdio.h>
int sum(int a, int b); //function prototype or declaration
int main()
 {
    int a,b;
    printf("Enter youur number");
    scanf("%d%d", &a,&b);
    int add = sum(a,b);          //function calling
    printf("The sum is %d",add);
    return 0;
}

int sum(int a, int b) {             //function definition
    return a+b;   
}
