/*
 * nexo.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#include "nexo.h"

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

eTrabajo CargarTrabajo(eMoto listaMotos[], int sizeMotos, eServicio listaServicios[], int sizeServicios)
{
	eTrabajo unTrabajo;

	unTrabajo.id = PedirID();
	unTrabajo.idMoto = PedirIdMoto(listaMotos, sizeMotos);
	unTrabajo.idServicio = PedirIdServicio(listaServicios, sizeServicios);
	unTrabajo.fecha.dia = PedirDia();
	unTrabajo.fecha.mes = PedirMes();
	unTrabajo.fecha.anio = PedirAnio();

	unTrabajo.estado = OCUPADO;

	return unTrabajo;
}

int CargarListaTrabajos(eTrabajo listaTrabajos[], int sizeTrabajos, eMoto listaMotos[], int sizeMotos, eServicio listaServicios[], int sizeServicios)
{
	int index;

	index = BuscarEspacioTrabajos(listaTrabajos, sizeTrabajos);
	if(index != -1)
	{
		listaTrabajos[index] = CargarTrabajo(listaMotos, sizeMotos, listaServicios, sizeServicios);
	}

	return index;
}

int PedirIdMoto(eMoto listaMotos[], int sizeMotos)
{
	int idAux;
	int retorno = -1;

	MostrarListaMotos(listaMotos, sizeMotos);

	idAux = PedirID();

	for(int i=0; i<sizeMotos; i++)
	{
		if(idAux == listaMotos[i].id)
		{
			retorno = idAux;
		}
	}
	return retorno;
}

int PedirIdServicio(eServicio listaServicios[], int sizeServicios)
{
	int idAux;

	MostrarListaServicios(listaServicios, sizeServicios);

	idAux = PedirID();
	while(idAux < 20000|| idAux > 20003)
	{
		printf("ERROR, ");
		idAux = PedirID();
	}

	return idAux;
}
