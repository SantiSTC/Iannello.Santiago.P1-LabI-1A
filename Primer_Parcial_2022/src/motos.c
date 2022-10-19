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

eMoto CargarMoto(eTipo listaTipos[], int sizeTipos, eColor listaColores[], int sizeColores)
{
	eMoto unaMoto;

	unaMoto.id = PedirID();
	PedirMarca(unaMoto.marca);
	MostrarListaTipos(listaTipos, sizeTipos);
	unaMoto.idTipo = PedirIdTipo();
	MostrarListaColores(listaColores, sizeColores);
	unaMoto.idColor = PedirIdColor();

	unaMoto.cilindrada = PedirCilindrada();
	unaMoto.puntaje = PedirPuntaje();

	unaMoto.estado = OCUPADO;

	return unaMoto;
}

int CargarListaMotos(eMoto listaMotos[], int sizeMotos, eTipo listaTipos[], int sizeTipos, eColor listaColores[], int sizeColores)
{
	int index;

	index = BuscarEspacio(listaMotos, sizeMotos);
	if(index != -1)
	{
		listaMotos[index] = CargarMoto(listaTipos, sizeTipos, listaColores, sizeColores);
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

int ModificarServicio(eMoto listaMotos[], int sizeMotos, eColor listaColores[], int sizeColores)
{
	int retorno = -1;
	int idIngresado;
	int opcion;
	char opcionAux[10];
	int validar;

	MostrarListaMotos(listaMotos, sizeMotos);

	printf("Modificar moto\n");
	idIngresado = PedirID();

	for(int i=0; i<sizeMotos; i++)
	{
		if(idIngresado == listaMotos[i].id && listaMotos[i].estado == OCUPADO)
		{
			validar = getStringNumeros("¿Que desea modificar? \n1- Color \n2- Puntaje \nElija una opcion: ", opcionAux);
			opcion = atoi(opcionAux);
			while(validar == 0 || (opcion != 1 && opcion != 2))
			{
				validar = getStringNumeros("ERROR, ¿Que desea modificar? \n1- Color \n2- Puntaje \nElija una opcion: ", opcionAux);
				opcion = atoi(opcionAux);
			}

			if(opcion == 1)
			{
				MostrarListaColores(listaColores, sizeColores);
				listaMotos[i].idColor = PedirIdColor();
			}
			else
			{
				listaMotos[i].puntaje = PedirPuntaje();
			}
			retorno = 1;
			break;
		}
	}
	return retorno;
}



















