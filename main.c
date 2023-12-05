#include <stdio.h>

void inserirOrdenado(int vetor[], int *tamanho, int elemento) {
    int i, j;

    for (i = 0; i < *tamanho; i++) {
        if (vetor[i] > elemento) {

            for (j = *tamanho; j > i; j--) {
                vetor[j] = vetor[j - 1];
            }

            vetor[i] = elemento;
            (*tamanho)++;
            return;
        }
    }

    vetor[*tamanho] = elemento;
    (*tamanho)++;
}

int buscaBinaria(int vetor[], int tamanho, int elemento) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == elemento) {
            return meio;
        } else if (vetor[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}


int main() {
    int vetor[10];
    int tamanho = 0, elemento, posicao;

    printf("Insira 10 valores inteiros, um por vez:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &elemento);
        inserirOrdenado(vetor, &tamanho, elemento);
    }

    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &elemento);

    posicao = buscaBinaria(vetor, tamanho, elemento);

    if (posicao != -1) {
        printf("Elemento encontrado na posicao %d do vetor.\n", posicao);
    } else {
        printf("Elemento nao encontrado no vetor.\n");
    }

    return 0;
}
