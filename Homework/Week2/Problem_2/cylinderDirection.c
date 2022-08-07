#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(){
    float R, L, H, V, A;
    short direction;
    printf("Enter 1 for vertical or 0 for horizontal: ");
    scanf("%hd", &direction);

    if(direction){
        printf("Please enter radius: ");
        scanf("%f", &R);
        printf("Please enter water level: ");
        scanf("%f", &H);
        //Volume formula
        V = M_PI*R*R*H;
        //printf("Pi in C is: %f\n", M_PI);
        printf("Volume of the water is: %.2fm3\n", V);
    } else{
        printf("Please enter radius: ");
        scanf("%f", &R);
        printf("Please enter water level: ");
        scanf("%f", &H);
        printf("Please enter water height: ");
        scanf("%f", &L);

        A = ((R*R)*acos((R - H)/R)-(R - H) * sqrt((2*R)* H)-(H*H));
        V = A * L;
        printf("Volume of the water is: %.2fm3\n", V);
    }
return 0;
}