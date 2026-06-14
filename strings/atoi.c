#include <ctype.h>
#include <stdio.h>

int atoi(char *);

int main()
{

    char string[] = "1234";

    printf("%d", atoi(string));

    return 0;
}

int atoi(char * str)
{

    int i, n, sign;

    for (i = 0; isspace(str[i]); i++)
        ;

    sign = (str[i] == '-') ? -1 : 1;

    if (str[i] == '+' || str[i] == '-')
        i++;
    
    for (n = 0; isdigit(str[i]); i++)
    {
        int b = str[i] - '0';
        
        n = 10 * n + (str[i] - '0');
    }
    
    return sign * n;
}