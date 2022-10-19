/*
 * inputs.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Santiago
 */

#include "inputs.h"

void MostrarMenu()
{
	printf("\n----------------------------------------\n"
			"            Menu Principal\n"
			"1. Alta moto\n"
			"2. Modificar moto\n"
			"3. Baja moto\n"
			"4. Listar motos\n"
			"5. Listar tipos\n"
			"6. Listar colores\n"
			"7. Listar servicios\n"
			"8. Alta trabajos\n"
			"9. Listar trabajos\n"
			"10. Salir\n"
			"----------------------------------------\n");
}

int ElegirOpcion()
{
	char opcion[50];
	int validar;
	int opcionElegida;

	MostrarMenu();

	validar = getStringNumeros("Ingrese una opción: ", opcion);
	opcionElegida = atoi(opcion);
	while(validar == 0 || (opcionElegida > 10 || opcionElegida < 1))
	{
		validar = getStringNumeros("ERROR, Ingrese una opción valida: ", opcion);
		opcionElegida = atoi(opcion);
	}

	return opcionElegida;
}

int PedirID()
{
	char idAux[10];
	int validar;
	int id;

	validar = getStringNumeros("Ingrese un ID: ", idAux);
	id = atoi(idAux);
	while(validar == 0 || id < 0)
	{
		validar = getStringNumeros("ERROR, Ingrese un ID valido: ", idAux);
		id = atoi(idAux);
	}

	return id;
}

void PedirMarca(char marca[])
{
	printf("Ingrese una marca: ");
	fflush(stdin);
	gets(marca);
}

int PedirCilindrada()
{
	char cilindradaAux[10];
	int validar;
	int cilindrada;

	validar = getStringNumeros("Ingrese una cilindrada (50 - 125 - 500 - 600 - 750): ", cilindradaAux);
	cilindrada = atoi(cilindradaAux);
	while(validar == 0 || (cilindrada != 50 && cilindrada != 125 && cilindrada != 500 && cilindrada != 600 && cilindrada != 750))
	{
		validar = getStringNumeros("ERROR, Ingrese una cilindrada valida (50 - 125 - 500 - 600 - 750): ", cilindradaAux);
		cilindrada = atoi(cilindradaAux);
	}

	return cilindrada;
}

int PedirPuntaje()
{
	char puntajeAux[10];
	int validar;
	int puntaje;

	validar = getStringNumeros("Ingrese un puntaje: ", puntajeAux);
	puntaje = atoi(puntajeAux);
	while(validar == 0 || (puntaje < 1 && puntaje > 10))
	{
		validar = getStringNumeros("ERROR, Ingrese un puntaje valido: ", puntajeAux);
		puntaje = atoi(puntajeAux);
	}

	return puntaje;
}

int PedirIdTipo()
{
	int idAux;

	idAux = PedirID();
	while(idAux < 1000 || idAux > 1003)
	{
		printf("ERROR, ");
		idAux = PedirID();
	}

	return idAux;
}

int PedirIdColor()
{
	int idAux;

	idAux = PedirID();
	while(idAux < 10000 || idAux > 10005)
	{
		printf("ERROR, ");
		idAux = PedirID();
	}

	return idAux;
}












