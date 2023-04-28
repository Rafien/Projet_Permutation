#include <time.h>

int aleatoire_entre_a_et_b(int a_inclus, int b_exclu) {
    srand(time(NULL));
    return (rand() % (b_exclu - a_inclus));
}

void identite_tableau(int* ceci, int nb_elements) {
    for (int i = 0; i < nb_elements; i++) {
        ceci[i] = i;
    }
}

void echanger_tableau(int* ceci, int position_1, int position_2) {
    int temp = malloc(sizeof(int));
    temp = ceci[position_1];
    ceci[position_1] = ceci[position_2];
    ceci[position_2] = temp;
}

void croiser_tableau(int* tab, int nb_elements) {
    for (int i = 0; i < nb_elements; i++) {
        echanger_tableau(tab, i, nb_elements - i - 1);
    }
}

void copier_tableau(int* tab, int* dans, int nb_elements) {
    for (int i = 0; i < nb_elements; i++) {
        dans[i] = tab[i];
    }
}

void copier_croisement_tableau(int* tab, int* dans, int nb_elements) {
    for (int i = nb_elements, j = 0; i > 0; i--, j++) {
        dans[j] = tab[i];
    }
}

int est_inferieur_strict_tableau(int* ceci, int* cela, int nb_elements) {
    for (int i = 0; i < nb_elements; i++) {
        if (ceci[i] < cela[i]) {
            return 1;
        }
        return 0;
    }
}