#include "estadistica.h"
#include <stdio.h>

int main() {

    int max = MAX_PAL;
    int i = 0;
    int numfichas;
    tficha Fichas[max];
    printf("PROGRAMA ESTADISTICA\n");
    printf("####################\n");
    numfichas = Pedir_notas(Fichas, max);
    if (numfichas > i) {
        MuestraPersonas(Fichas, numfichas);
        CalculaEstadistica(Fichas, numfichas);
        i++;
    }
    return 0;
}