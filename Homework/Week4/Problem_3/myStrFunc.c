#include <stdio.h>
#include <string.h>

size_t myStrlen(char * string);
size_t myStrnlen(char * string, size_t max);


int main(){

    char a[500]="";
    //printf("%ld\n", myStrlen(a));
    printf("%ld\n", myStrnlen(a,20));

    return 0;
}

size_t myStrlen(char * string){

    int sum = 0;

    // With for loop
    // int sum = 0;
    // for (size_t i = 0; string[i] != '\0'; i++)
    // {
    //     sum++;
    // }

    int i = 0;
    while (string[i] != '\0') /* '\0' - means the end of the string */
    {
        sum++;
        i++;
    }
    return sum;
}

size_t myStrnlen(char * string, size_t max){

    int sum = 0;

    // With for loop
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