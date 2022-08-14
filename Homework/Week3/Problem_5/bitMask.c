#include <stdio.h>
#include <stdint.h>

unsigned onesCount(uint64_t mask){
    int count = 0;

    while (mask > 0)
    {
        if(mask & 1)
        count ++;
        mask = mask >> 1;
    }
    
    return count;
    //printf("%d\n",count);
}

int main(){
    //is it necessary a to be uint64_t ?
    uint64_t a = 5;
    //onesCount(a);
    printf("%d\n", onesCount(a));


    return 0;
}