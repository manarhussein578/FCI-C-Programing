//(Tabular Output) Write a program that uses looping to print the following table of values. Use the tab escape sequence (\t), in the 𝑝𝑟𝑖𝑛𝑡𝑓 statement to separate the columns with tabs.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1;
    for(;i<=10;i++)
    {
        printf("%d\t%d\t%d\t%d\n",i,i*10,i*100,i*1000);
    }
    return 0;
}
