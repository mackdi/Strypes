#include <stdio.h>
#include <stdint.h>

#define MAX(x, y, z) ((x > y && x > z) ? x : (y > z) ? y \
                                                     : z)
#define MIN(x, y, z) ((x < y && x < z) ? x : (y < z) ? y \
                                                     : z)
#define SETBIT(mask, bit) (mask |= (1 << bit))
#define CLEARBIT(mask, bit) (mask &= ~(1 << bit))
#define INVERSEBIT(mask, bit) (mask ^= (1 << bit))
#define CHECKBIT(mask, bit) !!(mask & (1 << (bit)))
#define SWAP(a, b) \
    a ^= b;        \
    b ^= a;        \
    a ^= b
// or a = a + b; b = a - b; a = a - b

unsigned bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    puts("");
}

int main()
{
    int x = 1, y = 2, z = 3;
    printf("The biggest is: %d\n", MAX(x, y, z));
    printf("The smallest is: %d\n", MIN(x, y, z));
    unsigned mask = 0;
    int bit = 0;
    printf("Print mask\n");
    bin(mask);

    SETBIT(mask, bit);
    printf("Print set bit\n");
    bin(mask);

    CLEARBIT(mask, bit);
    printf("Print clear bit\n");
    bin(mask);

    bit = 5;
    INVERSEBIT(mask, bit);
    printf("Print inverse bit\n");
    bin(mask);

    bit = 5;
    if (CHECKBIT(mask, bit))
    {
        printf("Bit number %d is SET\n", bit);
    }
    else
        printf("Bit number %d is NOT SET\n", bit);

    int a = 2, b = 4, t;
    printf("Before swap: a=%d, b=%d \n", a, b);
    SWAP(a, b);
    printf("After swap: a=%d, b=%d \n", a, b);

    return 0;
}