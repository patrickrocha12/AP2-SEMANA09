#include <stdio.h>

int buscaBinaria(int arr[], int esquerda, int direita, int alvo) {
    if (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (arr[meio] == alvo)
            return meio;
        if (arr[meio] > alvo)
            return buscaBinaria(arr, esquerda, meio - 1, alvo);
        return buscaBinaria(arr, meio + 1, direita, alvo);
    }
    return -1;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int alvo;
    printf("Digite um número de 1 a 10: \n");
    scanf("%d", &alvo);
    int resultado = buscaBinaria(vetor, 0, tamanho - 1, alvo);
    if (resultado == -1)
        printf("O elemento %d não está presente no vetor.\n", alvo);
    else
        printf("O elemento %d está presente no índice %d do vetor.\n", alvo, resultado);
    return 0;
}