/*
 * color.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef COLOR_H_
#define COLOR_H_

#include "inputs.h"

typedef struct
{
	int id;
	char nombreColor[20];
}eColor;

void MostrarUnColor(eColor unColor);
void MostrarListaColores(eColor listaColores[], int sizeColores);
#endif /* COLOR_H_ */
