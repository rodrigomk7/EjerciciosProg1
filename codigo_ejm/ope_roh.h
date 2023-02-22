// operaciones
// producto de dos enteros con suma sucesivas
int iprod_sum(int a,int b)
{
int i,s=0;
for(i=1;i<=b;i++)
     s=s+a;
return s;
}
 // cociente con restas
 // simplificar fracciones
 
 
 
 
 
 
 
 
 /* NO FUNCIONA LA VOID
 void vprod_sum(int a,int b,int *s)
{
int i,r=0;
for(i=1;i<=b;i++)
     r=r+a;
     *s=r;} */

// INVERTIR NUMERO
int invertir_num(int n)
{int inv=0,aux;
aux=n;
while(aux>0)
  {inv=inv*10+aux%10;
  aux=aux/10;}
return inv;}
/* NO FUNCIONA LA VOID 
void vinvertir_num(int n,int *in)
{int *inv=0,aux;
aux=n;
while(aux>0)
  {(*inv)=(*inv)*10+aux%10;
  aux=aux/10;}
} */
// suma de binario
int isuma_bin(int b1, int b2)
 {

  int suma=0, ac=0, p=1, sp;
  while((b1!=0)||(b2!=0)){
                          sp=b1%10+b2%10+ac;
                          suma=suma+(sp%2)*p;
                          ac=sp/2;
                          p=p*10;
                          b1=b1/10;
                          b2=b2/10;
                          }
        suma=suma+ac*p;
  return suma;
  }
 // calcular el factorial de un numero
 
int fact(int numero)
{
int resultado = 1;

while(numero > 0){
resultado = resultado * numero;
numero = numero - 1;}
return resultado;
}

//sumar en cualquier base 
int sumacualquierbase(int num1, int num2, int base){
int suma = 0, ac = 0;
int p = 1, sp;
while ((num1 != 0)||(num2 != 0)){
	sp = num1 % 10 + num2 % 10 + ac;
	suma = suma + (sp % base) * p;
	ac = sp / base;
	p = p *10;
	num1 = num1 / 10;
	num2 = num2 / 10;
}
suma = suma + ac * p;
return suma;
}
  
  
  
  
  
  
  
  
  