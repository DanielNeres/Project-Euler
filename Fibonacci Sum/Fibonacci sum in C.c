#include<stdio.h>

int main(){
	unsigned long long int numeroimprecao = 1, numeroanterior = 1, soma = 0; 
	for(;numeroimprecao <= 4000000;){	
		printf("\n%li", numeroimprecao); 	
		numeroimprecao += numeroanterior; 
		numeroanterior = numeroimprecao - numeroanterior;
		if(numeroimprecao % 2 == 0){
        		soma += numeroimprecao;
		}
	}
	printf("\nsoma = %d", soma);
		return 0;
}
