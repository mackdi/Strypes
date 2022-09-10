#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"
#include <string.h>

char randBetween(int min, int max);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char symb[] = {'!', '?', '$', '@', '*', '%', '-'};
    int n, m, k;
    char *arr;
    printf("Enter n: ");
    scanf("%d", &n);
    arr = (char *)malloc(n * sizeof(char));
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (arr == NULL)
    {
        fprintf(stderr, "%s", "Memory not reallocated.\n");
        return EXIT_FAILURE;
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        for (size_t i = 0; i < n; i++)
        {
            arr[i] = randBetween(97, 122);
        }
    }
    // printArr(arr, n);
    printf("Enter m: ");
    scanf("%d", &m);
    arr = (char *)realloc(arr, (m + n) * sizeof(char));
    // Check if the memory has been successfully
    // allocated by realloc or not
    if (arr == NULL)
    {
        fprintf(stderr, "%s", "Memory not reallocated.\n");
        return EXIT_FAILURE;
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using realloc.\n");
        for (size_t i = n; i < m + n; i++)
        {
            arr[i] = randBetween(65, 90);
        }
        // printArr(arr, m + n);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    arr = (char *)realloc(arr, (m + n + k) * sizeof(char));
    if (arr == NULL)
    {
        fprintf(stderr, "%s", "Memory not reallocated.\n");
        return EXIT_FAILURE;
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using realloc.\n");
        for (size_t i = m + n; i < m + n + k; i++)
        {
            arr[i] = symb[rand() / (RAND_MAX / 6)];
        }
    }
    arr = (char *)realloc(arr, (m + n + k + 1) * sizeof(char));
    arr[m + n + k + 1] = '\0';

    printArr(arr);
    printf("lower count: %d \n", lowerCount(arr));
    return 0;
}

char randBetween(int min, int max)
{
    double range = (max - min);
    double div = RAND_MAX / range;
    return min + (rand() / div);
}
