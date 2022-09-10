#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "declarations.h"
#define COUNT 20

typedef struct Node
{
    int data;
    struct Node *next;
} node_t;


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    struct Node *head = NULL;
    // printf("%d", rand());
    for (size_t i = 0; i < COUNT; i++)
    {
        push(&head, rand());
    }
    printList(head);
    printf("%ls", max(head));
    return 0;
}

