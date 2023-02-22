#include <stdio.h>
#include <string.h>
#include <funcion_cadena.h>

int main (int argc ,char *argv[])
{

if(argc==2)
{
  if(control(argv[1]))
  { 
       
     if(cambiar_minusculas(argv[1]))
	    printf("C")  
  }
  else
     printf("\n La cadena ingresada no es una palabra.")

}
else
{
printf("\n Se ingreso mas o menos de dos palabras.")
}



}








