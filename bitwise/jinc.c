#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main ()
{
    
    setbits(255, 8, 4, 0);
    return 0;

}
unsigned setbits(unsigned x, int p, int n, unsigned y)
{

    int shift;
    unsigned mask, x_mask, y_mask;

    // unsigned right;

    shift = p - n;

    // for (int i = 0, mask = 1; i < n - 1; i++)
    //     mask = (mask << 1) + 1;

    for (int i = 0, y_mask = 1; i < n - 1; i++)
        y_mask = (y_mask << 1) + 1;

    

    // mask = mask << shift;

    // Keep all bits in x except those covered by the mask then or with isolated bits from y.
    return (x & ~(mask << shift)) | ((y && mask) << shift);
    // return (x & ~mask) | ((y << shift) & mask);


}