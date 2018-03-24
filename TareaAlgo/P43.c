#include <stdio.h>
#include <stdlib.h>
#include "Mensajes43.h"

int main (void) {
	
	int kmRecorridos = 0, kmTotal = 0, x = 0;
	float precioComb = 0, montoParcial = 0, montoTotal = 0, rendimiento = 0, litrosCargados = 0, litrosTotales = 0, mejorRend = 0, peorRend = 0;
	
	/*Ingreso de datos iniciales*/
	system("clear");
	puts (mensajeKilometros);
	x = scanf ("%i", &kmRecorridos);
	/*Ingreso de datos iniciales*/

	/*Validacion de Datos*/
	if (x != 1 || (kmRecorridos < 0 && kmRecorridos != -1)) {
		puts (mensajeErrorInicial);
	}
	/*Validacion de Datos*/
	
	else if (kmRecorridos != -1) {

		/*Ingreso de datos + Bloque de trabajo*/
		do {
			kmTotal = kmTotal + kmRecorridos;
	
			puts (mensajeCombustible);
			scanf ("%f", &precioComb);

			puts (mensajeMonto);
			scanf ("%f", &montoParcial);

			montoTotal = montoTotal + montoParcial;
			litrosCargados = montoParcial / precioComb;
			litrosTotales = litrosTotales + litrosCargados;
			rendimiento = 100*litrosCargados / kmRecorridos;

			if (mejorRend == 0 || mejorRend < rendimiento)
				mejorRend = rendimiento;
	
			if (peorRend == 0 || peorRend > rendimiento)
				peorRend = rendimiento;

			system("clear");
			puts (mensajeKilometros);
			x = scanf ("%i", &kmRecorridos);
		} while (x == 1 && kmRecorridos > 0);
		
		system("clear");

		if (x != 1 || (kmRecorridos < 0 && kmRecorridos != -1)) {
			puts (mensajeErrorMedio);
		}
		
		rendimiento = 100*litrosTotales / kmTotal;
		/*Ingreso de datos + Bloque de trabajo*/

		/*Mensajes de salida*/
		puts (mensajeResultados);
		printf ("%s%.2f%s\n", mensajeFinalRendProm, rendimiento, unidadLitro100km);
		printf ("%s%.2f%s\n", mensajeFinalMejorRend, mejorRend, unidadLitro100km);
		printf ("%s%.2f%s\n", mensajeFinalPeorRend, mejorRend, unidadLitro100km);
		printf ("%s%i%s\n", mensajeFinalDistancia, kmTotal, unidadKm);
		printf ("%s%.2f%s\n", mensajeFinalCombustible, litrosTotales, unidadLitros);
		printf ("%s%.2f\n", mensajeFinalCosto, montoTotal);
		puts (mensajeResultados);
		/*Mensajes de salida*/

	}
	
	puts(mensajeFinal);
	
	return 0;
}
