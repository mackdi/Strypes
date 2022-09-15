#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include "declarations.h"
#define COUNT 20

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    struct Node *head = NULL;
    for (size_t i = 0; i < COUNT; i++)
    {
        push(&head, rand());
    }
    printList(head);
    printf("Max element is: %ld\n", max(head)->data);
    printf("Bits sum is: %d\n", bitsSum(head));
    //free(head);
    return 0;
}
