/*
 * motos.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef MOTOS_H_
#define MOTOS_H_

#include "inputs.h"
#include "color.h"
#include "tipo.h"

typedef struct
{
	int id;
	char marca[20];
	int idTipo;
	int idColor;
	int cilindrada;
	int puntaje;
	int estado;
}eMoto;

int BuscarEspacio(eMoto listaMotos[], int sizeMotos);
eMoto CargarMoto(eTipo listaTipos[], int sizeTipos, eColor listaColores[], int sizeColores);
int CargarListaMotos(eMoto listaMotos[], int sizeMotos, eTipo listaTipos[], int sizeTipos, eColor listaColores[], int sizeColores);
void InicializarMotos(eMoto listaMotos[], int sizeMotos);
void MostrarUnaMoto(eMoto unaMoto);
void MostrarListaMotos(eMoto listaMotos[], int sizeMotos);
int BajarMoto(eMoto listaMotos[], int sizeMotos);
int ModificarServicio(eMoto listaMotos[], int sizeMotos, eColor listaColores[], int sizeColores);

#endif /* MOTOS_H_ */
