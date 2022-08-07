#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main(){
    float R, L, H, V;
    printf("Pleas enter radius: ");
    scanf("%f", &R);
    printf("Pleas enter water level: ");
    scanf("%f", &H);
    //Volume
    V = M_PI*R*R*H;
    //printf("Pi in C is: %f\n", M_PI);
    printf("Volume of the water is: %.2fm3\n", V);

return 0;
}