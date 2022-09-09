#include <stdio.h>

void Bubble(int *pArray, unsigned int uLen);
void sw(int *a, int *b);

int main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    Bubble(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
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

void sw(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}