/*
	Name: Acentuação.cpp
	Author: André L.Corsi
	Date: 07/04/16 19:29
	Description: 
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>  //Bibilioteca para poder utilizar acentuação

main()
{
   float n1,n2,soma;
	
	setlocale(LC_ALL,"Portuguese"); //Selecionar língua: Português
	 printf("Primeiro número: ");
	  scanf("%f",&n1);
	   printf("Segundo número: ");
	    scanf("%f",&n2);
	     soma=n1+n2;
	      printf("Soma: %.3f",soma);
	
}//Fim do programa
