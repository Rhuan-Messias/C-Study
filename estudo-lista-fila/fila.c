#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

// Inicializa a fila
void inicializarFila(Fila* fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

// verificar se a fila esta vazia
bool filaVazia(Fila* fila) {
    return fila->inicio == NULL;
}

// colocar os clientes em fila
void enfileirar(Fila* fila, Cliente cliente) {
    NoFila* novoNoFila = (NoFila*)malloc(sizeof(NoFila));
    if (!novoNoFila) {
        printf("Erro ao alocar memória para o cliente.\n");
        return;
    }
    novoNoFila->cliente = cliente;
    novoNoFila->proximo = NULL;

    if (filaVazia(fila)) {
        fila->inicio = novoNoFila;
        fila->fim = novoNoFila;
    } else {
        fila->fim->proximo = novoNoFila;
        fila->fim = novoNoFila;
    }
}

// desenfileirar um cliente
Cliente desenfileirar(Fila* fila) {
    Cliente clienteDesenfileirado = {"", 0, {NULL, NULL}}; // Cliente padrão

    if (!filaVazia(fila)) {
        NoFila* aux = fila->inicio;
        clienteDesenfileirado = aux->cliente;
        fila->inicio = fila->inicio->proximo;
        if (fila->inicio == NULL) {
            fila->fim = NULL;
        }
        free(aux);
    }
    return clienteDesenfileirado;
}

// imprimir a fila
void imprimirFila(Fila* fila) {
    NoFila* atual = fila->inicio;
    while (atual != NULL) {
        printf("Nome: %s, Código: %d\n", atual->cliente.nome, atual->cliente.codigo);
        printf("Lista de Mercado:\n");
        imprimirLista(&atual->cliente.lista_mercado);
        printf("--------------------\n");
        atual = atual->proximo;
    }
}

// dar Free 
void liberarFila(Fila* fila) {
    NoFila* atual = fila->inicio;
    while (atual != NULL) {
        NoFila* aux = atual;
        atual = atual->proximo;
        liberarLista(&aux->cliente.lista_mercado);
        free(aux);
    }
    fila->inicio = NULL;
    fila->fim = NULL;
}
