/* Write a function to print first N terms of Fibonacci series (TSRN)
 */
#include<stdio.h>
void fibo(int);
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    fibo(x);
    return 0;
}
void fibo(int n)
{
    int a = 0, b = 1,c;
    printf("%d %d",a,b);
    for (int i = 1; i <=(n-2); i++)
    {
        c = a + b;
        printf(" %d",c);
        a = b;
        b = c;
    }
}