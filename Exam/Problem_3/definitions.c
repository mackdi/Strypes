#ifndef DEFINITIONS
#define DEFINITIONS
#include <stdlib.h>
#include <limits.h>



void push(node_t **Node, int data)
{
    node_t *n = malloc(sizeof(node_t));
    n->data = data;
    n->next = *Node;
    *Node = n;
}


void printList(node_t *head)
{
    node_t *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
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
#endif