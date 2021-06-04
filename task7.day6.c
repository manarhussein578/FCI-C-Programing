//(Odd & even) Write a program that take an integer (n) from user then calculates and prints the product of odd integers from 1 to n and the summation of even integers from 1 to n.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,product=1,sum=0;
    printf("enter a value of n\n");
    scanf("%d",&n);
    int i=1;
    for(;i<=n;i++)
    {
        if(i%2==0){
         sum+=i;
        }
        else{
            product*=i;
        }

    }
    printf("sum of even integers=%d\n",sum);
    printf("product of odd integers=%d\n",product);
    return 0;
}
