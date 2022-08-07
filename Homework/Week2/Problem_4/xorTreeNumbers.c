#include <stdio.h>

int main(){
    int num1, num2, num3, result;

    scanf("%d %d %d", &num1, &num2, &num3);
    result = num1 ^ num2 ^ num3; //  when odd times of true
    //result = (num1?1:0)+(num2?1:0)+(num3?1:0) == 1; // when only one true
    printf("%d\n", result);
    return 0;

}
