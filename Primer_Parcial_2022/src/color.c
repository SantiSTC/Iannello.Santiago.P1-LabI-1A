/*
 * color.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#include "color.h"

void MostrarUnColor(eColor unColor)
{
	printf("%d - %s \n", unColor.id, unColor.nombreColor);
}

void MostrarListaColores(eColor listaColores[], int sizeColores)
{
	printf("\n--- Color ---\n");
	for(int i=0; i<sizeColores; i++)
	{
		MostrarUnColor(listaColores[i]);
	}
}
