#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,power_of_mario=100,power_of_monster;;
  scanf("%d",&n);
  int i=1;
  for(;i<=n;i++)
  {
      scanf("%d",&power_of_monster);
      power_of_mario-=power_of_monster;
  }
  if(power_of_mario>0)
  {
      printf("ALIVE");
  }
  else
  {
      printf("DEAD");
  }

    return 0;
}
