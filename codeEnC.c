#include <stdio.h>
#include <stdlib.h>

void tri_bulle(int tab[], int n) {
    int i, j, x;
    for (i = 0; i < n- 1; i++) {
        for (j = 0; j < n- i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                x = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = x;
            }
        }
    }
}

int main() {
    int n, i;
    printf("version 2");
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les elements du tableau : ");
    for (i = 0; i <n; i++) {
        scanf("%d", &tab[i]);
    }
    tri_bulle(tab, n);
    printf("Tableau trie : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
