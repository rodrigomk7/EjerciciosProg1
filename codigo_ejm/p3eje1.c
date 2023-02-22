//ejercicio 1

#include<stdio.h>

int main (int argc, char *argv[])
{
char x,y;
do
{
printf("\n ingresar un letra:");
scanf("%c",&x);
getchar();
printf("\n ingresar otra letra:");
scanf("%c",&y);getchar();
}while( (x<'a' || x>'z')||(y<'a'|| y>'z') );
if(x!=y)
{
		if(x<y)
		{
		//printf("%c-%c",x,y);
		printf("\n %c esta antes que %c \n\n",x,y);
		}
		else
		{
		//printf("%c-%c",y,x);
		printf("\n %c es antes que %c \n\n",y,x);
    	}
   }
	else
	{
	printf("\n %c es igual %c \n\n",x,y);
	}
return 0;
}

