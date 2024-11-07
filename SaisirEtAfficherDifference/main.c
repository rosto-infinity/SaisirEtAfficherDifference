#include <stdio.h>

// Fonction pour trier un tableau avec l'algorithme de tri à bulles
void tri_a_bulles(int Tab[], int n) {
    int i, j, temp;

    // Parcours du tableau de n à 1
    for (i = n; i > 1; i--) {
        // Parcours de 2 à i
        for (j = 2; j <= i; j++) {
            // Comparaison et échange si nécessaire
            if (Tab[j - 1] > Tab[j]) {
                // Échange des éléments
                temp = Tab[j - 1];
                Tab[j - 1] = Tab[j];
                Tab[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Demander à l'utilisateur la taille du tableau
    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &n);

    int Tab[n];

    // Récupérer les éléments du tableau
    printf("Entrez %d entiers : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &Tab[i]);
    }

    // Appeler la fonction de tri
    tri_a_bulles(Tab, n);

    // Afficher le tableau trié
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n");

    return 0;
}
