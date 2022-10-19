/*
 * servicio.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#include "servicio.h"

void MostrarUnServicio(eServicio unServicio)
{
	printf("%d - %s - %f", unServicio.id, unServicio.descripcion, unServicio.precio);
}

void MostrarListaServicios(eServicio listaServicios[], int sizeServicios)
{
	printf("\n--- SERVICIOS ---\n");
	for(int i=0; i<sizeServicios; i++)
	{
		MostrarUnServicio(listaServicios[i]);
	}
}
