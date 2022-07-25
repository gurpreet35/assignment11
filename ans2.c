//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int LCM(int ,int);
int main(){
    int x,y;
    printf("Enter the value of first number:");
    scanf("%d",&x);
    printf("Enter the value of second number:");
    scanf("%d",&y);
    printf("The HCF of %d,%d is %d",x,y,HCF(x,y));
    return 0;
}
int HCF(int n1,int n2){
    int i,flag=0;
    if(n1>n2){
       i=n2;
    }
    else
    i=n1;
    while(1){
    if((n1%i==0)&&(n2%i==0)){
        return i;
    }
    i--;
    }
    
}