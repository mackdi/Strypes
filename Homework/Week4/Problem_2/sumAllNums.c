#include <stdio.h>


unsigned sumArrayDigits(const int* arr, size_t n);

int main(){

    int arr[] = {12, 34, 5, 70 };


    printf("The sum is: %d\n",sumArrayDigits(arr,4));
    
    return 0;
}


unsigned sumArrayDigits(const int* arr, size_t n){

    int sum = 0, sumAll = 0, r;

    for (size_t i = 0; i < n; i++)
    {
        int t = arr[i];
        while (t !=0)
        {
            r = t % 10;
            sum = sum + r;
            t = t/10;
            //printf("%d\n", sum);
        }
        
        
    }
    
    return sum;

}