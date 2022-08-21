#include <stdio.h>
#include <string.h>

size_t myStrlen(char * string);


int main(){

    char a[500]="2sfsdfwertwerwtegdfgdfgdfgdfterert";
    printf("%ld\n", myStrlen(a));
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