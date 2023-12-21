#include <stdio.h>

int main(){
    unsigned long long int contador = 20, divisor = 7, soma, i;

    for(; contador > 0; contador--){
        soma = 0;
        for(i = 1; i <= contador; i++){
            if(contador % i == 0){
                soma += i;
            }
        }
        if(soma % divisor == 0){
            printf("%d\n", contador);
        }
    }
    return 0;
}