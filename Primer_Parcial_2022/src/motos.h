/*
 * motos.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#ifndef MOTOS_H_
#define MOTOS_H_

#include "inputs.h"

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
void InicializarMotos(eMoto listaMotos[], int sizeMotos);
void MostrarUnaMoto(eMoto unaMoto);
void MostrarListaMotos(eMoto listaMotos[], int sizeMotos);
int BajarMoto(eMoto listaMotos[], int sizeMotos);
int OrdenarMotosPorID(eMoto listaMotos[], int sizeMotos);
int ListarMotos(eMoto listaMotos[], int sizeMotos);

#endif /* MOTOS_H_ */
