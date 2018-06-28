//Nome: Matheus Pedrosa Couto
//Matricula: 11811EEL019

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam) 
{
	int i;
	float num;
	for(i = 0; i < tam; i++)
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float reduce(float * pini, float * pfim,
		float (*funcao)(float, float)) 
{
	return (pini == pfim)? 0 :
		(*funcao)(*pini, reduce(pini+1, pfim, funcao));
}
float soma(float a, float b) 
{
	return a+b;
}
float produto(float a, float b) 
{
	return a*b;
}

int main ()
{
	srand(123456);
	float vetor[100];
	int i;
	gera_numeros(vetor, 100);
	printf("Digite 1 para calcular o Somatorio e 2 para calcular o Produtorio: ");
	scanf("%d", &i);
	getchar();
	if(i==1)
		printf("\nSomatorio = %f", reduce(vetor, vetor+100, soma));
	else if(i==2)
		printf("\nProdutorio = %f", reduce(vetor, vetor+100, produto));
	else
		printf("\nOpcao invalida!");
	return 0;
}
