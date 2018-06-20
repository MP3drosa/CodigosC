//Nome: Matheus Pedrosa Couto
//Matrícula: 11811EEL019

#include <stdio.h>

int funcao (int a, int b)
{
	if(a==0)
		return b+1;	
	else if(a>0 && b==0)
		return funcao(a-1, 1);
	else if(a>0 && b>0)
		return funcao(a-1, funcao(a, b-1));
}

int main ()
{
	int a, b;
	scanf("%i", &a);
	scanf("%i", &b);
	printf("\n%i", funcao(a, b));
	return 0;
}
