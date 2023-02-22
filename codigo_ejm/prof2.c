//ejercicio 2b

#include<stdio.h>
int main (int argc, char *argv[])
{
int x, * p;

printf("ingrasar un valor:");
scanf("%d",&x);
p=&x;

printf("%d %p %d \n",*p,&p,x);

return 0;
}
