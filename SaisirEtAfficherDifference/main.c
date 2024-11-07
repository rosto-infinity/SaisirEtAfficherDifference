#include <stdio.h>

// Fonction pour trier un tableau avec l'algorithme de tri � bulles
void tri_a_bulles(int Tab[], int n) {
    int i, j, temp;

    // Parcours du tableau de n � 1
    for (i = n; i > 1; i--) {
        // Parcours de 2 � i
        for (j = 2; j <= i; j++) {
            // Comparaison et �change si n�cessaire
            if (Tab[j - 1] > Tab[j]) {
                // �change des �l�ments
                temp = Tab[j - 1];
                Tab[j - 1] = Tab[j];
                Tab[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Demander � l'utilisateur la taille du tableau
    printf("Entrez le nombre d'�l�ments dans le tableau : ");
    scanf("%d", &n);

    int Tab[n];

    // R�cup�rer les �l�ments du tableau
    printf("Entrez %d entiers : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &Tab[i]);
    }

    // Appeler la fonction de tri
    tri_a_bulles(Tab, n);

    // Afficher le tableau tri�
    printf("Tableau tri� : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n");

    return 0;
}
