#include <stdio.h>
#include <math.h>

int main()
{
    float mass, height, bmi;
    printf("Please enter your mass: ");
    scanf("%f", &mass);
    printf("Please enter your height: ");
    scanf("%f", &height);
    bmi = mass / pow(height, 2);
    printf("Your BMI is: %f\n", bmi);
    return 0;
}