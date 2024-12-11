//
// Created by Bryan Caguana Chango on 29/11/2024.
//
#include <stdio.h>
#include "estadistica.h"


int Pedir_notas(tficha Fichas[], int max)
    {
  		max = MAX_PAL;
  		int i = 0, c = 0;
        printf("Numero de personas (max 100): \n");
        scanf_s("%d", &i);
		while (c < i)
           {
           		Fichas[c]=LeePersonal();
				c++;
           }
         return c;
    }

tficha LeePersonal()
        {
			tficha persona;
	while (getchar() != '\n');
			printf("Nombre:\n");
			leeCadena(persona.nombre, MAX_CAD);
			printf("DNI: \n");
			leeCadena(persona.dni, MAX_CAD);
			printf("Nota(0..10): \n");
			scanf_s("%f", &persona.nota);
		return persona;
        }

void leeCadena(char cadena[], int max)
            {
				char *p;
				int n;

				p = fgets(cadena, max, stdin);
				if (p != NULL)
				{
					n = strlen(cadena);
					if (n>0 && cadena[n - 1] == '\n')
						cadena[n - 1] = '\0';
				}
            }
