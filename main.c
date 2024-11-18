#include <stdio.h>
#include <stdlib.h>

typedef int* tipo_vetor_dinamico;
typedef unsigned int uint;

tipo_vetor_dinamico alocarMemoriaVetor(uint tamanho) {
    tipo_vetor_dinamico vetor;
    vetor = malloc(sizeof(int) * tamanho);
    return vetor;
}

void lerDadosVetor(tipo_vetor_dinamico vetor, uint tamanho) {
    for (uint i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

void apresentarDadosVetor(tipo_vetor_dinamico vetor, uint tamanho) {
    if (tamanho == 0) {
        printf("[vazio]\n");
    } else {
        for (uint i = 0; i < tamanho; i++) {
            (i == 0) ? printf("%d", vetor[i]) : printf(" %d", vetor[i]);
        }
        printf("\n");
    }
}

void desalocarMemoriaVetor(tipo_vetor_dinamico vetor) {
    free(vetor);
}

int main(){
    // dados
    uint tamanho_vetor;
    tipo_vetor_dinamico vetor_dinamico;

    // 1 - leia o tamanho de um vetor
    scanf("%u", &tamanho_vetor);

    // 2 - Aloque dinamicamente a memoria para o vetor
    vetor_dinamico = alocarMemoriaVetor(tamanho_vetor);

    // 3 - Leia os dados do vetor
    lerDadosVetor(vetor_dinamico, tamanho_vetor);

    // 4 - Apresente os dados do vetor
    apresentarDadosVetor(vetor_dinamico, tamanho_vetor);

    // 5 - Desaloque a memória alocada anteriormente
    desalocarMemoriaVetor(vetor_dinamico);

    return 0;
}