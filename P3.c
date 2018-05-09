//Nome - Matheus Pedrosa Couto
//Matrícula - 11811EEL019
#include <stdio.h>

void printbits(unsigned int num, int tam) 
{
	if(tam != 0) 
	{
	printbits(num/2, tam-1);
	printf("%d", (num%2));
	}	
}
int main()
{
	int aux, q, y, resultado;
	printf("                          CALCULADORA BITWISE\n\n");
	printf("1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift\n\n");
	scanf("%d", &aux);
	if(aux == 1)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &q);
		getchar();
		printf("\nNOT %d", q);
		printf("(");
		printbits(q, 32);
		printf(")");
		resultado=~q;
		printf(" : %d", resultado);
		printf("(");
		printbits(resultado, 32);
		printf(")");
	}
	else if (aux == 2)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &q);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", q);
		printf("(");
		printbits(q, 32);
		printf(")");
		printf(" AND %d", y);
		printf("(");
		printbits(y, 32);
		printf(")");
		resultado=q&y;
		printf(" : %d", resultado);
		printf("(");
		printbits(resultado, 32);
		printf(")");
	}
	else if ( aux == 3)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &q);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", q);
		printf("(");
		printbits(q, 32);
		printf(")");
		printf(" OR %d", y);
		printf("(");
		printbits(y, 32);
		printf(")");
		resultado=q|y;
		printf(" : %d", resultado);
		printf("(");
		printbits(resultado, 32);
		printf(")");
	}
	else if ( aux == 4)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &q);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", q);
		printf("(");
		printbits(q, 32);
		printf(")");
		printf(" XOR %d", y);
		printf("(");
		printbits(y, 32);
		printf(")");
		resultado=q^y;
		printf(" : %d", resultado);
		printf("(");
		printbits(resultado, 32);
		printf(")");
    }
	else if ( aux == 5)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &q);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", q);
		printf("(");
		printbits(q, 32);
		printf(")");
		printf(" >> %d", y);
		printf("(");
		printbits(y, 32);
		printf(")");
		resultado=q>>y;
		printf(" : %d", resultado);
		printf("(");
		printbits(resultado, 32);
		printf(")");
	}
	else if( aux == 6)
	{
			printf("\n\nDigite um numero: ");
			scanf("%d", &q);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", q);
			printf("(");
			printbits(q, 32);
			printf(")");
			printf(" << %d", y);
			printf("(");
			printbits(y, 32);
			printf(")");
			resultado=q<<y;
			printf(" : %d", resultado);
			printf("(");
			printbits(resultado, 32);
			printf(")");
	}
	return 0;
}
