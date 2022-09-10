#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#define COUNT 20




typedef struct Node
{
    int data;
    struct Node* next;
} node_t;

void push( node_t ** Node, int data){
    node_t* n = malloc(sizeof(node_t));
    n->data = data;
    n->next = *Node;
    *Node = n;
}

void printList(node_t *head);
int * max(node_t * head);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    struct Node* head = NULL;
    //printf("%d", rand());
    for (size_t i = 0; i < COUNT; i++)
    {
       push(&head, rand());
    }
    printList(head);
    printf("%ls", max(head));
    return 0;
}

int * max(node_t * head){
    int max = INT_MIN;
    while (head != NULL) {
        if (max < head->data)
            max = head->data;
        head = head->next;
    }
    return &max;
}