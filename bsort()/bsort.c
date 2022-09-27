#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void bsort(int v[], int n) {
	int i, j;
	for(i = n; i > 0; i--) {
		for(j = n-1; j > 0; j--) {
			if(v[j] > v[j-1]) {
				troca(&v[j], &v[j-1]);
			}
		}
	}
}

int main(){
	
	int *vet, n, i;
	
	printf("Tamanho do vetor: ");
	scanf("%d", &n);
	
	vet = malloc(sizeof(int)*n);
	geraVet(vet, n);
	
	printf("Vetor gerado:\n");
	printVetor(vet, n);
	
	bsort(vet, n);
	
	printf("Vetor ordenado:\n");
	printVetor(vet, n);
	
	return 0;
}
