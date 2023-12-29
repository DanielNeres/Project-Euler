#include <stdio.h>
#include <math.h>

int calcularsomadedivisores(int numero);

int main(){
    unsigned long long Numero_colosso = 1000000000, soma = 0, i;
    int divisor = 2017;
    for(i = divisor - 1; i < Numero_colosso; i++){
    soma += calcularsomadedivisores(i);
    }
    printf("soma = %64lu\n", soma);
    return 0;
}

int calcularsomadedivisores(int numero){
    unsigned long long soma = 0;
    unsigned long long i;
    soma += 1 + numero;
    if(numero % 2 == 0){
        soma += 2;
        soma += numero/2;
    }

    for(i = 3; i < sqrtf(numero) + 1; i++){
        if(numero % i == 0){
            soma += i;
        }
    }
    printf("somaLocal = %64lu\n", soma);
    return soma;
}
