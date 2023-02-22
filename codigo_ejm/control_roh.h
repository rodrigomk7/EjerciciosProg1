/* FUNCIONES DE CONTROL DE DATOS*/

// control mayor q cero

void vcontrol_pos_int(int x, int *p)
{
if(x>0)
*p=1; // si es mayor q cero
else
*p=0; // no es mayor q cero
}

int icontrol_pos_int(int x)
{
if(x>0) return 1; //si es mayor q cero
 else return 0;} // no es mayor q cero

// control par impar *****************************
void vcontrol_par_impar(int x, int *p)
{
if(x%2==0)
*p=1;   // es par
else
*p=0;}  // es impar

int icontrol_par_impar(int x)
{
if(x%2==0)
return 1;    // es par
else return 0;} //es impar

// si es fibonacci

int ies_fibo(int x)
{
int fib=0,b=1,c;
while(fib<x)
{
c=fib;
fib=b;
b=fib+c;
}
if(fib==x)
return 1; // si es fibo
else
return 0; // no es fibo
}

void ves_fibo(int x,int *p)
{
int fib=0,b=1,c;
while(fib<x)
{
c=fib;
fib=b;
b=fib+c;
}
if(fib==x)
*p=1; // si es fibo
else
*p=0;} // no es fibo

// si es triangular

int ies_triangular(int x)
{
int po=2,tri=1;

while(tri<x)
{
tri=po+tri;
po++;
}
if(tri==x)
          return 1; // si es triangular
else
          return 0;} //  no es triangular

 void ves_triangular(int x,int *p)
{
int po=2,tri=1;

while(tri<x)
{
tri=po+tri;
po++;
}
if(tri==x)
     *p=1; //  es triangular
else
     *p=0; // no es triangular
}

// es primo 
int ies_primo(int x)
{
int d=2,cont=0;

while(x>d)
{
if(x%d==0)
cont++;
d++;
}
if(cont==0)
          return 1; // es primo 
else
          return 0;} // no es primo
       
void ves_primo(int x, int *p)
{
int d=2,cont=0;

while(x>d)
{
if(x%d==0)
cont++;
d++;
}
if(cont==0)
      *p=1; // es primo
else
      *p=0;} // no es primo

// es numero pecfecto

int ies_perfecto(int x)
{
int s=0,i;
for(i=1; i<x;i++)
{    if(x%i==0)
         s=s+i;
} if(s==x)
   return 1; // 1 si es perfecto
   else
   return 0;}// 0 si no es perfecto
     
void ves_perfecto(int x,int *p)
{
int s=0,i;
for(i=1; i<x;i++)
{     if(x%i==0)
         s=s+i;}
   if(s==x)
   *p=1; //  p=1 si es perfecto
   else
   *p=0;} // p=0 no es perfecto

// es binario
int ies_bin(int x)
{
int c=0; 
    for(;x/10!=0;x=x/10)
        {if(x%10<2)
            c=c+1;
        }
   if(c!=0)
        return 1; // es binario 
        else
        return 0;} // no es binario

void ves_bin(int x, int *p)
{
int c=0; 
    for(;x/10!=0;x=x/10)
        {if(x%10<2)
            c=c+1;
        }
   if(c!=0)
        *p=1; // es binario 
        else
        *p=0;} // no es binario



 



