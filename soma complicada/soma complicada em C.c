#include <stdio.h>

int main(){
    unsigned long long contador = 100000000000, divisor = 2017, soma, i;

    for(; contador > 0; contador--){
        soma = 0;
        for(i = 1; i <= contador; i++){
            if(contador % i == 0){
                soma += i;
            }
        }
        if(soma % divisor == 0){
            printf("%I64u\n", contador);
        }
    }
    return 0;
}