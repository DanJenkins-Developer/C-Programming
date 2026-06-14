#include <limits.h>
#include <stdio.h>

int main ()
{

    printf("%-15s %-15s %-15s %-15s %-15s\n", "", "", "Integers", "", "");
    printf("\n");
    printf("%-15s %-15s %-15s %-15s %-15s\n", "", "Hex", "Octal", "Int", "Uint");
    printf("%-15s %-15x %-15o %-15d %-15u\n", "INT_MAX ::" , INT_MAX, INT_MAX, INT_MAX);
    printf("%-15s %-15x %-15o %-15d %-15u\n", "UINT_MAX ::", UINT_MAX, UINT_MAX, UINT_MAX);

    printf("\n");

    // unsigned unsignedinteger = 0xffffffff;
    // // unsigned unsignedinteger = -0xffffffff;
    // // unsigned unsignedinteger = -1;
    // printf("test ::\t\t%x, \t%o, \t%d,\t\t%u", unsignedinteger, unsignedinteger);

    // int signedinteger = 99;



    return 0;
}