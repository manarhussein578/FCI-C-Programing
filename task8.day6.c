//(Factorials)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=1;
    int i=1;
    for(;i<=5;i++)
    {
        fact=1;
        int j=1;
        for(;j<=5;j++)
        {
            fact*=j;
        }
         printf("%d\n",fact);
    }
    return 0;
}
