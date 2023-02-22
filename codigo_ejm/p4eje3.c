#include<stdio.h>

void cargar_vector(int,int * );
void mostrar_vector(int ,int * );
void inser_valor_vector(int, int*  );

int main (int argc , char *argv[])
{
    int ve[109],vm[100];
    int n;
    do
    {
        printf("\n ingresa el orden del vector:  ");
        scanf(" %d",&n);
    }while (n<=0);
    
 cargar_vector(n,ve);
 mostrar_vector(n,ve);
 inser_valor_vector(n,ve);
  mostrar_vector(n,ve);
 return 0;
}

void cargar_vector(int n, int ve[])
{
    int i, u=1;
    for (i=0;i<n;i++)
    {
        printf ("\n ingrese el %d elemento: ",u++); scanf(" %d",&ve[i]);
    }
}

void mostrar_vector(int n, int ve[])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf (" %d  ",ve[i]);
    }
}
        
  void inser_valor_vector(int n,int ve[])
        {
            int x, c=0, i=0,r=0;
            
            printf(" \n lngresa un valor:  "); 
            scanf(" %d",&x);
            
            do
            {
                printf("\n ingresa la posicion: ");
                scanf(" %d",&c);
            }while (c<=0 && c>=n);
            --c;
            
            for (;i<=n;i++)
            {
                if (i==c)
                    ve[i]=x;
                
            }
      }
                    
            
      