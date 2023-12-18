#include<stdio.h>

int main(){
// as declarações "unsigned long int" serve para tornar a variavel a maior possivel, pois o "unsigned" retira o sinal liberando um bit, e o "long" estende a variavel int
	unsigned long int numeroimprecao = 0, numeroanterior = 1, soma = 0; 
	for(;numeroimprecao <= 4000000;){
	// importante imprimir o numero antes que o valor seja modificado	
		printf("\n%li", numeroimprecao); 
	// soma o numero de impreção a outra variavel, que no incio serve para inciar a sequencia, mas após o primeiro laço ele reistra o ultimo valor usado na impreção	
		numeroimprecao += numeroanterior; 
	// atualiza o numero anterior que foi usado na impreção, por meio da diferença entre o numero impreço e o numero anterior ao anterior deste, por exemplo 8, e feita a diferença entre 8 e dois numeros anteriores a ele, assim ficaria 8 - 3 = 5 que é o numero anterior a 8
	// vale salientar que essa variavel só começa a registrar o numero anterior a impreção ao final do primeiro laço, e que essa logica só começa a fazer sentido após o primeiro laço
		numeroanterior = numeroimprecao - numeroanterior;
		if(numeroimprecao % 2 == 0){
        soma += numeroimprecao;
	}
	}
	printf("\nsoma = %d", soma);
		return 0;
}
