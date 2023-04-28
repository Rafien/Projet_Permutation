#include "p_permutation.h"
#include <stdio.h>
#include "p_base.h"
int size = 0;
t_boolean initialiser_p_permutation(int taille) {
	if (size == 0) {
		size = taille;
		return TRUE;
	}
	else {
		return FALSE;
	}
}
t_boolean est_p_permutation_initialise() {
	if (size == 0) {
		return FALSE;
	}
	else {
		return TRUE;
	}
}
t_boolean donner_taille_permutation(int* taille) {
	if (est_p_permutation_initialise()) {
		*taille = size;
		return TRUE;
	}
	else {
		return FALSE;
	}
}
t_boolean initialiser_permutation(t_permutation* ceci) {
	if (est_p_permutation_initialise()) {
		*ceci = malloc(sizeof(int) * size);
		identite_permutation(*ceci);
		return TRUE;
	}
	else {
		return FALSE;
	}
}
t_boolean identite_permutation(t_permutation ceci) {
	if (est_p_permutation_initialise()) {
		for (int ite = 0; ite < size; ite++) {
			ceci[ite] = ite;
		}
		return TRUE;
	}
	else {
		return FALSE;
	}
}
t_boolean finaliser_permutation(t_permutation* ceci) {
	if (est_p_permutation_initialise()) {
		free(*ceci);
		return TRUE;

	}
	else {
		return FALSE;
	}
}
t_boolean debugger_permutation(t_permutation ceci) {
	if (est_p_permutation_initialise()) {
		for (int ite = 0; ite < size; ite++) {
			printf("%d", ceci[size]);
			printf(", ");
		}
	}
	else {
		return FALSE;
	}
}

t_boolean est_indice_valide(int position) {
	if (position < size && position >= 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}
t_boolean est_permutation_valide(t_permutation ceci) { 
	if (est_p_permutation_initialise()) {
		for (int ite = 0; ite < size; ite++){
			for(int y = 0; y < size;y++){
				if (ceci[ite] == ceci[y] && y != ite){
					return FALSE;
				}
			} 
		}
		return TRUE;
	}
}
t_boolean est_point_fixe_permutation(t_permutation ceci, int position) {
	if (est_p_permutation_initialise()) {
		if (position == ceci[position]) {
			return TRUE;
		}
	}
	return FALSE;
}
int nb_point_fixe(t_permutation ceci) {
	int number = 0;
	for (int ite = 0; ite < size; ite++) {
		if (ite == ceci[ite]) {
			number++;
		}
	}
	return number;
}
t_boolean copier_permutation(t_permutation ceci, t_permutation cela){
	if (est_p_permutation_initialise()) {
		copier_tableau(ceci,cela,size);
		return TRUE;}
	else{
		return FALSE;
	}
}
t_boolean melanger_permutation(t_permutation ceci){
	if (est_p_permutation_initialise()) {
	for (int ite = 0;ite < size;ite++){
		int a = aleatoire_entre_a_et_b(0, size);
		int b = aleatoire_entre_a_et_b(0,size);
		echanger_tableau(ceci, a, b);
		return TRUE;}
	}
	else{
		return FALSE;
	}
}
t_boolean est_inferieur_strict(t_permutation ceci, t_permutation cela){
	if (est_p_permutation_initialise()) {
		if (est_inferieur_strict_tableau(ceci,cela, size)){
			return TRUE;
		}
	}
	return FALSE;

}