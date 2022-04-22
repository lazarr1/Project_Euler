#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double * getCoefs(n){

    long double * coefs = (long double*)calloc(2, sizeof(long double));
    
    long long int nFac;
    nFac = round(tgamma(n+1)); 


    for(int i = 0; i<= n; i++){
        if(i % 2 == 0){
            coefs[0] += nFac*pow(sqrt(7),i)/(round(tgamma(i+1)) * round(tgamma(n-i+1))); //sum even terms
        }
        else if(i % 2 == 1){
            coefs[1] += nFac*pow(sqrt(7),i)/(round(tgamma(i+1)) * round(tgamma(n-i+1)));// sum odd terms
        }
    }

    return coefs;
}

int main(){

    long double * coefs;
    long long int coefsRl[2];

    int x = 100;

    int sum = 0, n =0;

    for(int j = 2; j<= x; j++){
        for(int i = 2; i <= x; i++){

            int l = (int)round(pow(2,i));
            
            
            if( (l - 1) % j == 0 ){
                printf("%i: %i\n", j, i);
                sum += i;
                break;
            }
            
            // coefs = getCoefs(i);

            // coefsRl[0] = (long long int)coefs[0];
            // coefsRl[1] = (long long int)(coefs[1]/sqrt(7));
           
            // printf("looking for %i: attempt %i: %lli, %lli\n",j, i, coefsRl[0] % j, coefsRl[1] % j);

            // if(coefsRl[0] % j == 1 && coefsRl[1] % j == 0){
            //     n = i;
            //     break;
            // }
            // else if( i == 21){
            //     n = 0;
            //     break;
            // }
            
            // free(coefs);

        }


        //sum += n;
    }


    printf("%i\n", sum);


}