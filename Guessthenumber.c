#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
    int jogarNovamente = 1;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    printf("=== Bem-vindo ao 'Adivinhe o Número'! ===\n");

    while (jogarNovamente) {
        // Gera um número aleatório entre 1 e 100
        numeroSecreto = rand() % 100 + 1;
        tentativas = 0;

        printf("\nTente adivinhar o número secreto (entre 1 e 100):\n");

        while (1) {
            printf("Seu palpite: ");
            scanf("%d", &palpite);
            tentativas++;

            if (palpite < numeroSecreto) {
                printf("Muito baixo! Tente novamente.\n");
            } else if (palpite > numeroSecreto) {
                printf("Muito alto! Tente novamente.\n");
            } else {
                printf("Parabéns! Você acertou o número em %d tentativas.\n", tentativas);
                break;
            }
        }

        printf("\nDeseja jogar novamente? (1 para Sim, 0 para Não): ");
        scanf("%d", &jogarNovamente);
    }

    printf("Obrigado por jogar! Até a próxima.\n");
    return 0;
}