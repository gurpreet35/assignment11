// Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int ,int);
int main(){
    int x,y;
    printf("Enter the value of first number:");
    scanf("%d",&x);
    printf("Enter the value of second number:");
    scanf("%d",&y);
    printf("The LCM of %d,%d is %d",x,y,LCM(x,y));
    return 0;
}
int LCM(int n1,int n2){
    int i,flag=0;
    if(n1>n2){
       i=n1;
    }
    else
    i=n2;
    while(1){
    if((i%n1==0)&&(i%n2==0)){
        return i;
    }
    i++;
    }
    
}