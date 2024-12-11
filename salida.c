//
// Created by Bryan Caguana Chango on 29/11/2024.
//
#include "estadistica.h"
#include <stdio.h>

int i = 0;
void MuestraPersonas(tficha Fichas[], int numper) {
  while (i < numper) {
    MuestraPersona(Fichas[i], numper);
  	i++;
  }
}

void MuestraPersona(tficha Fichas, int numper) {
  printf("%s %s %lf\n", Fichas.nombre, Fichas.dni, Fichas.nota);
}


void ImprimeEstadistica(double suma, int cont[], int num) {

  double porcentaje = 0;
  int i = 0;
  double nota_media = suma / num;
  printf ("Nota Media:  %lf\n", nota_media);
  char Calificaciones[NUM_NOTAS][20]=
  { "Matricula", "Sobresaliente","Notable","Aprobado","Suspenso"};
  while (i < 5) {
      porcentaje = (cont[i] * 100) / num;
      printf("%s   :", Calificaciones[i]);
      printf("%lf\n", porcentaje);
    i++;
  }
  }
