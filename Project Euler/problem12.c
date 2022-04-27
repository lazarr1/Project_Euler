#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define BUFFER 100000



long int * generateListOfPrimes(int maxPrime, int * noPrimes){

    int i =3;

    long int * listOfPrimes = (long int *)malloc(maxPrime * sizeof(long int)); //allocate plenty of space

    listOfPrimes[0] = 2;
    int numPrimes = 0;

    while(1){

        for(int j = 0; j <= numPrimes; j++){
            if (i % listOfPrimes[j] == 0){ //only need to test for prime factors
                break;
            }
            else if (j == numPrimes ){ //if all prime numbers have been checked
                numPrimes++;
               // sum += i;
                listOfPrimes[numPrimes] = i;
               // printf("%li\n", listOfPrimes[numPrimes]); //allow user to see the current prime number and progress.
            }
        }

        if( listOfPrimes[numPrimes] >= maxPrime){
            break;
        }




        i +=2; //all even numbers do not need to be checked
    }

   // printf("%i\n", numPrimes); 

    noPrimes[0] = numPrimes;
    return listOfPrimes;



}


int main(){

    int triangleNumber = 1, iteration = 1, divisors= 1;

    int numPrimes[1] = {1};

    long int * listOfPrimes = generateListOfPrimes(BUFFER, numPrimes); //generate a list of primes within a buffer
    
    int listOfPrimeDivisors[BUFFER] = {1};

    for(int i = 0; i < *numPrimes; i++){
        listOfPrimeDivisors[i] = 1;
    }



    while(iteration <= pow(2, 32)){ //prime numbers only defined under 2^32

        divisors = 1;

        for(int i = 0; i < numPrimes[0]; i++){
            listOfPrimeDivisors[i] = 1; //listOfPrimeDivisors stores a 1 in each index under the number of primes generated
        }



        iteration++;
        triangleNumber += iteration;

        int temp = triangleNumber;


        //for each triangle number, break it down into its prime divisors
        while(temp > 1){
            for(int i = 0; i < numPrimes[0]; i++){
                if(temp % listOfPrimes[i] == 0){

                    //since it is divisibe by this prime number increment the corresponding position in listOfPrimeDivisors
                    listOfPrimeDivisors[i]++;


                    temp /= listOfPrimes[i];
                    break;
                }
            }
        }


        //number of total divisors is equal to the multiple of the exponents of the number's prime divisors (+1)
        for(int i = 0; i < numPrimes[0]; i++){
            divisors *= listOfPrimeDivisors[i];
        }



        if(divisors >= 500){
            break;
        }

    }

    free(listOfPrimes);

    printf("%i\n", triangleNumber);
}