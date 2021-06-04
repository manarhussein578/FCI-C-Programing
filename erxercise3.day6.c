#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,mn=10000;
   scanf("%d",&n);
  int i=1;
  for(;i<=n;i++)
  {
      scanf("%d",&num);
      if(mn>num)
      {
          mn=num;
      }
  }
  printf("%d",mn);

    return 0;
}
