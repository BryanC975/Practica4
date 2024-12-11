//
// Created by Bryan Caguana Chango on 29/11/2024.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PAL 100
#define MAX_CAD 20
#define NUM_NOTAS 5

typedef struct{
  char nombre[MAX_CAD];
  char dni[10];
  float nota;
}tficha;


//Entrada
int Pedir_notas(tficha Fichas[], int max);
tficha LeePersonal();
void leeCadena(char cadena[], int max);


//Salida.c
void MuestraPersonas(tficha Fichas[], int max);
void MuestraPersona(tficha Fichas, int max);
void ImprimeEstadistica(double suma, int cont[], int num);


//Estadistica.c
void CalculaEstadistica(tficha Fichas[], int num);
