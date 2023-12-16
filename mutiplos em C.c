#include <stdio.h>
int main(void){
    int quantidade = 1000;
    for(; quantidade > 0; quantidade--){
        if(quantidade % 3 == 0){
            printf("%d\n", quantidade);
        }
        if(quantidade % 5 == 0){
            printf("%d\n", quantidade);
        }
    }

    return 0;
}
