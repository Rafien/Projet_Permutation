int aleatoire_entre_a_et_b(int a_inclus, int b_exclu) {
    return (rand() % (b_exclu - a_inclus));
}