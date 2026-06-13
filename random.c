#include <stdio.h>
#include <string.h>

int stoi (char *, int);

int main ()
{

    //
    // int test = 0xA;

    // //
    // int test2 = 0007;

    // char c[] = "0xA";

    // printf("%d\n", test);
    // printf(c);
    // printf("\n");
    // printf("%d\n", test * 2);
    // printf("\n");

    // printf("%d\n", test2);
    // printf("%o\n", test);

    char c[] = "12345";
    char d[] = "0xA";
    char e[] = "07";

    printf("%d\n", stoi(d, strlen(c)));

    return 0;
}

int stoi(char * str, int len)
{

    int j;
    int base;

    if(str[0] == '0')
    {
        if(str[1] == 'x') {
            base = 16;
            j = 1;
        }
        else {
            base = 8;
            j = 2;
        }

    }
    else if ((str[0] - '0') > 0 && (str[0] - '0') <=9) {
        base = 10;
        j = 0;
    }


    int digit;

    int integer = 0;
    int place = 1;
    
    for (int i = len - 1; i >= j; i--)
    {
         digit = str[i] - '0';
        integer = integer + (digit * place);
        place = place * base;
    }

    return integer;

}