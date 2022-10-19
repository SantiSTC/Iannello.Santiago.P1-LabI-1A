/*
 * servicio.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

#include "inputs.h"

typedef struct
{
	int id;
	char descripcion[25];
	float precio;
}eServicio;

void MostrarListaServicios(eServicio listaServicios[], int sizeServicios);
void MostrarUnServicio(eServicio unServicio);

#endif /* SERVICIO_H_ */
