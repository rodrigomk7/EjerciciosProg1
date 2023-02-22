// p3- eje 17


#include <stdio.h>


void orden(int *,int *, int *);



int main (int argc, char *argv[])
{

int a,b,c;


// ingreso de datos 


printf("Ingrese un numero:");

scanf("%d",&a);

printf("Ingrese un numero:");

scanf("%d",&b);

printf("Ingrese un numero:");

scanf("%d",&c);

orden(&a,&b,&c);


}






void orden(int *a,int *b, int *c)
{

int p,s,t;


if((*a==*b)&&(*a==*c))
{

printf("Los numeros ingresados son iguales");
}
 
   else
  
 {
       
 if(*a>*b)
        {
 
                    if(*b>*c)
                         {
 
                         p=*a;
 
                         s=*b;
                           t=*c;
 
                        }
                       
 else
 {
                                           
 if(*a>*c)
                                            {	
                                                p=*a;
                                                s=*c;
                                                t=*b;
                                             }
                                              else
                                             {
                                                   p=*c;
                                                   s=*a;
                                                   t=*b;	
                                              }
                         }
}
else
{
                if(*b>*c)
                {
                           if(*a>*c)
                          {
                                    p=*b;
                                    s=*a;
                                    t=*c;
                           }
                             else
                           {
                             p=*b;
           
                  s=*c;
 
                            t=*a;
  
                         }
                }
                else
               
 {
                p=*c;
  
              s=*b;
    
            t=*a;
        
        }
        
}
        printf ("\n los numeros ingresados son %d - %d - %d ", *a,*b,*c);
  
      printf("su orden descendente es: \n\t\t %d -- %d -- %d",p,s,t);
 
//   printf("\n %d -- %d -- %d",p,s,t);

  
  }
    
}


