/*
 * tipo.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef TIPO_H_
#define TIPO_H_

#include "inputs.h"

typedef struct
{
	int id;
	char descripcion[20];
}eTipo;

void MostrarUnTipo(eTipo unTipo);
void MostrarListaTipos(eTipo listaTipos[], int sizeTipos);

#endif /* TIPO_H_ */
