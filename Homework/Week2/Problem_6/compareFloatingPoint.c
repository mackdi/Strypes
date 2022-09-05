#include <stdio.h>
#include <math.h>
#include <float.h>

int nearlyEqual(float a, float b, float e)
{
    if (a == b)
    {
        return 1;
    }
    else if (a == 0 || b == 0 || fabs(a - b) < FLT_MIN)
    {
        // a or b is zero or both are extremely close to it
        printf("relative error is less meaningful here!\n");
        return fabs(a - b) < (e * FLT_MIN);
    }
    else
    {
        printf("relative error!\n");
        return fabs(a - b) / (fabs(a) - fabs(b)) < e;
    }
}

int main()
{
    float eps = FLT_EPSILON;
    float num1 = 1000.0f * 0.1f;
    float num2 = 0.0f;
    for (int i = 0; i < 1000; i++, num2 += 0.1f)
        printf("num1 is %f, num2 is %f\n", num1, num2);
    printf("%.50lf\n", FLT_MIN);
    printf("%.310lf\n", DBL_MIN);
    printf("%.20lf\n", FLT_EPSILON);
    printf("%d\n", nearlyEqual(num1, num2, eps));
    return 0;
}