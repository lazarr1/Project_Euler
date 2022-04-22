#include <stdio.h>
#include <stdlib.h>
#include <math.h>





int main(){

    int n = 20;


    double ans;

    ans = round(tgamma(2 * n + 1)/(tgamma(n + 1)* tgamma(n +1 )));


    printf("%f\n", ans);




}