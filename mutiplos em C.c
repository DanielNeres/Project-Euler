#include <stdio.h>

int main(void){
    int soma = 0, numero;
    for(numero = 0; soma < 1000; numero++){
        if(numero % 3 == 0){
            printf("%d\n", numero);
            soma += numero;
        }
        if(numero % 5 == 0){
            printf("%d\n", numero);
            soma += numero;
        }
    }
    printf("soma = %d", soma);

    return 0;
}
