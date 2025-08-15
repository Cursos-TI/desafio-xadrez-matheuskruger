#include <stdio.h>
int main()
{
    int opcao, quantiddade_de_movimentos;

    printf("----- Jogo Xadrez -----------\n");
    printf("Escolha uma peça para mover: \n");
    printf("1- Rainha \n");
    printf("2- Bispo \n");
    printf("3- Torre \n");
    printf("Digite uma opção:  \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite a quantidade de casas que deseja andar: \n");
        scanf("%d", &quantiddade_de_movimentos);
        for (int i = 0; i < quantiddade_de_movimentos; i++)
        {
            printf("Esquerda\n");
        }
        break;
    case 2:
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
        printf("Digite a quantidade de casas que deseja andar: \n");
        scanf("%d", &quantiddade_de_movimentos);
        int j = 0;
        do
        {

            printf("Direita\n");
            j++;

        } while (j < quantiddade_de_movimentos);

        break;
    default:
        printf("Opção invalida");
        return 0;
        break;
    }

    return 0;
}