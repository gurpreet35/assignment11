//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime_number(int,int);
int main(){
    int a,b;
     printf("Enter the value of first number:");
    scanf("%d",&a);
    printf("Enter the value of second number:");
    scanf("%d",&b);
    prime_number(a,b);
    return 0;
}
#include <stdio.h>
void prime_number(int a,int b)
{
    int i ,x,flag=0;
    printf("Prime numbers between two \'%d\' and \'%d\' numbers:",a,b);
    for(x=a;x<b;x++){
    for ( i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            flag=1;
            break;
        }
        else
        flag=0;
    }
        if(flag==0)
        printf(" %d",i);
    }
    }