#include <stdlib.h>

double arrSum(double *arr, int size)
{
    double sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double arrMax(double *arr, int size)
{
    double max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

double arrAvg(double *arr, int size)
{
    return arrSum(arr, size) / size;
}
