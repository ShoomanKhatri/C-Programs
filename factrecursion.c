#include<stdio.h>
int f(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n,f(n));
    return 0;
}

 int f(int n) 
 {
    if (n>=1)
        return n*f(n-1);
    else
        return 1;
}
