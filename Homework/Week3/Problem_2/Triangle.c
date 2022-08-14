#include <stdio.h>


int triangle(double a, double b, double c, double*S,double*P){
    if(a <= 0 || b<=0 || c <=0){
        return -1; 
    } else{
        *P = a+b+c;
        *S = *P/2;
        return 0;
    }
    
}

int main(){
double a,b,c,P,S;
//TODO wrong input check
while (scanf("%lf %lf %lf", &a,&b,&c)!=EOF)
{
    if(triangle(a,b,c,&S,&P)){
        printf("Invalid input\n");

    }else{
        printf("P = %lf\n", P);
        printf("S = %lf\n", S);
    }
}
    return 0;
}