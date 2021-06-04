#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        int j=1;
        for(;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
