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