#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "functions.h"


double randBetween(double min, double max);
void printArr(double *arr, int n);


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n, m;
    double *arr;
    scanf("%d", &n);
    arr = (double *)malloc(n * sizeof(double));

    // printf("%lf", randfrom(1.0,10.0));
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = randBetween(1.0, 10.0);
    }
    printArr(arr, n);
    scanf("%d", &m);
    arr = (double *)realloc(arr, (m + n) * sizeof(double));
    for (size_t i = n; i < m + n; i++)
    {
        arr[i] = randBetween(10.0, 20.0);
    }
    printArr(arr, m + n);
    printf("Sum of arr is %.2lf\n", arrSum(arr, n + m));
    printf("Max num in arr is %.2lf\n", arrMax(arr, n + m));
    printf("Average in arr is %.2lf\n", arrAvg(arr, n + m));

    return 0;
}

double randBetween(double min, double max)
{
    double range = (max - min);
    double div = RAND_MAX / range;
    // printf("min is %lf, rand/div is %lf\n", min, roundf((rand() / div)*100)/100);
    return min + (rand() / div);
}

void printArr(double *arr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%.2lf\n", arr[i]);
    }
}

