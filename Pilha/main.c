#include <stdio.h>
#include <locale.h>
#include "Pilha.h"


//Constantes

enum {
    OP_ESCREVER = 1,
    OP_SAIR = 2,
    TAM_EXPRESSAO = 61,
};

//Funções

int menu();

//Main

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;
    char expressao[TAM_EXPRESSAO];
    int i;
    char caracter;
    while (opcao != 2){

        opcao = menu();
        switch (opcao){

            case OP_ESCREVER:

                printf("Digite a expressao: \n");
                    fgets(expressao, TAM_EXPRESSAO, stdin);

                    for(i=0; expressao[i] != '\0'; i++){
                    
                        caracter = expressao[i];

                        if (caracter == '('){
                            (!push(caracter))
                        }
                            if(caracter == ')'){
                                (pop(&caracter))
                            } 
                    }
        
            break;

            case OP_SAIR:

                printf("Você saiu.");
            break;
        }
    }
    

    





    
}







int menu(){

    int op = 0;
    printf("------Menu------\n");
    printf("Digite a opcao desejada: \n");
    printf("1-Inserir expressão: \n");
    printf("2-Sair!\n");
    scanf("%d", &op);

    return op;
}
