#include <stdio.h>
#include <stdint.h>

#define MAX(x,y,z) ( (x > y && x > z) ? x : ( y > z) ? y : z )
#define MIN(x,y,z) ( (x < y && x < z) ? x : ( y < z) ? y : z )
#define SETBIT(mask, bit) (mask |= (1<<bit) )
#define CLEARBIT(mask, bit) (mask &= ~(1<<bit))
#define INVERSEBIT(mask, bit) (mask ^= (1<< bit))
#define CHECKBIT(mask, bit) (mask = (1<<bit)) //???
#define SWAP(a, b)  a^=b; b^=a; a^=b
//a = a + b; b = a - b; a = a - b

unsigned bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    puts("");
}


int main(){
    int x = 1,y = 2, z = 3;
    printf("The biggest is: %d\n", MAX(x,y,z) );
    printf("The smallest is: %d\n", MIN(x,y,z) );  

    



    unsigned mask = 2;
    bin(mask);
    int bit = 1;
    printf("%d\n", (mask & (1<<bit)));
    SETBIT(mask, bit);
    //printf("%lu\n", sizeof(a)* 8);
    bin(mask);
    
    CLEARBIT(mask, bit);
    bin(mask);
    bit = 5;
    INVERSEBIT(mask,bit);
    bin(mask);

    int a = 2, b =4, t;
    printf("Before swap: a=%d, b=%d \n", a,b );
    SWAP(a,b);
    printf("After swap: a=%d, b=%d \n", a,b );
    

    return 0;
}