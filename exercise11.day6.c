#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rem,p=1;
    long long bin=0;
    int n;
    scanf("%d",&n);
   while(n!=0)
   {
       rem=n%2;
       bin=bin+(rem*p);
       n/=2;
       p*=10;
   }
   printf("the binary is =%d",bin);
    return 0;
}
