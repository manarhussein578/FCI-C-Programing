 //(Table of Squares and Cubes) Using only the techniques you learned in this chapter, write a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print the following table of values:
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1;
  for(;n<=10;n++)
  {
      printf("%d\t%d\t%d\n",n,n*n,n*n*n);
  }
    return 0;
}*/

#include<stdio.h>
int main()
{
int a=0,s=1,d=2,f=3,g=4,h=5,j=6,k=7,l=8,z=9,x=10;
printf("%d\t%d\t%d\n",a,a*a,a*a*a);
printf("%d\t%d\t%d\n",s,s*s,s*s*s);
printf("%d\t%d\t%d\n",d,d*d,d*d*d);
printf("%d\t%d\t%d\n",f,f*f,f*f*f);
printf("%d\t%d\t%d\n",g,g*g,g*g*g);
printf("%d\t%d\t%d\n",h,h*h,h*h*h);
printf("%d\t%d\t%d\n",j,j*j,j*j*j);
printf("%d\t%d\t%d\n",k,k*k,k*k*k);
printf("%d\t%d\t%d\n",l,l*l,l*l*l);
printf("%d\t%d\t%d\n",z,z*z,z*z*z);
printf("%d\t%d\t%d\n",x,x*x,x*x*x);
    return 0;
}
