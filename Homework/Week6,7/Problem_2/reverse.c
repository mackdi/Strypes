#include <stdio.h>

void Reverse(char *ptr);

int main()
{
    char str[] = "This string is reversed!";
    Reverse(str);
    printf("%s\n", str);
    return 0;
}

void Reverse(char *ptr)
{
    int i, len = 0, temp;
    while (ptr[len] != '\0')
    {
        len++;
    }
    for (i = 0; i < len / 2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[len - i - 1];
        ptr[len - i - 1] = temp;
    }
}