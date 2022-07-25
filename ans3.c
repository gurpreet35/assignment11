// Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime_num_checker(int );
int main(){
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  prime_num_checker(num);
  if((prime_num_checker(num))==0){
   printf("%d is a prime number",num);
  }
  else{
    printf("%d is not  a prime number",num);
  }
    return 0;
}
int prime_num_checker(int n){
    int i,flag=0;

    for(i=2;i<n;i++){
        if(n%i==0){
          return 1;
          break;
        }
        else{
        return 0;
    }
    }
}