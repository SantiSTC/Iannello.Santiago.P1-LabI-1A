/*
 * inputs.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef INPUTS_H_
#define INPUTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define LIBRE 0
#define OCUPADO 1

void MostrarMenu();
int ElegirOpcion();
int PedirID();
void PedirMarca(char marca[]);
int PedirCilindrada();
int PedirPuntaje();
int PedirIdTipo();
int PedirIdColor();
#endif /* INPUTS_H_ */
