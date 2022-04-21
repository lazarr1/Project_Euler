#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int a,b,c;

    int m = 2;
    int found = 1;

    while(found){


    
    for(int i = 1; i< m; i++){ //generate all primitive pythag triplets using Euclid's formula
        a = m*m - i*i;
        b = 2*m*i;
        c = m*m + i*i;

        if(a + b + c == 1000){
            found = 0;
            break;
        }
    }

    if(m > 1000){
        printf("Couldn't find a match\n");
        exit(0);
    }

    m++;

    }

    printf("%i, %i, %i\n", a,b,c);
    printf("abc = %i\n", a * b * c);

}