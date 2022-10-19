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

#include "nexo.h"

#define T_T 4
#define T_C 5
#define T_S 4
#define T_M 100
#define T_TR 100

eTipo listaTipos[T_T] = {{1000, "Enduro"}, {1001, "Chopera"}, {1002, "Scooter"}, {1003, "Vintage"}};

eColor listaColores[T_C] = {{10000, "Gris"},{10001, "Negro"},{10002, "Azul"},{10003, "Blanco"},{10004, "Rojo"}};

eServicio listaServicios[T_S] = {{20000, "Limpieza", 450},{20001, "Ajuste", 300},{20002, "Balanceo", 150},{20003, "Cadena", 390}};

eMoto listaMotos[T_M];

eTrabajo listaTrabajos[T_TR];

int main(void) {
	setbuf(stdout, NULL);

	int opcionElegida;
	int retorno;
	int altasMotos = 0;
	int altasTrabajos = 0;

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
					altasMotos++;
				}
			break;
			case 2:
				printf("\n< Modificar Moto >\n");

				if(altasMotos == 0)
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

				if(altasMotos == 0)
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
						altasMotos--;
					}
				}
			break;
			case 4:
				printf("\n< Listar Motos >\n");

				if(altasMotos == 0)
				{
					printf("Se debera dar de alta al menos a una moto antes de ingresar a esta opcion.");
				}
				else
				{
					retorno = ListarMotos(listaMotos, T_M);
					if(retorno == -1)
					{
						printf("No se han podido listar las motos");
					}
					else
					{
						printf("Se han listado correctamente las motos");
					}
				}
			break;
			case 5:
				printf("\n< Listar Tipos >\n");

				MostrarListaTipos(listaTipos, T_T);
			break;
			case 6:
				printf("\n< Listar Colores >\n");

				MostrarListaColores(listaColores, T_C);
			break;
			case 7:
				printf("\n< Listar Servicios >\n");

				MostrarListaServicios(listaServicios, T_S);
			break;
			case 8:
				printf("\n< Alta Trabajo >\n");

				retorno = CargarListaTrabajos(listaTrabajos, T_TR, listaMotos, T_M, listaServicios, T_S);
				if(retorno == -1)
				{
					printf("No se ha podido dar de alta al trabajo");
				}
				else
				{
					printf("Se ha dado de alta correctamente al trabajo");
					altasTrabajos++;
				}
			break;
			case 9:
				printf("\n< Listar Trabajos >\n");

				if(altasTrabajos == 0)
				{
					printf("Se debera dar de alta al menos a un trabajo antes de ingresar a esta opcion.");
				}
				else
				{
					//retorno = ;
					if(retorno == -1)
					{
						printf("No se han podido listar los trabajos");
					}
					else
					{
						printf("Se han listado correctamente los trabajos");
					}
				}
			break;
		}

	}while(opcionElegida != 10);

	return 0;
}
