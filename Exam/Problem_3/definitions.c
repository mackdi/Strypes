#ifndef DEFINITIONS
#define DEFINITIONS
#include "declarations.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#define CHECKBIT(mask,bit) !!(mask & (1ull << (bit)))

void printList(node_t *head)
{
    node_t *current = head;
    while (current != NULL)
    {
        printf("%ld\n", current->data);
        current = current->next;
    }
}

node_t *max(node_t *head)
{
    uint64_t tempMax = 0;
    node_t *max = NULL;
    node_t *current = head;
    while (current != NULL)
    {
        if (current->data > tempMax)
        {
            max = current;
            tempMax = current->data;
        }
        current = current->next;
    }
    return max;
}

void push(node_t **Node, int64_t data)
{
    node_t *n = malloc(sizeof(node_t));
    n->data = data;
    n->next = *Node;
    *Node = n;
}

// void free(node_t **list)
// {
//     node_t *current = *list, *prev;
//     while (current)
//     {
//         prev = current;
//         current = current->next;
//         free(prev);
//     }
//     *list = NULL;
// }

uint64_t setedBitsSum(node_t* head)
{
    uint64_t result = 0;
    node_t* current = head;
    while (current != NULL) {
        for (int i = 0; i < 64; i++)
        {
            if (CHECKBIT(current->data,i))
            {
                result++;
            }
        }
        current = current->next;
    }
    return result;
}

#endif