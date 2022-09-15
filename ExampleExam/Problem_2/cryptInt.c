#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

char symbol(int a);

int main(int argc, char const *argv[])
{

    //
    size_t num;
    printf("Please enter number: \n");
    scanf("%lu", &num);
    // char letter = 65;
    // char str[100];
    // sprintf(str, "%ld", num);
    // // printf("%ld", strlen(str));
    // for (size_t i = 0; i < strlen(str); i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         int x;
    //         sscanf(str[i], "%d", &x);
    //         printf("%c", (x + letter));

    //         // printf("%c", symbol(a));
    //     }
    // }

    int digits = 1 + (int)log10(num);
    char letter = 65;
    char *str = "";
    // printf("%c", leter + 1);
    int cnt = 0;
    while (num != 0)
    {
        int pos = num % 10;
        if (cnt % 2 == 0)
        {
            printf("%c", symbol(pos));
        } else printf("%c", pos + letter);
        num /= 10;
        cnt++;
    }
    printf("%s", str);
    puts("");
    return 0;
}

char symbol(int a)
{
    switch (a)
    {
    case 0:
        return '!';
        break;
    case 1:
        return '#';
        break;
    case 2:
        return '/';
        break;
    case 3:
        return '~';
        break;
    case 4:
        return '=';
        break;
    case 5:
        return '`';
        break;
    case 6:
        return '\\';
        break;
    case 7:
        return '>';
        break;
    case 8:
        return '.';
        break;
    case 9:
        return ',';
        break;
    default:
        break;
    }
}