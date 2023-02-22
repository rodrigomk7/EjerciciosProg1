#include <stdio.h>
int main (int argc, char *argv[])
{
int a,b,p,i=1,s=0;
do
{
printf("\n ingresar un numero:");
scanf("%d",&a);
printf("\n ingresar otro numero:");
scanf("%d",&b);
}
while((a<0)||(b<0));

while(i<=b)
{
s=s+a;
i++;
}
printf("\n el producto es:%d",s);
return 0;
}
