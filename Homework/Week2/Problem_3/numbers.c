#include <stdio.h>

int main(){
    float num1, num2, num3, max;
    FILE* numbers = fopen("numbers.txt", "r");
    fscanf(numbers, "%f %f %f", &num1, &num2 , &num3);

    //scanf("%f %f %f", &num1, &num2 , &num3); must use ./numbers.out < numbers.txt
   
    if (num1 >= num2 && num1 >= num3)
        max = num1;
    else if (num2 >= num1 && num2 >= num3)
        max = num2;
    else 
    max = num3;

    printf("%f\n", max);
    return 0;

}