#include <stdio.h>
#include <math.h>

int calcularsomadedivisores(int numero);

int main(){
    unsigned long contador = 1000000, divisor = 2017, soma, i, somatotal = 0;

    for(; contador > 0; contador--){
        soma = 0;
        for(i = 1; i <= contador; i++){
            if(contador % i == 0){
                soma += i;
            }
        }
        if(soma % divisor == 0){
            printf("%lu\n", contador);
            somatotal += contador;
        }
    }
    printf("soma = %lu\n", somatotal);
    return 0;
}

int calcularsomadedivisores(int numero){

    unsigned long long soma = 0;
    unsigned long i;
    if(numero % 2 == 0){
        soma += 2;
        soma += numero/2;
    }

    for(i = 3; i < sqrtf(numero) + 1; i++){
        if(numero % i == 0){
            soma += i;
        }
    }
    return soma;
}
