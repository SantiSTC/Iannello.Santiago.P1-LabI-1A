/*
 ============================================================================
 Name        : Primer_Parcial_2022.c
 Author      : Iannello Santiago
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"
#include "motos.h"
#include "servicio.h"
#include "trabajo.h"
#include "color.h"
#include "tipo.h"

#define T_T 4
#define T_C 5
#define T_S 4
#define T_M 100

eTipo listaTipos[T_T] = {{1000, "Enduro"}, {1001, "Chopera"}, {1002, "Scooter"}, {1003, "Vintage"}};

eColor listaColores[T_C] = {{10000, "Gris"},{10001, "Negro"},{10002, "Azul"},{10003, "Blanco"},{10004, "Rojo"}};

eServicio listaServicios[T_S] = {{20000, "Limpieza", 450},{20001, "Ajuste", 300},{20002, "Balanceo", 150},{20003, "Cadena", 390}};

eMoto listaMotos[T_M];

int main(void) {
	setbuf(stdout, NULL);

	int opcionElegida;
	int retorno;
	int cantidadAltas = 0;

	InicializarMotos(listaMotos, T_M);

	do
	{
		opcionElegida = ElegirOpcion();

		switch(opcionElegida)
		{
			case 1:
				printf("\n< Alta Moto >\n");

				retorno = CargarListaMotos(listaMotos, T_M, listaTipos, T_T, listaColores, T_C);
				if(retorno == -1)
				{
					printf("No se ha podido dar de alta la moto");
				}
				else
				{
					printf("Se ha dado de alta correctamente a la moto");
					cantidadAltas++;
				}
			break;
			case 2:
				printf("\n< Modificar Moto >\n");

				if(cantidadAltas == 0)
				{
					printf("Se debera dar de alta al menos a una moto antes de ingresar a esta opcion.");
				}
				else
				{
					retorno = ModificarServicio(listaMotos, T_M, listaColores, T_C);
					if(retorno == -1)
					{
						printf("No se ha podido modificar la moto");
					}
					else
					{
						printf("Se ha modificado correctamente la moto");
					}
				}
			break;
			case 3:
				printf("\n< Baja Moto >\n");

				if(cantidadAltas == 0)
				{
					printf("Se debera dar de alta al menos a una moto antes de ingresar a esta opcion.");
				}
				else
				{
					retorno = BajarMoto(listaMotos, T_M);
					if(retorno == -1)
					{
						printf("No se ha podido dar de baja la moto");
					}
					else
					{
						printf("Se ha dado de baja correctamente a la moto");
						cantidadAltas--;
					}
				}
			break;
			case 4:

			break;
			case 5:

			break;
			case 6:

			break;
			case 7:

			break;
			case 8:

			break;
			case 9:

			break;
		}

	}while(opcionElegida != 10);

	return 0;
}
