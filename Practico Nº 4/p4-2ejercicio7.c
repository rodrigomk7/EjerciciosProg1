#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int operacion(char *,char *,char *);
int control(char *);  

int main (int argc , char *argv[])
{
char cad[30],num1[30],num2[30];
int c,op;


printf("\nIngrese una operacion de suma o resta:");
fgets(cad,29,stdin);
cad[strlen(cad)-1]='\0';
c=control(cad);

if(c==1)
printf("La cadena contiene caracteres no admitidos\n");
else
{
op=operacion(cad,num1,num2);
printf("\n El resultado es: %d",op);
}


return 0;
}


int control(char cad[])
{

int ban=0,i=0;
      
for(;i<strlen(cad);i++)
{

if(isalpha(cad[i]))
{
ban=1;
return ban;
}

if(ispunct(cad[i]))
{
if(cad[i]!='+'&&cad[i]!='-')
{
ban=1;
return ban;
}
}

}

return ban;
}


int operacion(char cad[],char num1[],char num2[])
{
	
int i,j=0,k=0,oper,x,y,r;
	
	for(i=0;i<strlen(cad);i++)
	{
		if(cad[i]!='+'&&cad[i]!='-')
		{
			num1[j]=cad[i];
			j++;
		}
		else
		{
			if(cad[i]=='+')
				oper=1;
			else
				oper=2;
			
			for(i++;i<strlen(cad);i++)
			{
				num2[k]=cad[i];
				k++;
			}
		}
	}
	
num1[j]='\0';
num2[k]='\0';

x=atoi(num1);
y=atoi(num2);

if(oper==1)	
r=x+y;
else
r=x-y;
	
	
return r;	
	
}
