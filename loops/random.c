#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)  /* there was a line */
        printf("%s\n", longest);
    return 0;
}

/* get_line: specialized version to read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;


    // break_out fails because i is 1 not 0 when ctrl-d is sent?
    // int break_out = 0;

    for (i=0; (c=getchar()) !=EOF; i++)
    {
       
        if (i < lim-1 && c!='\n')
            s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}