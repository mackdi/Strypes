#ifndef DEFINITIONS
#define DEFINITIONS
#include "declarations.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

void printList(node_t *head)
{
    node_t *current = head;
    while (current != NULL)
    {
        printf("%ld\n", current->data);
        current = current->next;
    }
}

int max(node_t *head)
{
    int max = INT_MIN;
    while (head != NULL)
    {
        if (max < head->data)
            max = head->data;
        head = head->next;
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

#endif