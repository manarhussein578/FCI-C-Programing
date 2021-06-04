#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,a,b,GCD;
    printf("enter a value of a\n");
    scanf("%d",&a);
      printf("enter a value of b\n");
    scanf("%d",&b);
    for(;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
           GCD=i;
        }
    }
    printf("the GCD=%d",GCD);
    return 0;
}
