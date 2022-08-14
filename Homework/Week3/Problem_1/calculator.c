#include <stdio.h>

int main(){
    float num1, num2;
    char oper;
    //TODO wrong input check typeof(num1)?
    while (scanf("%f %c %f", &num1,&oper,&num2)!=EOF)
    {
    // can be done with switch
    if(oper == '+') printf("%.2f\n", num1 + num2);
    if(oper == '-') printf("%.2f\n", num1 - num2);
    if(oper == 'x') printf("%.2f\n", num1 * num2);
    if(oper == '/') printf("%.2f\n", num1 / num2);
    else (printf("Wrong input\n"));
    }
    return 0;
}
