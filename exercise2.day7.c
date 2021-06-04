#include <stdio.h>
#include <stdlib.h>
int main()
{
float sum=0.0;
int n ;
printf("enter the size of array n:");
scanf("%d\n",&n);
const int a=n;
 int arr[a];
 int i=0;
 for(;i<a-1;i++)
 {
     scanf("%d\n",&arr[i]);
 }
int j=0;
 for(;j<a-1;j++)
 {
     sum+=arr[j];
 }
 printf("the average of the elements=%f\n",sum/5.00);

    return 0;
}
