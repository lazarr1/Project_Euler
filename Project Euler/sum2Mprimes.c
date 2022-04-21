#include <stdio.h>
#include <stdlib.h>
#include <math.h>



long long int sumPrimes(int maxPrime){

    int i =3;

    long int * listOfPrimes = (long int *)malloc(maxPrime * sizeof(long int)); //allocate plenty of space

    listOfPrimes[0] = 2;
    long long int sum = 2;

    int numPrimes = 0;

    while(1){

        for(int j = 0; j <= numPrimes; j++){
            if (i % listOfPrimes[j] == 0){ //only need to test for prime factors
                break;
            }
            else if (j == numPrimes ){ //if all prime numbers have been checked
                numPrimes++;
                sum += i;
                listOfPrimes[numPrimes] = i;
                printf("%li\n", listOfPrimes[numPrimes]); //allow user to see the current prime number and progress.
            }
        }


        if( listOfPrimes[numPrimes] > maxPrime){
            sum -= listOfPrimes[numPrimes];
            break;
        }



        i +=2; //all even numbers do not need to be checked
    }

   // printf("%i\n", numPrimes); 
    return sum;



}


int main(){

    long long int sum;

    sum = sumPrimes(2000000);

    printf("%lli\n", sum);
}