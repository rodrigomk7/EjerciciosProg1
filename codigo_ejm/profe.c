#include<stdio.h>
int main (int argc, char *argv[])
{
int n,c=0;
char aux='A';

printf(" ingrese las cantidad de letras a mostrar \n: ");
scanf("%d",&n);

	do
	{
	  printf("%c - ", aux++);
	  c++;
	
	
	}while(c<n); 
	return 0;
}
