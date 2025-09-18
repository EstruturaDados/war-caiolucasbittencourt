// Inclusão das bibliotecas necessárias para entrada/saída e manipulação de strings.
#include <stdio.h>
#include <string.h>

// Define uma constante para o número de territórios, facilitando futuras manutenções.
#define QTD_TERRITORIOS 5

/*
 * Definição da Estrutura (struct) Territorio
 * Esta estrutura agrupa os dados relacionados a um único território do jogo.
 * - nome: armazena o nome do território (até 29 caracteres + caractere nulo).
 * - cor: armazena a cor do exército que domina o território.
 * - tropas: armazena a quantidade de tropas no território.
 */
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Declaração do vetor de structs.
    // Este vetor 'territorios' pode armazenar os dados de 5 territórios.
    struct Territorio territorios[QTD_TERRITORIOS];

    // --- Seção de Entrada de Dados ---
    // Mensagem inicial para orientar o usuário.
    printf("===== CADASTRO DE TERRITORIOS DO JOGO WAR =====\n");
    printf("Por favor, insira os dados para os %d territorios.\n\n", QTD_TERRITORIOS);

    // Laço 'for' para percorrer o vetor e cadastrar cada território.
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("--- Cadastrando Territorio %d ---\n", i + 1);

        // Solicita e lê o nome do território.
        // Usamos " %[^\n]" para ler strings que contenham espaços.
        // O espaço antes de '%' limpa o buffer de entrada, evitando problemas com o 'Enter' anterior.
        printf("Digite o nome do territorio: ");
        scanf(" %[^\n]", territorios[i].nome);

        // Solicita e lê a cor do exército.
        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Solicita e lê o número de tropas.
        // Usamos '&' para passar o endereço da variável para o scanf.
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Adiciona uma linha em branco para melhor formatação.
    }

    // --- Seção de Exibição de Dados ---
    // Mensagem para indicar que os dados cadastrados serão exibidos.
    printf("\n===== DADOS DOS TERRITORIOS CADASTRADOS =====\n\n");

    // Laço 'for' para percorrer o vetor e exibir os dados de cada território.
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("--- Territorio %d ---\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
        printf("---------------------\n\n");
    }

    return 0; // Indica que o programa foi executado com sucesso.
}