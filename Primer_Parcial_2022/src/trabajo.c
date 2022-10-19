/*
 * trabajo.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#include "trabajo.h"

int BuscarEspacioTrabajos(eTrabajo listaTrabajos[], int sizeTrabajos)
{
	int index = -1;

	for(int i = 0; i < sizeTrabajos; i++)
	{
		if(listaTrabajos[i].estado == LIBRE)
	    {
			index = i;
	        break;
	    }
	}

	return index;
}






