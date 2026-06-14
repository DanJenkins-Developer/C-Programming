#include <limits.h>
#include <stdio.h>

void psInt(void);

int main ()
{

    int cwidth = 15;

    printf("%015s %015s %-15s %-15s %-15s\n", "Helloooooooooooo", "", "Integers", "", "");
    printf("%0*s %0*s %-*s %-*s %-*s\n", cwidth, "Hellooooooooo", cwidth, "", cwidth, "Integers", cwidth, "", cwidth, "");

    printf("\n");

    // psInt();
    // printf("\n");

    // unsigned unsignedinteger = 0xffffffff;
    // // unsigned unsignedinteger = -0xffffffff;
    // // unsigned unsignedinteger = -1;
    // printf("test ::\t\t%x, \t%o, \t%d,\t\t%u", unsignedinteger, unsignedinteger);

    // int signedinteger = 99;



    return 0;
}

void psInt()
{
    printf("%-15s %-15s %-15s %-15s %-15s\n", "", "", "Integers", "", "");
    printf("\n");
    printf("%-15s %-15s %-15s %-15s %-15s\n", "", "Hex", "Octal", "Int", "Uint");
    printf("%-15s %-15x %-15o %-15d %-15u\n", "INT_MAX ::" , INT_MAX, INT_MAX, INT_MAX);
    printf("%-15s %-15x %-15o %-15d %-15u\n", "UINT_MAX ::", UINT_MAX, UINT_MAX, UINT_MAX);
}