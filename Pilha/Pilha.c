#include "Pilha.h"

// Variáveis
char pilha[TAMANHO];
int posicao = 0;

// Funções
bool estaCheia() {
    return posicao == TAMANHO;
}

bool push(char caracter) {
    if (estaCheia()) {
        return false;
    }
    pilha[posicao] = caracter;
    posicao++;
    return true;
}

bool pop(char *caracter) {
    if (posicao == 0) {
        return false;
    }
    posicao--;
    *caracter = pilha[posicao];
    return true;
}

void EstouVazia(){
    
}