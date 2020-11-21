#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include<locale.h>


int main() {
    char Nom[20];
    char Prenom[20];
    char Sexe;


    printf("etes vous une femme ou un homme ? F/H\n");
    Sexe = _getch();
    Sexe = toupper(Sexe);


    printf("veuillez saisir votre nom (si espace, mettez un tiret a la place):\n");
    scanf_s("%s", &Nom, (unsigned)_countof(Nom));


    printf("Veuillez saisir votre prenom (si espace, mettez un tiet a la place):\n");
    scanf_s("%s", &Prenom, (unsigned)_countof(Prenom));


    if (Sexe == 'H') {
        printf("Monsieur %s, %s", Prenom, Nom);
    }
    else {
        printf("Madame %s, %s", Prenom, Nom);
    }

}