/*Definición de registros
*/


typedef struct {
	int	dia;
	char	mes[10];
	int 	anio;
	}fecha;
	
typedef struct {
	char	calle[15];
	int	num;
	char	localidad[20];
	}domicilio;

typedef struct{
	char		nombres[18];
	char		apellido[15];
	fecha		fechaNac;
	domicilio		domic;
	}datos;
	

