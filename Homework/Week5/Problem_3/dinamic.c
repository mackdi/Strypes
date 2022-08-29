#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


double randfrom(double min, double max) ;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    unsigned n,m,p;
    scanf("%d", &n);
    double min = 0.0;
    double max = 1.0;

    double *arr, *tempArr;
    arr = (double *)malloc(n*sizeof(double));

    for (size_t i = 0; i < n; i++)
    {
        arr[i] = randfrom(min,max);
    }  

    for (size_t i = 0; i < n; i++)
    {
        printf("n array: %.1f\n", arr[i]);
    }  

    //NEW ARRAY
    scanf("%d", &m);
    min = 1.0;
    max = 2.0;

    tempArr = (double *)malloc((n+m)*sizeof(double));

    // assigning from arr to temparr
    for (size_t i = 0; i < n; i++)
    {
        tempArr[i] = arr[i];
    } 

    //Adding more random numbers
    for (int i = (n); i < (n+m); i++)
    {
        tempArr[i] = randfrom(min,max);
    }  

    //releasing the memory held by pointer p
    free(arr);
    //assigning the address held by q to p for the array
    arr = tempArr;
    //removing the address of array from q
    tempArr = NULL;

    for (size_t i = 0; i < m+n; i++)
    {
        printf("n+m array: %.1f\n", arr[i]);
    } 
    //Witout tempArr; will use realock()
    scanf("%d", &p);
    min = 2.0;
    max = 3.0;

    arr = realloc(arr, (n+m+p) * sizeof(double));
    if (NULL == arr)
    {
       return EXIT_FAILURE;
    }

    //Adding more random numbers
    for (int i = (n+m); i < (n+m+p); i++)
    {
        arr[i] = randfrom(min,max);
    }  

    for (size_t i = 0; i < m+n+p; i++)
    {
        printf("n+m+p array: %.1f\n", arr[i]);
    } 

    return 0;
}


double randfrom(double min, double max) 
{
    double range = (max - min); 
    double div = RAND_MAX / range;
    return min + (rand() / div);
}
