#include <stdio.h>
#include <math.h>

int main()
{
    float mass, height, bmiNew;
    printf("Please enter your mass: ");
    scanf("%f", &mass);
    printf("Please enter your height: ");
    scanf("%f", &height);
    bmiNew = 1.3f * (mass / pow(height, 2.5));
    printf("Your BMI is: %f\n", bmiNew);
    return 0;
}