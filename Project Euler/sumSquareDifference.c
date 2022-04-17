#include <stdio.h>
#include <math.h>

int main(){

    unsigned int sum =0;
    unsigned int sumSquared =0;

    for (int i =0; i<= 100; i++){
        sum += i;
        sumSquared += pow(i, 2);
    }


    sum = pow(sum, 2);

    int diff;

    diff = sum - sumSquared;

    printf("%i\n", diff);

}