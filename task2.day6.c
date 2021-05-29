//(Table of Decimal, Binary, Octal and Hexadecimal Equivalents)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for ( int i = 1 ; i <256 ; i++ ){
            printf ( "%d\t" , i );
            printf ( "%o\t" , i);
            printf ( "%x\n" , i);
        }

    return 0;
}
