#include <stdio.h>

// Função para ler os números do teclado e armazená-los no vetor
void lerNumeros(int vetor[], int tamanho) {
    printf("Digite os numeros do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    printf("Vetor:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %.2d", vetor[i]);
    }
    printf("\n");
}
int buscar(int vetor[], int tamanho, int chave) {
    int i;
    for (i = 0; i < tamanho; ++i)
        if (vetor[i] == chave){
            printf("%d",i);
        }
}
int main() {
    int chave;
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    lerNumeros(vetor, tamanho);
    printf("Qual eh a posicao do valor: ");
    scanf("%d",&chave);
    imprimirVetor(vetor, tamanho);
    printf("\nPocisao do Valor:\n");
    buscar(vetor,tamanho,chave);
}