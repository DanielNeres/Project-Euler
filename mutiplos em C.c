#include <stdio.h>

int main(void){
    int soma = 0;
    for(quantidade = 0; soma < 1000; quantidade++){
        if(quantidade % 3 == 0){
            printf("%d\n", quantidade);
        }
        if(quantidade % 5 == 0){
            printf("%d\n", quantidade);
        }
    }

    return 0;
}
