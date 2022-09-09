#include <stdio.h>

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue);
void Bubble(int *pArray, unsigned int uLen);
void swap(int *a, int *b);

int main()
{
    int n, m;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
    unsigned int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Please enter value for position %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Please enter searched value: ");
    scanf("%d", &m);
    printf("Index is %d\n", BinSearch(arr, n, m));
    return 0;
}

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue)
{
    unsigned int max = uArraySize;
    unsigned int min = 0;
    unsigned int point = max / 2;
    unsigned int ret = 0;
    Bubble(pArray, uArraySize);
    while (pArray[point] != uValue)
    {
        if (pArray[point] > uValue)
        {
            max = point;
            point = (min + max) / 2;
            if (pArray[point] == uValue)
                ret = point;
        }
        else if (pArray[point] < uValue)
        {
            min = point;
            point = (min + (max / 2)) - 1;
            if (pArray[point] == uValue)
                ret = point;
        }
        else
        {
            ret = point;
            continue;
        }
    }
    return ret;
}
void Bubble(int *pArray, unsigned int uLen)
{
    if (uLen > 1)
    {
        for (int i = 0; i < uLen; i++)
        {
            for (int j = 0; j < uLen; j++)
            {
                if (pArray[i] < pArray[j])
                {
                    swap(&pArray[i], &pArray[j]);
                }
            }
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}