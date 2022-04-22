#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){



    unsigned long long int N = pow(10, 1);
    unsigned long long int sum = 0;

    for(unsigned long long int n = 0; n <= N; n++ ){
        for(unsigned long long int m =0; m <= n; m++){
            sum += (m^(n-m)) + (m|(n-m)) + (m&(n-m));
            //printf("%llu, %llu, %llu\n", (m^(n-m)), (m|(n-m)), (m&(n-m)));
        }

        printf("n = %llu .\n", sum);
    }

    unsigned long long int sumd;
    sumd = sum % 1000000007 ;

    printf("%llu\n", sum);

    printf("%llu\n", sumd);
}