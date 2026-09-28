#include "biblioteca.h"
#include <stdio.h>
#include <string.h>

int carregarLivros(Livro acervo[]){
    FILE *arquivo = fopen("livros.txt", "r");
    int total = 0;

    if (arquivo == NULL){
        printf("Aviso: Nao foi possivel abrir o arquivo livros.txt \n");
    }
    while(total < MAX_LIVROS && fscanf(arquivo, "%d%s%d%d",&acervo[total].codigo, 
           &acervo[total].titulo, 
           &acervo[total].ano, 
           &acervo[total].quantidade) == 4){
            total++;
           }
           fclose(arquivo);
           return(total);
}

int adicionarLivro(Livro acervo[], int quantidade){
    if(quantidade >= MAX_LIVROS){
        printf("O acervo está cheio, limite de livros atingido");
        return quantidade;
    }
    printf("\n--- Adicionar novo Livro ---\n");
    printf("Digite o codigo do livro: ");
    scanf("%d", &acervo[quantidade].codigo);
    
    printf("Digite o titulo do livro (sem espacos): ");
    scanf("%s", acervo[quantidade].titulo);
    
    printf("Digite o ano de publicacao: ");
    scanf("%d", &acervo[quantidade].ano);
    
    printf("Digite a quantidade disponivel: ");
    scanf("%d", &acervo[quantidade].quantidade);

    printf("\nLivro '%s' adicionado com sucesso!\n", acervo[quantidade].titulo);
     return (quantidade + 1);
}

void buscarLivros(Livro acervo[], int quantidade){
    int codigoBusca;
    int encontrou = 0;
    if (quantidade == 0){
        printf("\nO acervo esta vazio.\n");
    }
    printf("\n--- Buscar Livro ---\n");
    printf("--- Digite o codigo do livro que deseja buscar: ---\n");
    scanf("%d", &codigoBusca);

    for(int i = 0; i < quantidade; i++){
        if(acervo[i].codigo == codigoBusca){
            printf("Livro encontrado!\n");
            printf("Titulo: %s\n", acervo[i].titulo);
            printf("Ano: %d\n", acervo[i].ano);
            printf("Quantidade: %d\n", acervo[i].quantidade);
            encontrou = 1;
            break;
        }
    }
    if(!encontrou){
        printf("\nLivro com o codigo %d nao foi encontrado no acervo", codigoBusca);
    }
}

