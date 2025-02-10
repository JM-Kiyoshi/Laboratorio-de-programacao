#include <stdio.h>
#include <stdlib.h>

struct estoque{
    char nomePeca[80];
    int numPeca;
    float preco;
    int numPedido;
};

int main(){
    struct estoque produto;

    printf("Digite o nume da peca: ");
    fgets(produto.nomePeca, 80, stdin);

    printf("Digite o numero da peca: ");
    scanf("%d", &produto.numPeca);

    printf("Digite o preco da peca: ");
    scanf("%f", &produto.preco);

    printf("Digite o numero do pedido: ");
    scanf("%d", &produto.numPedido);

    printf("Nome do produto: %s", produto.nomePeca);
    printf("Numero da peca: %d\n", produto.numPeca);
    printf("Preco do produto: %f\n", produto.preco);
    printf("Numero do pedido: %d\n", produto.numPedido);

}