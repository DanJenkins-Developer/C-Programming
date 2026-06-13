#include <stdio.h>
#include <string.h>

int stoi (char *, int);

int main ()
{
    char c[] = "12345";

    printf("Print by character:: ");
    for (int i = 0; c[i] != '\0'; i++)
    {
        printf("%c", c[i]);
    }

    printf("\n");

    // printf("Print by integer:: ");
    // for (int i = 0; c[i] != '\0'; i++)
    // {
    //     printf("%d", c[i] - '0');
    // }


    // printf("\n");

    int length = 0;

    for (int i = 0; c[i] != '\0'; ++i)
    {
        length++;
    }


    printf("String length manual:: %d\n", length);
    // printf("String length library:: %d\n", strlen(c));

    printf("Printing Backwards using length:: ");
    for (int i = length; i >= 0; --i)
    {
        printf("%c", c[i]);
    }

    printf("\n");

    printf("Integer:: %d \n", stoi(c, strlen(c)));

    return 0;
}

int stoi(char * str, int len)
{
    int digit;

    int integer = 0;
    int place = 1;
    
    for (int i = len - 1; i >= 0; i--)
    {
        digit = str[i] - '0';
        integer = integer + (digit * place);
        place = place * 10;
    }

    return integer;

}