/* Write a function to find the next prime number of a given number. (TSRS) */
#include<stdio.h>
int prime_num_next(int );
int main(){
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  prime_num_next(num);
  printf("%d ", prime_num_next(num));
    return 0;
}
int prime_num_next(int n){
    int flag = 0, i;
    while (1)
    {
        n++;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 0)
        {
            return n;
        }
    }
   
}