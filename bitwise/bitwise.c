#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned rightrot(unsigned x, int n);

int main ()
{
    printf("%x \n", setbits(180, 3, 4, 255));
    printf("%x \n", invert(247, 8, 8));
    printf("%x \n", rightrot(224, 7));

    return 0;

}
unsigned setbits(unsigned x, int p, int n, unsigned y)
{

    int shift;
    unsigned mask, y_bits;

    // Initial attempt at bounds handling
    if (n > p)
        n = p;
    
    shift = p - n;
    
    mask = 1;
    for (int i = 0; i < n - 1; i++)
        mask = (mask << 1) + 1;

    
    mask = mask << shift;

    // Shift y to the proper position to isolate the desired bits using the mask
    y_bits = (y << shift) & mask;

    // zero out all bits except
    x = (x & ~mask) | y_bits;

    return x;
}
unsigned invert(unsigned x, int p, int n)
{
    unsigned mask;

    mask = 1;
    for (int i = 0; i < n - 1; i++)
        mask = (mask << 1) + 1;

    mask = mask << (p - n);

    x = (~x & mask) | (~mask & x);

    return x;
}
unsigned rightrot(unsigned x, int n)
{
    return x >> n;
}