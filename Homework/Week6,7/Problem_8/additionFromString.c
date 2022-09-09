#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Add(char *p1, char *p2, char *result);
int main()
{
    char num1[50] = {""};
    char num2[50] = {""};
    char result[100] = {""};
    Add("77", "33", result);
}
void Add(char *p1, char *p2, char *result)
{

    int number1 = atoi(p1);
    int number2 = atoi(p2);
    int sum;
    sum = number1 + number2;
    sprintf(result, "%d", sum);
    printf("%s\n", result);
}