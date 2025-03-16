#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>

typedef struct dado {
    char nome_produto[255];
    float preco;
    int codigo;
    int quantidade;
} Dado;

typedef struct no {
    Dado dado;
    struct no* proximo;
} No;

typedef struct {
    No* cabeca;
    No* ultimo;
} Lista;

void inicializarLista(Lista* lista);
bool listaVazia(Lista* lista);
void inserirProduto(Lista* lista, Dado dado, int posicao); //posição: 0 para inicio, -1 para fim, numeros de 1 em diante para demais indexes
Dado removerProduto(Lista* lista, int codigo);
void imprimirLista(Lista* lista);
void liberarLista(Lista* lista);

#endif // LISTA_H