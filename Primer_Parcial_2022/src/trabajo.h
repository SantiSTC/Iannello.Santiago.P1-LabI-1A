/*
 * trabajo.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_

#include "inputs.h"

typedef struct
{
	int dia;
	int mes;
	int anio;
}eFecha;

typedef struct
{
	int id;
	int idMoto;
	int idServicio;
	eFecha fecha;
	int estado;
}eTrabajo;

int BuscarEspacioTrabajos(eTrabajo listaTrabajos[], int sizeTrabajos);


#endif /* TRABAJO_H_ */
