#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para inicializar a lista
void inicializarLista(Lista* lista) {
    lista->cabeca = NULL;
    lista->ultimo = NULL;
}

// Confirmar se a lista esta vazia
bool listaVazia(Lista* lista) {
    return lista->cabeca == NULL;
}

// Inserir produto na lista
void inserirProduto(Lista* lista, Dado dado, int posicao) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (!novoNo) {
        printf("Erro ao alocar memória para o produto.\n");
        return;
    }
    novoNo->dado = dado;
    novoNo->proximo = NULL;

    if (listaVazia(lista)) {
        lista->cabeca = novoNo;
        lista->ultimo = novoNo;
    } else {
        if (posicao == 0) { // Inserir no início
            novoNo->proximo = lista->cabeca;
            lista->cabeca = novoNo;
        } else if (posicao == -1) { // Inserir no fim
            lista->ultimo->proximo = novoNo;
            lista->ultimo = novoNo;
        } else { // Inserir em uma posição específica
            No* atual = lista->cabeca;
            int i = 1;
            while (atual != NULL && i < posicao) {
                atual = atual->proximo;
                i++;
            }
            if (atual != NULL) {
                novoNo->proximo = atual->proximo;
                atual->proximo = novoNo;
            }
        }
    }
}

// Função para remover um produto da lista com o codigo
Dado removerProduto(Lista* lista, int codigo) {
    No* atual = lista->cabeca;
    No* anterior = NULL;
    Dado produtoRemovido = {"", 0.0f, 0, 0}; // Ideia para ter um produto padrão se não tiver codigo

    while (atual != NULL) {
        if (atual->dado.codigo == codigo) {
            produtoRemovido = atual->dado;
            if (anterior == NULL) {
                lista->cabeca = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            if (atual == lista->ultimo) {
                lista->ultimo = anterior;
            }
            free(atual);
            break;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return produtoRemovido;
}

// Imrpimir a lista 
void imprimirLista(Lista* lista) {
    No* atual = lista->cabeca;
    while (atual != NULL) {
        printf("Nome: %s, Preço: %.2f, Código: %d, Quantidade: %d\n", 
               atual->dado.nome_produto, atual->dado.preco, 
               atual->dado.codigo, atual->dado.quantidade);
        atual = atual->proximo;
    }
}

// dar Free na lista
void liberarLista(Lista* lista) {
    No* atual = lista->cabeca;
    while (atual != NULL) {
        No* aux = atual;
        atual = atual->proximo;
        free(aux);
    }
    lista->cabeca = NULL;
    lista->ultimo = NULL;
}
