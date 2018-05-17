//Nome: Matheus Pedrosa Couto
//Matricula : 11811EEL019

#include <stdio.h>

int main()
{
	char s[256];
	int i, cum = 0;
	scanf("%s", s);
	for(i = 0; s[i] != '\0'; i++)
	{
	  if( s[i] >=48 && s[i] <= 57)
	  {
         s[i] = s[i] - '0';
         cum = cum*10 + s[i];
      }
    }
    printf("O numero digitado eh : %i", cum);
    
    return 0;
}
