/*
	Name: Acentua��o.cpp
	Author: Andr� L.Corsi
	Date: 07/04/16 19:29
	Description: 
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>  //Bibilioteca para poder utilizar acentua��o

main()
{
   float n1,n2,soma;
	
	setlocale(LC_ALL,"Portuguese"); //Selecionar l�ngua: Portugu�s
	 printf("Primeiro n�mero: ");
	  scanf("%f",&n1);
	   printf("Segundo n�mero: ");
	    scanf("%f",&n2);
	     soma=n1+n2;
	      printf("Soma: %.3f",soma);
	
}//Fim do programa
