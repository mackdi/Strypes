#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int count(node_t * head)
{
    size_t count = 0;  //size_t is long unsigned
    node_t * current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}


int max(node_t * head){
    int max = INT_MIN;
    while (head != NULL) {
        if (max < head->data)
            max = head->data;
        head = head->next;
    }
    return max;
}

double avg(node_t * head){
    int sum = 0;
    unsigned cnt =0;
    node_t * current  = head;
    while (current)
    {
        cnt++;
        sum += current->data;
        current = current->next;
    }
    return (double)sum /cnt;
}


int main(int argc, char const *argv[])
{
    struct Node* head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 23);
    push(&head, 4);
    printf("%d\n",count(head));
    printf("%d\n",max(head));
    printf("%.2lf\n",avg(head));
    return 0;
}
