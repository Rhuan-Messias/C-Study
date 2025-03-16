#include <stdio.h>
#include "fila.h"
#include "lista.h"

int main() {
    Fila fila;
    inicializarFila(&fila);

    //Recriando a saída fornecida no arquivo saida.txt do professor
    // Dados usados na saída do professor
    Dado produto1 = {"Produto 1A", 10.50f, 123, 10};
    Dado produto2 = {"Produto 2A", 20.00f, 2, 2};
    Dado produto3 = {"Produto 1B", 15.00f, 3, 3};
    Dado produto4 = {"Produto 3B", 35.00f, 5, 5};
    Dado produto5 = {"Produto 1C", 5.00f, 6, 6};

    // clientes e listas
    Cliente cliente1 = {"Cliente A", 101, {NULL, NULL}};
    inicializarLista(&cliente1.lista_mercado);
    inserirProduto(&cliente1.lista_mercado, produto1, -1);
    inserirProduto(&cliente1.lista_mercado, produto2, -1);

    Cliente cliente2 = {"Cliente B", 102, {NULL, NULL}};
    inicializarLista(&cliente2.lista_mercado);
    inserirProduto(&cliente2.lista_mercado, produto3, -1);
    inserirProduto(&cliente2.lista_mercado, produto4, -1);

    Cliente cliente3 = {"Cliente C", 103, {NULL, NULL}};
    inicializarLista(&cliente3.lista_mercado);
    inserirProduto(&cliente3.lista_mercado, produto5, -1);

    // Enfileirando clientes
    enfileirar(&fila, cliente1);
    enfileirar(&fila, cliente2);
    enfileirar(&fila, cliente3);

    // Imprimindo a fila
    printf("Fila de Clientes:\n");
    imprimirFila(&fila);

    // Desenfileirando o cliente
    printf("\nCliente Desenfileirado:\n");
    Cliente clienteDesenfileirado = desenfileirar(&fila);
    printf("Nome: %s, Código: %d\n", clienteDesenfileirado.nome, clienteDesenfileirado.codigo);
    printf("Lista de Mercado:\n");
    imprimirLista(&clienteDesenfileirado.lista_mercado);

    // Imprimindo a fila após desenfileirar
    printf("\nFila após desenfileirar:\n");
    imprimirFila(&fila);

    // Dando Free na memoria
    liberarFila(&fila);

    return 0;
}
