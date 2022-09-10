#include <stdio.h>

unsigned sumArrayDigits(const int *arr, size_t n);

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        printf("Enter number for position %ld: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The sum is: %d\n", sumArrayDigits(arr, n));
    return 0;
}

unsigned sumArrayDigits(const int *arr, size_t n)
{
    int sum = 0, sumAll = 0, r;
    for (size_t i = 0; i < n; i++)
    {
        int t = arr[i];
        while (t != 0)
        {
            r = t % 10;
            sum = sum + r;
            t = t / 10;
        }
    }
    return sum;
}
