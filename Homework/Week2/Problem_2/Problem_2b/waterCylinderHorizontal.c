#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main(){
    float R, L, H, V, A;
    printf("Pleas enter radius: ");
    scanf("%f", &R);
    printf("Pleas enter water level: ");
    scanf("%f", &H);
    printf("Please enter water height: ");
    scanf("%f", &L);
    
    A = ((R * R) * acos((R-H)/R) - (R-H) * sqrt((2*R)*H - (H*H))); 
    V = A * L;
    
    printf("Volume of the water is: %f m3\n", V);

return 0;
}