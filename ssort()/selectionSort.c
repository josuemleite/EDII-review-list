#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int minIndex(char v[], int i, int n){
	int j, imenor = i;
	for(j = i+1; j < n; j++) {
		if(strcmp(&v[imenor], &v[j]) > 0) {
			imenor = j;
		}
	}
	return imenor;		
}

void ssort(char v[], int n){
	int i, indiceMenor;
	for(i = 0; i < n-1; i++){
		indiceMenor = minIndex(v, i, n);
		troca(&v[i], &v[indiceMenor]);
	}
}

int main(){
	
	char vet[] = {'d', 'c', 'b', 'a'};
	int n = sizeof(vet)/sizeof(vet[0]);;
	
	printf("Vetor Original\n");
	printVetor(vet, n);

	ssort(vet, n);
	
	printf("Vetor Ordenado\n");
	printVetor(vet, n);
	
	return 0;
}
