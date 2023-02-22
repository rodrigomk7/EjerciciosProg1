/*
typedef struct {
	int	dia;
	char	mes[10];
	int 	anio;
	}fecha ;
	
typedef struct {
	char	calle[15];
	int	num;
	char	localidad[20];
	}domicilio;

typedef struct{
	char		nombres[18];
	char		apellidos[15];
	struct fecha	fechaNac;
	domicilio	domic;
	}datos;
*/

struct fecha {
	int	dia;
	char	mes[10];
	int 	anio;
	};
	
struct domicilio {
	char	calle[15];
	int	num;
	char	localidad[20];
	};

struct datos {
	char			nombres[18];
	char			apellidos[15];
	struct fecha		fechaNac;
	struct domicilio	domic;
	};

