#include <limits.h>
#include <stdio.h>

int main ()
{

    printf("\t\tHex\t\tOctal\t\tint\t\tuint\n");

    int a = 1;
    printf("INT_MAX  ::\t%X, \t%o, \t%d, \t\t%u\n", INT_MAX, INT_MAX, INT_MAX);
    printf("UINT_MAX ::\t%x, \t%o, \t%d, \t\t%u\n", UINT_MAX, UINT_MAX, UINT_MAX);

    printf("\n");

    unsigned unsignedinteger = 0xffffffff;
    // unsigned unsignedinteger = -0xffffffff;
    // unsigned unsignedinteger = -1;
    printf("test ::\t\t%x, \t%o, \t%d,\t\t%u", unsignedinteger, unsignedinteger);

    int signedinteger = 99;



    return 0;
}