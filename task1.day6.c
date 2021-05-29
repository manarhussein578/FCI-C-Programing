//(Calculating Credit Limits)
//clbr=credit limit before recession
//clar=credit limit after recession
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int account_num1,account_num2,account_num3,clbr1,clbr2,clbr3;
   scanf("%d%d%d%d%d%d",&account_num1,&account_num2,&account_num3,&clbr1,&clbr2,&clbr3);
   printf("clar1=%d account_num1=%d\n",clbr1/2,account_num1);
   printf("clar2=%d account_num2=%d\n",clbr2/2,account_num2);
   printf("clar3=%d account_num3=%d\n",clbr3/2,account_num3);

    return 0;
}
