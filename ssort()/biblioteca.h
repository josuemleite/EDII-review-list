#include <stdio.h>
#include <stdlib.h>

void troca(char *a, char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void printVetor(char v[], int n){
	int i;
	for(i = 0; i < n; i++)
	  printf(" %c |", v[i]);
	printf("\n");  
}
