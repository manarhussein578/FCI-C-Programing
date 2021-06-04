#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,counter=1,sum,rem;
   while(counter<=500)
   {
       num=counter;
       sum=0;
       while(num!=0)
       {
           rem=num%10;
           sum+=(rem*rem*rem);
           num/=10;
       }
       if(counter==sum)
       {
           printf("the armstrong number=%d\n",counter);
       }
       counter++;
   }
    return 0;
}
