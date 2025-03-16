#ifndef FILA_H
#define FILA_H

#include <stdbool.h>
#include "lista.h" // Inclui o arquivo lista.h para usar a Lista

typedef struct cliente {
    char nome[50];
    int codigo;
    Lista lista_mercado;
} Cliente;

typedef struct no_fila {
    Cliente cliente;
    struct no_fila* proximo;
} NoFila;

typedef struct {
    NoFila* inicio;
    NoFila* fim;
} Fila;

void inicializarFila(Fila* fila);
bool filaVazia(Fila* fila);
void enfileirar(Fila* fila, Cliente cliente);
Cliente desenfileirar(Fila* fila);
void imprimirFila(Fila* fila);
void liberarFila(Fila* fila);

#endif // FILA_H