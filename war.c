// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO


#include <stdio.h>
#include <string.h>

// Definição da Struct terriório com seus campos relacionados

struct Territorio {
    char nome[30];
    char cor [10];
    int tropas;
};

int main(){
// Vetor de 5 estruturas do tipo Territorio
    struct Territorio territorios[5];

    // Váriavel de controle para o laço de repetição
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    //Cadastro dos 5 territórios e suas variaveis

    for (i = 0; i < 5; i++){
        printf("Cadastro de Território %d\n", i + 1);

        printf("Digite o nome do terrirório: ");
        scanf(" %[^\n]", territorios[i].nome); 

        printf("Digite a cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);
        
        printf("Digite o número de tropas: ");
        scanf(" %d", &territorios[i].tropas);
        
        printf("-------------------------------------\n")
    }
}

