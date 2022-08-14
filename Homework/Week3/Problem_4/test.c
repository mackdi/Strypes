#include <stdio.h>
#include <math.h>

int quadEq(double a, double b, double c, double* root1, double* root2){
    double  desc = b*b - 4*a*c;
    if(desc > 0){
        printf("desc > 0\n");
        printf("x1 = %lf\n", *root1 = -b+sqrt (desc) / (2*a));
        printf("x2 = %lf\n", *root2 = -b-sqrt (desc) / (2*a));
        
    } else if(desc == 0){
        *root1 = -b/(2*a);
        *root2 = -b/(2*a);
        printf("Roots are equal: %lf = %lf\n", *root1, *root2);
    } else printf("No real roots\n");

}

int main(){

    double a,b,c,r1,r2,desc;
    scanf("%lf %lf, %lf", &a,&b,&c);
    desc = b*b - 4*a*c;
    if(desc > 0){
        printf("desc > 0\n");
        printf("x1 = %lf\n", r1 = -b+sqrt (desc) / (2*a));
        printf("x2 = %lf\n", r2 = -b-sqrt (desc) / (2*a));
        
    } else if(desc == 0){
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("Roots are equal: %lf = %lf\n", *r1, *root2);
    } else printf("No real roots\n");
   

    while (scanf("%lf %lf, %lf", &a,&b,&c)!=EOF)
    {
        quadEq(a,b,c,&r1,&r2);
    }
    

    return 0;
}