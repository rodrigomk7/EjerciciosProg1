#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char str[15] = "Anfiteatro";
		
	printf("\n Funcion printf(): %15s", str);
	printf("\n Funcion printf(): %-15s", str);
	
	fprintf(stdout, "\n\n Funcion fprintf(): %15s", str);
	fprintf(stdout, "\n Funcion fprintf(): %-15s", str);
	
	fputs("\n\n", stdout);
	fputs(" Funcion fputs(): ", stdout);
	fputs(str, stdout);
	
printf("\n\n");	
return 0;	
}

