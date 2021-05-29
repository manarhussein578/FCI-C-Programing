//(Diamond-Printing Program) Write a program that prints the following diamond shape. You may use 𝑝𝑟𝑖𝑛𝑡𝑓 statements that print either a single asterisk (*) or a single blank. Maximize your use of iteration (with nested for statements) and minimize the number of 𝑝𝑟𝑖𝑛𝑡𝑓 statements.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("enter a value of n\n");
   scanf("%d",&n);
   int i=1;
   for(;i<=n;i++)
   {
       int m=1;
       for(;m<=n-i;m++)
       {
           printf(" ");
       }
       int j=1;
       for(;j<=i*2-1;j++)
       {
           printf("*");
       }
       printf("\n");
   }
    int k=n;
   for(;k>=1;k--)
   {
       int m=1;
       for(;m<=n-k;m++)
       {
           printf(" ");
       }
       int j=1;
       for(;j<=k*2-1;j++)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
