//Write a program in C to find the square of any number using the function
#include<stdio.h>
int square(int );
int main(){
    int n;
    printf("Enter the vlue of n:");
    scanf("%d",&n);
    printf("The square of %d is : %d",n,square(n));
    return 0;
}
int square(int x){
    int c;
    c=x*x;
    return c;
}