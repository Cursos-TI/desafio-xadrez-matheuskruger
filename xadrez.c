#include <stdio.h>
int main()
{
    int opcao, quantiddade_de_movimentos;
    // Exibe o menu para escolha de qual peça mover
    printf("----- Jogo Xadrez -----------\n");4
    printf("Escolha uma peça para mover: \n");
    printf("1- Rainha \n");
    printf("2- Bispo \n");
    printf("3- Torre \n");
    printf("4- Cavalo \n");
    printf("Digite uma opção:  \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // Rainha: movimento repetido com for
        printf("Digite a quantidade de casas que deseja andar: \n");
        scanf("%d", &quantiddade_de_movimentos);
        for (int i = 0; i < quantiddade_de_movimentos; i++)
        {
            printf("Esquerda\n");
        }
        break;
    case 2:
        // Bispo: movimento repetido com while
        printf("Digite a quantidade de casas que deseja andar: \n");
        scanf("%d", &quantiddade_de_movimentos);
        int i = 0;
        while (i < quantiddade_de_movimentos)
        {
            printf("Cima, Direita\n");
            i++;
        }
        break;

    case 3:
        // Torre: movimento repetido com do...while

        printf("Digite a quantidade de casas que deseja andar: \n");
        scanf("%d", &quantiddade_de_movimentos);
        int j = 0;
        do
        {

            printf("Direita\n");
            j++;

        } while (j < quantiddade_de_movimentos);

        break;
    case 4:
        // Cavalo: movimento composto usando for e while
        int k = 1;
        for (int i = 1; i < 2; i++)
            printf("\n");
        {
            while (k <= 2)
            {
                printf("Baixo,");
                k++;
            }
            printf("Esquerda");
        }
        break;
    default:
        printf("Opção invalida\n");
        printf("Saindo do programa\n");
        return 0;
        break;
    }

    return 0;
}