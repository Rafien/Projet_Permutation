#include "p_base.h"
#include <stdio.h>
#include <stdlib.h>

void main() {
	int taille = aleatoire_entre_a_et_b(6, 10);
	int* ceci = malloc(sizeof(int)* taille);
	identite_tableau(ceci, taille);
	//print ceci
	echanger_tableau(ceci, 2, 3);
	// print ceci
	croiser_tableau(ceci, 5);
	// print ceci
	int* new = malloc(sizeof(int) * taille);
	copier_tableau(ceci, new, 4);
	// print ceci et new
	int* second = malloc(sizeof(int) * taille);
	copier_croisement_tableau(ceci, second, 3);
	// print ceci et second
}