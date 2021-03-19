#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordena_selecao(int *v, int tam){
	int i, j, aux1, aux2, cont;
	
	for(j=0;j<(tam-1);j++){
		aux1=j;
		for(i=(j+1);i<tam;i++){
			if(v[i]<v[aux1]){
				aux1=i;
			}
		}
	    for(cont=0;cont<tam;cont++){
			printf(" %d,",v[cont]);
		}
		printf("\n");
		aux2=v[j];
		v[j]=v[aux1];
		v[aux1]=aux2;	
	}
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int *vet = malloc(sizeof(int)*10);
	int i;
	
	for(i=0;i<10;i++){
		vet[i]=(rand()%100);
	}
	printf("\n Imprimindo o vetor antes da ordenação ... \n\n");
	for(i=0;i<10;i++){
		printf(" %d,",vet[i]);
	}
	printf("\n\n Realizando a ordenação ... \n\n");

	ordena_selecao(vet,10);
	
	printf("\n\n Imprimindo o vetor ordenado ... \n\n");

	for(i=0;i<10;i++){
		printf(" %d,",vet[i]);
	}	
	
	free(vet);
	
	printf("\n\n");
	
	return 0;
}