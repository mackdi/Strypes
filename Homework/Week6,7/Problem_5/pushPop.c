#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 20
int IsEmpty();
int IsFull();
void Push(int nNewValue);
int Pop();
int arr[MAX_SIZE];
int top = 0;
int bottom = 0;
int buffer_length = 0;
int main()
{
    int value = 0;

    while (IsFull())
    {
        printf("Please enter number: ");
        scanf("%d", &value);
        Push(value);
    }
    while (IsEmpty())
    {
        printf("Number[%d]=%d\n", bottom, Pop());
    }
}
int IsEmpty()
{

    if (buffer_length == 0)
    {
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}
int IsFull()
{
    if (buffer_length == MAX_SIZE)
    {
        printf("Full!\n");
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}
void Push(int nNewValue)
{
    arr[top] = nNewValue;
    buffer_length++;
    top++;
}
int Pop()
{
    buffer_length--;
    return arr[bottom++];
}