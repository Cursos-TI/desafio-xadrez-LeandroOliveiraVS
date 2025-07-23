#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispoMax = 5;
    int torreMax = 5;
    int rainhaMax = 8;

    int bispoInput;
    int torreInput;
    int rainhaInput;

    int i = 0;
    int j = 0;
    int k = 0;
    // Movimentação do Bispo
    do
    {
        if (i < bispoMax)
    {
        printf("Quantas casas o bispo deve andar (max = 5)\n");
        scanf("%i", &bispoInput);
        getchar();
        if (bispoInput <= (bispoMax - i) && bispoInput > 0) {
            if (i == 0)
                printf("O Bispo andou %d casas\n", bispoInput);
            else
                printf("O Bispo andou mais %d casas\n", bispoInput);
            i += bispoInput;
        } else {
            int restante = bispoMax - i;
            printf("Voce so pode andar mais %d casas!\n", restante);
        }
    } else {
        printf("Valor máximo de casas atingido! \n");
    }
} while (i < bispoMax);
printf("===========================================\n");
printf("O bispo andou 5 casas na diagonal superior! \n");
printf("===========================================\n");

i = 0;
// Movimentação da torre
do
{
    if (i < torreMax)
    {
        printf("Quantas casas a torre deve andar (max = 5)\n");
        scanf("%i", &torreInput);
        getchar();
        if (torreInput <= (torreMax - i) && torreInput > 0) {
            if (i == 0)
                printf("A Torre andou %d casas\n", torreInput);
            else
                printf("A Torre andou mais %d casas\n", torreInput);
            i += torreInput;
        } else {
            int restante = torreMax - i;
            printf("Voce so pode andar mais %d casas!\n", restante);
        }
    } else {
        printf("Valor máximo de casas atingido! \n");
    }
    } while (i < torreMax);
    printf("===========================================\n");
    printf("A torre andou 5 casas para a direita! \n");
    printf("===========================================\n");
    i = 0;
    // Movimentação da rainha
    do
    {
        if (i < rainhaMax)
        {
            printf("Quantas casas a rainha deve andar (max = 8)\n"); 
            scanf("%i", &rainhaInput);
            getchar();
            if (rainhaInput <= (rainhaMax - i) && rainhaInput > 0){
                if (i == 0)
                    {printf("A Rainha andou %d casas\n", rainhaInput);}
                else {
                    printf("A Rainha andou mais %d casas\n", rainhaInput);}
                i += rainhaInput;
            }else {
                printf("Voce não pode colocar mais do que %d casas!\n", rainhaMax - i);
            }
        }else {printf("Valor máximo de casas atingido! \n");
        };

    } while (i < rainhaMax);
    printf("===========================================\n");
    printf("A rainha andou 8 casas para a esquerda! \n");
    printf("===========================================\n");

    printf("\n\nPressione ENTER para fechar a janela...");
    getchar(); 

    return 0;
}
