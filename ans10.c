//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include<stdio.h>
int fact(int);
int main(){
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
       sum=sum+(fact(i)/i); 
       
    }
    printf("Sum of given series is:%d",sum);
    return 0;
}
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = i * fact;
    }
    return fact;
}