#include <stdio.h> 


int main(int argc, char *argv[]){

int n,cont=0;

do{
printf("\n ingrese un numero: ");
scanf("%d", &n);
}while(n <=0);

while(cont >= n){

cont = cont + 2; //obtiene numeros pares unicamente
}

if(cont == n)
    printf("\n el numero ingresado es par \n");
else
    printf("\n el numero ingresado es impar \n");

return 0;

}
