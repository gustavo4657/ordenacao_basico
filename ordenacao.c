#include "ordenacao.h"

void insertion_sort(int *v, int n){
    // Insira a lógica do algoritmo de ordenação por inserção aqui.
    for(int i = 1; i < n; i++){
        int chave = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > chave){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }
}

void selection_sort(int *v, int n){
    // Insira a lógica do algoritmo de seleção por inserção aqui.
    for(int i = 0; i < n - 1; i++){
        int menor = i;
        for(int j = i + 1; j < n; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        int temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }
}
