/*
	Name: Caminho Euleriano
	Author: André L.Corsi
	Date: 22/10/17 12:52
	Description: Algoritmo para analisar se uma matriz quadrada possui ou não caminho euleriano
*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

typedef struct CaminhoEuleriano{
	
	int total;
	int grau;
	
}caminho;


int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	caminho *ce;
	
	int i=0;
	int j=0;
	int n=0;
	ce->grau=0;
	ce->total=0;	
	
	
	printf("Digite o TAMANHO da MATRIZ QUADRADA 'A': ");
	scanf("%d",&n);
	printf("\n\n");
	
	int Mat[n][n];
	

	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			printf("Digite o elemento da posição A %d",i+1);	printf("%d: ", j+1);
			scanf("%d", &Mat[i][j]);
			printf("\n");
		}
	}
	
	puts("Matriz digitada: \n");
	
	
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			printf("%d ", Mat[i][j]);
		}
		
		printf("\n");
	}
	
	i=0;
	
	
	while(ce->total <= 2 && i < n){
		
		ce->grau = 0;
		
		for(j = 0; j < n; j++){
			ce->grau += Mat[i][j]; 
		}

		if(ce->grau%2 != 0){
			ce->total++;
			
			if(ce->total>=3){
				break;
				printf("\n\n Não existe caminho Euleriano");
			}
		}

		i++;
	}
	
	if(ce->total > 2 || ce->total == 1)
		puts("\nNão existe caminho Euleriano");
		
	else
		puts("\nExiste caminho Euleriano");
	
}//FIM
