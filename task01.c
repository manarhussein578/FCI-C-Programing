 //(Final Velocity) Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints the final velocity, v, and distance traversed, s, using the following equations
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long u,a,t,v,s;
    printf("enter a value of u\n");
    scanf("%d",&u);
    printf("enter a value of a\n");
    scanf("%d",&a);
    printf("enter a value of t\n");
    scanf("%d",&t);
    v=u+(a*t);
    s=(u*t)+(a/2)*(t*t);
    printf("v=%d\n",v);
    printf("s=%d\n",s);
    return 0;
}
