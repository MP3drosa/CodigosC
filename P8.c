//Nome: Matheus Pedrosa Couto
//Matricula: 11811EEL019

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam) 
{
    int i;
    float num;
    for(i = 0; i < tam; i++)
        vetor[i] =  (float) rand()/(float) RAND_MAX + 0.5f;
}
 

float somatorio( float vetor[], int i )
{ 
    float soma = 0;
    if (i < 0) 
        return soma;
    return vetor[i] + somatorio(vetor, i - 1);
}

float produtorio( float vetor[], int  i)
{
	float prod = 1;
	if(i < 0)
	    return prod;
    return vetor[i] * produtorio(vetor, i - 1);	    
}

int main()
{
	int aux;
	float vetor[99], r;
	srand(123456);
	gera_numeros(vetor,99);
	printf("1-SOMATORIO\n\n2-PRODUTORIO\n\n");
	scanf("%d", &aux);
	getchar();
	if(aux == 1)
	    r = somatorio(vetor,99);
	else if( aux == 2)
	    r = produtorio(vetor,99);
	printf("\n\n%.2f", r);
	return 0;

	
}
