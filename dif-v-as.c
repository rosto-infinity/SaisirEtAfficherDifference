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
