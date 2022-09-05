#include <stdio.h>

int rectangle(double w, double h, double *S, double *P)
{
    if (w <= 0 || h <= 0)
    {
        return -1;
    }
    else
    {
        *P = 2 * (w + h);
        *S = w * h;
        return 0;
    }
}

int main()
{
    double w, h, P, S;
    // TODO wrong input check - when enter char -> infinite loop
    while (scanf("%lf %lf", &w, &h) != EOF)
    {
        if (rectangle(w, h, &S, &P))
        {
            printf("Invalid input\n");
        }
        else
        {
            printf("P = %lf\n", P);
            printf("S = %lf\n", S);
        }
    }
    return 0;
}