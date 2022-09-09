#include <stdio.h>
#include <stdlib.h>

char *toASCII(int value, char *result, int base);
void Conv(short sValue, char *pBuffer);

int main()
{
    short num = -26;
    char buff[7];
    Conv(num, buff);
    printf("%s\n", buff);
    num = 16025;
    Conv(num, buff);
    printf("%s\n", buff);
    return 0;
}

char *toASCII(int value, char *result, int base)
{
    if (base < 2 || base > 36)
    {
        *result = '\0';
        return result;
    }

    char *ptr = result, *ptr1 = result, tmp_char;
    int temp;

    do
    {
        temp = value;
        value /= base;
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[35 + (temp - value * base)];
    } while (value);

    if (temp < 0)
        *ptr++ = '-';
    *ptr-- = '\0';
    while (ptr1 < ptr)
    {
        tmp_char = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = tmp_char;
    }
    return result;
}
void Conv(short sValue, char *pBuffer)
{
    short num = abs(sValue);
    short val = num;
    int digits = 0;
    while (num > 0)
    {
        num = num / 10;
        digits++;
    }
    if (sValue < 0)
    {
        *pBuffer = '-';
        pBuffer++;
    }
    else
    {
        *pBuffer = ' ';
        pBuffer++;
    }
    switch (digits)
    {
    case 0:
        for (int i = 0; i < 5; i++)
        {
            *pBuffer = ' ';
            pBuffer++;
        }
        break;
    case 1:
        for (int i = 0; i < 4; i++)
        {
            *pBuffer = ' ';
            pBuffer++;
        }
        break;
    case 2:
        for (int i = 0; i < 3; i++)
        {
            *pBuffer = ' ';
            pBuffer++;
        }
        break;
    case 3:
        for (int i = 0; i < 2; i++)
        {
            *pBuffer = ' ';
            pBuffer++;
        }
        break;
    case 4:
        *pBuffer = ' ';
        pBuffer++;
        break;
    default:
        break;
    }
    toASCII(val, pBuffer, 10);
}