// Nome: Matheus Pedrosa Couto ; Matrícula : 11811EEL019

#include <stdio.h>

int main (){
	char b[256];
	int e = 0, i;
	scanf("%s", b);
	for(i = 0; b[i] != '\0'; i++)
    {
    	if(e == 0 && b[i] == '0')
    	    e = 0;
    	    else
		if(e == 0 && b[i] == '1')
    		e = 1;
    		else
		if(e == 1 && b[i] == '1')
	    	e = 0;
	    	else
		if(e == 1 && b[i] == '0')
		    e = 2;
		    else
		if(e == 2 && b[i] == '1')
			e = 2;
			else
		if(e == 2 && b[i] == '0')
			e = 1;
	 }	
	 
	if(e == 0)
	printf("%s eh multiplo de 3", b);
	else
	printf("%s nao eh multiplo de 3", b);
	return 0;
}

