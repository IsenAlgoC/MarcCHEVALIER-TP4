#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {

    char mot[40];
    int taille;
    int moitie;
    bool pareil = true;

    printf("entrez le mot a tester:\n\n");
    scanf_s("%s", &mot, (unsigned)_countof(mot));

    taille = strlen(mot);
    moitie = (taille / 2);

    printf("\nmoitie = %d\n", moitie);

    for (int i = 1; i <= moitie; i++) {
        if (mot[i - 1] != mot[taille - i]) {
            pareil = false;
        }
    }
    if (pareil == true) {
        printf("%s est un palindrome\n", mot);

    }
    else {
        printf("%s n'est pas un palindrome\n", mot);
    }


}
