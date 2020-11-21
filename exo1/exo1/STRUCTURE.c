#include <stdio.h>
#include <stdlib.h>
#include "STRUCT.h"

int main() {

    HEURE HeureDebut = { 12, 30 }, HeureFin, Duree = { 00, 45 };


    HeureFin.heure = HeureDebut.heure + Duree.heure + (int)((HeureDebut.minute + Duree.minute) / 60);
    HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;

    printf("Heure de Debut : %d:%d \n\n", HeureDebut.heure, HeureDebut.minute);
    printf("Duree = %d:%d \n\n", Duree.heure, Duree.minute);
    printf("Heure de Fin : %d:%d \n\n", HeureFin.heure, HeureFin.minute);


}