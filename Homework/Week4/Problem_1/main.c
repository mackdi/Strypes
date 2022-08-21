#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int secondMax(const int* arr, size_t n, int * secondMax);


int main(){
    int sm;
    int arr[] = {};
    size_t arrSize = sizeof(arr)/sizeof(arr[0]);

    //secondMax(arr, arrSize, &sm);

    if (secondMax(arr, arrSize, &sm) == 1)
    {
        printf("The array has only one element.\n");
    } else if (secondMax(arr, arrSize, &sm) == 2)
    {
        printf("The array his empty.\n");
    } else if (secondMax(arr, arrSize, &sm) == 3)
    {
        printf("All element in the array are the same.\n");
    }
    else printf("Second max is: %d\n", sm);
    return 0;
}

int secondMax(const int* arr, size_t n, int * secondMax){
    if (n > 1)
    {
    int max = 0, secMax = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]> arr[max])
        {
            max = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[max])
        {
            if (secMax == -1)
            {
                secMax = i;
            } else if (arr[i] > arr[secMax])
            secMax = i;
        }
    }
    if (secMax == -1)
    {
        return 3;
    } else
    *secondMax = arr[secMax];
    } else if (n == 1)
    {
       return 1;
    } else return 2;
    }