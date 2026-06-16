#include <limits.h>
#include <stdio.h>

void psInt(void);
void psChar();


void dynamicWidthPrint(void);

int main ()
{

    dynamicWidthPrint();
    // printf("\n");

    // psInt();
    // printf("\n");
    
    psChar();
    printf("\n");
    

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
    printf("%-15s %-15x %-15o %-15d %-15s\n", "INT_MAX ::" , INT_MAX, INT_MAX, INT_MAX, "");
    printf("%-15s %-15x %-15o %-15d %-15u\n", "UINT_MAX ::", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);

}

void psChar()
{
    printf("%-15s %-15s %-15s %-15s %-15s\n", "", "", "Char", "", "");
    printf("\n");
    printf("%-15s %-15s %-15s %-15s %-15s\n", "", "Hex", "Octal", "Int", "Uint");
    printf("%-15s %-15x %-15o %-15d %-15s\n", "UCHAR_MAX ::" , UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, "");
    printf("\n");
    printf("%-15s %-15x %-15o %-15d %-15s\n", "SCHAR_MIN ::", SCHAR_MIN, SCHAR_MIN, SCHAR_MIN,  "");
    printf("%-15s %-15x %-15o %-15d %-15s\n", "SCHAR_MAX ::", SCHAR_MAX, SCHAR_MAX, SCHAR_MAX, "");
}

void dynamicWidthPrint()
{
    int cwidth = 20;

    printf("%15s %15s %-15s %-15s %-15s\n", "Helloooooooooooo", "", "Integers", "", "");
    printf("%*s %*s %-*s %-*s %-*s\n", cwidth, "Hellooooooooo", cwidth, "", cwidth, "Integers", cwidth, "", cwidth, "");
}