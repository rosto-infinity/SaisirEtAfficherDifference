#include <stdio.h>
#include <stdlib.h> // Pour la fonction abs()

void SaisirEtAfficherDifference() {
    int a, b;
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);
    
    int difference = a - b;
    printf("La valeur absolue de la différence est : %d\n", abs(difference));
}

int main() {
    SaisirEtAfficherDifference();
    return 0;
}

// Explications
// Saisie des nombres : La fonction demande à l'utilisateur de saisir deux entiers.
// Calcul de la différence : La différence entre les deux nombres est calculée.
// Affichage de la valeur absolue : La fonction abs() de la bibliothèque <stdlib.h> est utilisée pour afficher la valeur absolue de la différence.
