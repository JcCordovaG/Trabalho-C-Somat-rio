#include <stdio.h>
#include <stdlib.h>

int main() {

// A soma dos primeiros 5 termos é 1 + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! = 2.70833
   
int N;
    double termo = 1.0;
    double e = 1.0; 

    for (N = 0; N <= 4; N++) {
        termo /= N; 
        e += termo; 
    }

    printf("e = : %.5f\n", e);

    return 0;
}