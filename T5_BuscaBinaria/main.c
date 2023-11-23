#include <stdio.h>
#include <stdlib.h>

void inserirValor(int vetor[], int tamanho) {
    int item;
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor a ser inserido no vetor: \n");
        scanf("%d", &item);
        vetor[i] = item;
    }
}

buscaSequencialIterativa(int vetorDeInteiros[10], int comecoBusca, int finalBusca, int busca)
    {
        int comecoBusca = 0;
        int finalBusca = 9;
        bool dadoEncontrado = false;

        while(comecoBusca <= finalBusca)
        {
            int i = (comecoBusca + finalBusca) / 2;

            if(vetorDeInteiros[i] == busca)
            {
                return i;
            }

            if(vetorDeInteiros[i] > busca)
            {
                finalBusca = i - 1;
            } else {
                comecoBusca = i + 1;
            }
        }
        return -1;
    }

int main()
{
    int vetorDeInteiros[10];
    int item;
    int i, opcao;

    printf("Escolha uma opcao:\n");
    printf("1 - Inserir Valores no Vetor\n");
    printf("2 - Pesquisar Valores no Vetor\n\n");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:
            inserirValor(vetorDeInteiros, 10);
            break;
        case 2:
            printf("Digite o valor a ser pesquisado no vetor: \n");
            scanf("%d", &item);
            for (int i = 0; i < 10; i++) {
                if (item == vetorDeInteiros[i]) {
                    printf("O valor %d foi encontrado no índice %d do vetor.\n", item, i);
                    break;
                }
            }
            if (i == 10) {
                printf("O valor %d não foi encontrado no vetor.\n", item);
            }
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
