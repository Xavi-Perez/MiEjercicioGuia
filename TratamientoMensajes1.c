#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char peticion[100];
	char respuesta[100];
	char respuesta1[100];
	strcpy (peticion, "Xavi/19/Ana/21/Nil/18/Pere/21");
	
	char nombre[20];
	int edad;
	char *p = strtok (peticion, "/");
	
	while (p!=NULL)
	{
		strcpy (nombre, p);
		p = strtok (NULL, "/");
		edad = atoi (p);
		if (edad < 20)
			sprintf (respuesta, "%s%s*%d-", respuesta, nombre, edad);
		
		p = strtok (NULL, "/");
		
		
	}
	respuesta [strlen(respuesta)-1] = '\0';
	printf ("Resultado: %s\n", respuesta); 

}

