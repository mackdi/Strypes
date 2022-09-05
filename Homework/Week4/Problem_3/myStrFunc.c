#include <stdio.h>
#include <string.h>

size_t myStrlen(char *string);
size_t myStrnlen(char *string, size_t max);
char *myStrcpy(char *dest, const char *src);
char *myStrncpy(char *dest, const char *src, size_t max);
char *myStrcat(char *restrict dest, const char *restrict src);
char *myStrncat(char *restrict dest, const char *restrict src, size_t max);
// TODO  strcmp() strncmp() strstr()

int main()
{
    char a[20] = "dasdwqeqe";
    printf("%ld\n", myStrlen(a));
    printf("%ld\n", myStrnlen(a, 3));
    char original[] = "abcd312312";
    char copy[20];
    printf("%s\n", myStrcpy(copy, original));
    printf("%s\n", myStrncpy(copy, original, 5));
    printf("%s\n", myStrcat(copy, " More"));
    printf("%s\n", myStrncat(copy, " More", 2));
    return 0;
}

size_t myStrlen(char *string)
{
    int sum = 0;
    int i = 0;
    while (string[i] != '\0') /* '\0' - means the end of the string */
    {
        sum++;
        i++;
    }
    return sum;
}

size_t myStrnlen(char *string, size_t max)
{
    int sum = 0;
    for (size_t i = 0; string[i] != '\0'; i++)
    {
        if (i == max)
        {
            break;
        }
        sum++;
    }
    return sum;
}

char *myStrcpy(char *dest, const char *src)
{
    // return if no memory is allocated to the destination
    if (dest == NULL)
    {
        return NULL;
    }
    char *ptr = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}

char *myStrncpy(char *dest, const char *src, size_t max)
{
    // return if no memory is allocated to the destination
    if (dest == NULL)
    {
        return NULL;
    }
    char *ptr = dest;
    while (*src && max--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}

char *myStrcat(char *restrict dest, const char *restrict src)
{
    // make pointer at the end of dest
    char *ptr = dest + myStrlen(dest);
    while (*src != '\0')
    {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}

char *myStrncat(char *restrict dest, const char *restrict src, size_t max)
{
    char *ptr = dest + myStrlen(dest);
    while (*src && max--)
    {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}