#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordena_insercao(int *v, int tam){
	   int j, i, aux, cont;
	   
	   for(j=1;j<tam;j++){
		   aux = v[j];
		   i = (j-1);
   	   	   while( (i>=0)&&(v[i]>=aux) ){
			   v[i+1] = v[i];
			   i--;
		   }
		   v[i+1]=aux;
			for(cont=0;cont<tam;cont++){
				printf(" %d,",v[cont]);
			}
			printf("\n");	
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

	ordena_insercao(vet,10);
	
	printf("\n\n Imprimindo o vetor ordenado ... \n\n");

	for(i=0;i<10;i++){
		printf(" %d,",vet[i]);
	}	
	
	free(vet);
	
	printf("\n\n");
	
	return 0;
}