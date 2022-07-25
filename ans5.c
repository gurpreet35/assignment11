// Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
void print_prime(int);
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    print_prime(x);
    return 0;
}
void print_prime(int num)
{
    int n, flag = 0, i,j,m=0;
    printf("prime numbers under %d are : ", num);
     for (n = 2; n ; n++)
     {
        for (i = 2; i < n/2; i++)
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
            printf("%d ", n);
            m++;
        }
        if(m==num){
            break;
        }
        
     }
}