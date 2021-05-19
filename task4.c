//(counting 7s) Write a program that reads an integer of 5 digits and determines and prints how many digits in the integer are 7s. Example, if the input is 45777, the program outputs 3. If the input is 12541, the program outputs 0.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,counter=0,n1,n2,n3,n4;
   scanf("%d",&n);
n1=n%10;
if(n1==7){
        counter++;
}
n/=10;
n2=n%10;
if(n2==7){
        counter++;
}
n/=10;
n3=n%10;
if(n3==7){
        counter++;
}
n/=10;
n4=n%10;
if(n4==7){
        counter++;
}
n/=10;
printf("%d",counter);
    return 0;
}
