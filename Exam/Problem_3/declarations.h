#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include <stdint.h>
#include <stdlib.h>

typedef struct Node
{
    int64_t data;
    struct Node *next;
} node_t;

void push(node_t **Node, int64_t data);
void printList(node_t *head);
node_t *max(node_t *head);
//void free(node_t **list);
uint64_t setedBitsSum(node_t* head);
#endif