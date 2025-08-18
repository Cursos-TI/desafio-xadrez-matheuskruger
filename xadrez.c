#include <stdio.h>

// ===== Funções Recursivas =====

// Movimento da Torre
// A função move a torre para a direita recursivamente
// Parâmetro "casas": número de casas que a torre deve percorrer
// Cada chamada da função imprime "Direita" e chama a si mesma com casas-1
void movertorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}
// Movimento do Bispo
// Combina recursão e loops aninhados
// Cada recursão representa uma diagonal (Cima + Direita)
// Loop externo (vertical) e interno (horizontal) podem ser expandidos para múltiplas casas
void moverbispo(int casas)
{
    if (casas <= 0)
    {
        return;
    }
    for (int i = 0; i < 1; i++)

    {
        printf("Cima\n");
        for (int j = 0; j < 1; j++)
        {

            printf("Direita\n");
        }
    }

    moverbispo(casas - 1);
}

// Movimento da Rainha
// A função move a rainha para a esquerda recursivamente
// Parâmetro "casas": número de casas que a rainha deve percorrer
// Cada chamada da função imprime "Esquerda" e chama a si mesma com casas-1
void moverrainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}
// Movimento do Cavalo
// Simula o movimento em "L": 2 casas para cima e 1 para a direita
// Utiliza loops aninhados para separar vertical e horizontal
void movercavalo()
{
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
        for (int j = 0; j < 1; j++)
        {
            if (i == 1)
            {
                printf("Direita\n");
            }
            else
            {
                continue;
            }
        }
    }
}
// ===== Programa Principal =====
int main()
{
    int opcao, quantidade_de_movimentos;
    // Menu de seleção de peça
    // Permite ao usuário escolher a peça e a quantidade de casas a movimentar
    // Chama a função correspondente à peça selecionada
    printf("----- Jogo Xadrez -----------\n");
    printf("Escolha uma peça para mover: \n");
    printf("1- Rainha \n");
    printf("2- Bispo \n");
    printf("3- Torre \n");
    printf("4- Cavalo \n");
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // Rainha:
        printf("\nQuantas casas deseja mover a Rainha? ");
        scanf("%d", &quantidade_de_movimentos);
        moverrainha(quantidade_de_movimentos);

        break;
    case 2:
        // Bispo:
        printf("Digite a quantidade de casas que deseja andar: \n");
        scanf("%d", &quantidade_de_movimentos);
        moverbispo(quantidade_de_movimentos);
        break;

    case 3:
        // Torre:

        printf("Digite a quantidade de casas que deseja andar: \n");
        scanf("%d", &quantidade_de_movimentos);
        movertorre(quantidade_de_movimentos);

        break;
    case 4:
        // Cavalo: movimento composto usando for
        movercavalo();
        break;

    default:
        printf("Opção invalida");
        return 0;
        break;
    }

    return 0;
}