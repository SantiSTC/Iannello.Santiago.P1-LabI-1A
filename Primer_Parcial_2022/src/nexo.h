/*
 * nexo.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef NEXO_H_
#define NEXO_H_

#include "color.h"
#include "tipo.h"
#include "motos.h"
#include "trabajo.h"
#include "inputs.h"
#include "servicio.h"


eMoto CargarMoto(eTipo listaTipos[], int sizeTipos, eColor listaColores[], int sizeColores);
int CargarListaMotos(eMoto listaMotos[], int sizeMotos, eTipo listaTipos[], int sizeTipos, eColor listaColores[], int sizeColores);
int ModificarServicio(eMoto listaMotos[], int sizeMotos, eColor listaColores[], int sizeColores);
eTrabajo CargarTrabajo(eMoto listaMotos[], int sizeMotos, eServicio listaServicios[], int sizeServicios);
int CargarListaTrabajos(eTrabajo listaTrabajos[], int sizeTrabajos, eMoto listaMotos[], int sizeMotos, eServicio listaServicios[], int sizeServicios);
int PedirIdMoto(eMoto listaMotos[], int sizeMotos);
int PedirIdServicio(eServicio listaServicios[], int sizeServicios);
#endif /* NEXO_H_ */
