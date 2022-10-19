/*
 * motos.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#include "motos.h"

int BuscarEspacio(eMoto listaMotos[], int sizeMotos)
{
	int index = -1;

	for(int i = 0; i < sizeMotos; i++)
	{
		if(listaMotos[i].estado == LIBRE)
	    {
			index = i;
	        break;
	    }
	}

	return index;
}



void InicializarMotos(eMoto listaMotos[], int sizeMotos)
{
	int index;

	index = BuscarEspacio(listaMotos, sizeMotos);
	for(int i=0; i<sizeMotos; i++)
	{
		if(index != -1)
		{
			listaMotos[i].estado = LIBRE;
		}
	}
}

void MostrarUnaMoto(eMoto unaMoto)
{
	printf("%d - %s - %d - %d - %d - %d\n", unaMoto.id, unaMoto.marca, unaMoto.idTipo, unaMoto.idColor, unaMoto.cilindrada, unaMoto.puntaje);
}


void MostrarListaMotos(eMoto listaMotos[], int sizeMotos)
{
	for(int i=0; i<sizeMotos; i++)
	{
		if(listaMotos[i].estado == OCUPADO)
		{
			MostrarUnaMoto(listaMotos[i]);
		}
	}
}

int BajarMoto(eMoto listaMotos[], int sizeMotos)
{
	int retorno = -1;
	int idIngresado;

	MostrarListaMotos(listaMotos, sizeMotos);

	printf("Dar de Baja\n");
	idIngresado = PedirID();

	for(int i=0; i<sizeMotos; i++)
	{
		if(idIngresado == listaMotos[i].id && listaMotos[i].estado == OCUPADO)
		{
			listaMotos[i].estado = LIBRE;
			retorno = 1;
			break;
		}
	}

	return retorno;
}



int OrdenarMotosPorID(eMoto listaMotos[], int sizeMotos)
{
	int retorno = 0;
	eMoto aux;

	for(int i=0; i<sizeMotos-1; i++)
	{
		for(int j=i+1; j<sizeMotos; j++)
		{
			if(listaMotos[i].id > listaMotos[j].id)
			{
				aux = listaMotos[i];
				listaMotos[i] = listaMotos[j];
				listaMotos[j] = aux;
			}
			retorno = 1;
		}
	}

	return retorno;
}

int ListarMotos(eMoto listaMotos[], int sizeMotos)
{
	int retorno;

	retorno = OrdenarMotosPorID(listaMotos, sizeMotos);
	MostrarListaMotos(listaMotos, sizeMotos);

	return retorno;
}
















