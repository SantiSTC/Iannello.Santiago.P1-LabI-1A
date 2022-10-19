/*
 * tipo.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#include "tipo.h"

void MostrarUnTipo(eTipo unTipo)
{
	printf("%d - %s \n", unTipo.id, unTipo.descripcion);
}

void MostrarListaTipos(eTipo listaTipos[], int sizeTipos)
{
	printf("\n--- TIPO ---\n");
	for(int i=0; i<sizeTipos; i++)
	{
		MostrarUnTipo(listaTipos[i]);
	}
}
