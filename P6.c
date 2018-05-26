//Nome: Matheus Pedrosa Couto	
//Matricula: 11811EEL019

#include <stdio.h>
#define tam 20

int s(int aux, int *vet)
{
	int i, soma = 0;
	for(i = 0; i != aux; i++)
	    soma = soma + vet[i];
	return soma;
}

float m( float aux,float soma)
{
	float media = 0;
	media = soma / aux;
	return media;
}

int main()
{
	int  i, soma = 0, aux, vet[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float media;
	scanf("%d", &aux);
	getchar();
	for(i = 0; i != aux; i++)
	{
	    scanf("%d", &vet[i]);
	    getchar();
    }
    soma = s(aux, vet);
    media = m(aux, soma);
    printf("Media = %.2f", media);
    return 0;
    
}
