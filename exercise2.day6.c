#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,sum=0;
while(n!=0)
{
scanf("%d",&n);
sum+=n;
if(sum>=200)
printf("%d",sum);

}
    return 0;
}
