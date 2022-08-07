#include <stdio.h>

int main(){
    int num1, num2, num3, result;

    scanf("%d %d %d", &num1, &num2, &num3);
    //result = num1 ^ num2 ^ num3; // not working when 3 of 1s
    result = (num1?1:0)+(num2?1:0)+(num3?1:0) == 1; // when odd numbers of 1s

    printf("%d\n", result);
    return 0;

}
