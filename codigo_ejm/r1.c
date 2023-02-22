#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include"fn_cadenas_roh.h"

int main (int argc , char *argv[])
{
   int i;
   char c[30];
   cargar_cadena(c);
   for(i=0;i<strlen(c);i++);
       printf("\n %d ", atoi(c));
}