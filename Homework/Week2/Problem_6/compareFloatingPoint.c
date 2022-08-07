#include <stdio.h>
#include <math.h>


int methodOne(float a, float b){

    float precision = 0.00001;
    if (((a - precision) < b) && 
      ((a + precision) > b))
   {
    return 1;
   }
  else
   {
    return 0;
   }
}

int methodTwo(float a, float b){
    return fabs(a - b) < 1.0e-5f;
}



int main(){
    float num1 = 1000.0f * 0.1f;
    float num2 = 0.0f;
    for (int i = 0; i < 1000; i++, num2 += 0.1f);

    printf("num1 is %f, num2 is %f\n", num1, num2);

    if(methodOne(num1, num2)){
        printf("equals\n");
    }else printf("not equals\n");


    return 0;
}