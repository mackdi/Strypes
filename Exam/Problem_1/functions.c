#ifndef functuons
#define functuons
#include <stdio.h>
#include <string.h>


void printArr(char *arr)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c\n", arr[i]);
    }
}

int lowerCount(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z'))
        {
            count++;
        }
    }
    return count;
}

#endif