#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int c =20;
    while(1){

        for(int i =1; i<= c; i++){
            if(c % i != 0){
                break;
            }
            else if( i == 20){
                goto success;
            }
            
        }

        
        c++;

    }

    success:
        printf("%i\n", c);



}