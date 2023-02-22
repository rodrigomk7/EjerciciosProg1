#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[])
{
int i=1;
printf("\n");


if(argc>2)
  for(;i<argc;i++)
     printf("%s\t",argv[i]);
else 
printf("Se ingresaron menos de dos palabras");


printf("\n\n");
return 0;

}

