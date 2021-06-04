#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   const int a=n;
   int arr[a];
   int i=1;
   for(;i<=a;i++)
   {
       scanf("%d",&arr[i]);
   }
   int mn=10000;
   int j=1;
   for(;j<=a;j++)
   {
       if(mn>arr[j])
       {
           mn=arr[j];;
       }
   }
   printf("the minimun=%d",mn);

    return 0;
}
