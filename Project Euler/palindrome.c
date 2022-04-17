#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char num[99999];

    int currNum;
    int c;

    for(int i =1; i< 1000; i++){
        for (int j = 1; j <1000; j++){
            
            c = j * i;


            sprintf(num, "%d", c);



        for(int k = 0; k < strlen(num)/2; k++){

            if(num[k] != num[strlen(num) -1 - k]){
                break;
            }
            else if( (k == strlen(num)/2 - 1 ) && c > currNum){
                currNum = j*i;
            }


        }


        }
    }

    printf("%i\n", currNum);

}
