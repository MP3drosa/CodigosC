#include<stdio.h>

void codificar()
{
	char s[256]={'\0'};
	int *ps, i=0;
	
	printf("\nDigite uma mensagem: ");
	gets(s);
	char *pmsg=s;
	printf("Codificada: ");
	for(i=0;s[i];i++)
	{
		ps=(int *)pmsg;
		if(ps[i]!=0)
			printf("%d",ps[i]);
		if(ps[i+1]!=0)
			printf(", ");
	}
}

void decodificar()
{
	char *p;
	int q[64], i=0;
	printf("\nColoque espaco + 0 quando finalizar a entrada de dados!");
		printf("\nDigite uma mensagem para decodificar: ");
	
	for(i=0;i<64;i++)
	{
		scanf("%d",&q[i]);
		getchar();
		p=(char *)q;
		if(q[i]==0)
		break;
	}
	printf("decodificado: ");
	printf("%s",p);
}
 
void principal()
{
	int opcao,saida=0;
	


	printf("\tMENU\n\n");
    printf("\t1. Codificar\n");
	printf("\t2. Decodificar\n");
	printf("\t3. Sair.");

	do
	{

	    inicio:
		printf ("\n\nDigite sua opcao: ");
		scanf("%d",&opcao);
		getchar();	
		if (opcao == 1)
		{
			codificar();
			saida=1;
	    }
	    else if(opcao == 2)
	    {		
			decodificar();
			saida=2;
        }
		else if( opcao == 3)			
			saida=3;
        else
        {		
           	printf("opcao invalida, tente novamente.");
		    goto inicio;						
		}
	}while(saida!=3);
}

int main( )
{
	principal();
	return 0;
}
