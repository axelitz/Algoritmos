#include <stdio.h>
#include <stdlib.h>
#include "Mensajes24.h"

int main (void) {
	
	/*Registro de Variables*/
	int dia, x;
	/*Registro de Variables*/

	system("clear");
	
	/*Ingreso de Datos*/
	puts (mensajeInicial);
	x = scanf ("%i", &dia);
	/*Ingreso de Datos*/

	/*Validacion de Datos*/
	if (x != 1 || dia < 1 || dia > 366) {
		puts (mensajeError);
	}
	/*Validacion de Datos*/
	
	/*Bloque de Trabajo+Informe de Resultados*/
	else {
		dia = dia % 7;
		switch (dia) {
			case 0:
				printf ("%s\n", mensajeSabado);
				break;
			case 1:
				printf ("%s\n", mensajeDomingo);
				break;
			case 2:
				printf ("%s\n", mensajeLunes);
				break;
			case 3:
				printf ("%s\n", mensajeMartes);
				break;
			case 4:
				printf ("%s\n", mensajeMiercoles);
				break;
			case 5:
				printf ("%s\n", mensajeJueves);
				break;
			case 6:
				printf ("%s\n", mensajeViernes);
				break;
		}
	}
	puts (mensajeFinal);
	/*Bloque de Trabajo+Informe de Resultados*/

	return 0;
}
