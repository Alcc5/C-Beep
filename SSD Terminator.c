#include<stdlib.h>
#include<stdio.h>

typedef struct SSD{
	
	long double total;
	
}terminator;


int main(void){
	
	terminator *t;
	
	while(sizeof(terminator) == sizeof(long double)){
		
		t=malloc(4294967296);
		free(t);
	}
}
