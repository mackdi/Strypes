#ifndef functuons
#define functuons
#include <stdio.h>
#include <string.h>

void printArr(char *arr)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("Element No%d is %c\n",i+1, arr[i]);
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

void mostCommon(char *str)
{
    int i, max, index;
    int array[255] = {0};
    for (i = 0; str[i] != 0; i++)
    {
        ++array[str[i]];
    }

    max = array[0];
    index = 0;
    for (i = 0; str[i] != 0; i++)
    {
        if (array[str[i]] > max)
        {
            max = array[str[i]];
            index = i;
        }
    }
    printf("The most common character is: %c \n", str[index]);
}

#endif