//
// Created by Bryan Caguana Chango on 29/11/2024.
//
#include <stdio.h>
#include "estadistica.h"

void CalculaEstadistica(tficha Fichas[], int numnotas)
    {
    int i = 0;
    double suma = 0;
    int contadores[NUM_NOTAS]={0};
    while (i < numnotas) {
        suma = suma + Fichas[i].nota;
        if (Fichas[i].nota == 10) {
            contadores[0] = contadores[0] + 1;
            }
        else if (Fichas[i].nota >= 9 && Fichas[i].nota < 10) {
            contadores[1] = contadores[1] + 1;
            }
        else if (Fichas[i].nota >= 7 && Fichas[i].nota < 9) {
            contadores[2] = contadores[2] + 1;
            }
        else if (Fichas[i].nota >= 5 && Fichas[i].nota < 7) {
            contadores[3] = contadores[3] + 1;
            }
        else if (Fichas[i].nota >= 0 && Fichas[i].nota < 5) {
            contadores[4] = contadores[4] + 1;
            }
        i++;
        }
    ImprimeEstadistica(suma,contadores,numnotas);
    }