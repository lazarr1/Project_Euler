#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i =3;
    int listOfPrimes[10005] = {2};

    int numPrimes = 0;

    while(1){

        for(int j = 0; j <= numPrimes; j++){
            if (i % listOfPrimes[j] == 0){ //only need to test for prime factors
                break;
            }
            else if (j == numPrimes ){ //if all prime numbers have been checked
                numPrimes++;
                listOfPrimes[numPrimes] = i;
            }
        }


        if(numPrimes == 10000){ //started at 0 so -1
            break;
        }


        i +=2;//all even numbers do not need to be checked
    }

    printf("%i\n", listOfPrimes[numPrimes]);


}