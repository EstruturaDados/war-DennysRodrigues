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

void removerQuebraLinha(char *texto){
    size_t len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n'){
        texto[len -1] = '\0';
    }
}

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
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        removerQuebraLinha(territorios[i].nome); 

        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        removerQuebraLinha(territorios[i].cor);
        
        printf("Digite o número de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar();
        
        printf("-------------------------------------\n");

    }


    // Exibição dos dados

    printf("\n=== Lista de Territórios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Número de tropas: %d\n", territorios[i].tropas);
   }

   printf("\nCadastro concluído com sucesso!\n");
   return 0;
    
}

