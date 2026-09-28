#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#define MAX_LIVROS 100

typedef struct {
    int codigo;
    char titulo[50];
    int ano;
    int quantidade;
} Livro;

int carregarLivros(Livro acervo[]);
int adicionarLivro(Livro acervo[], int quantidade);
void buscarLivros(Livro acervo[], int quantidade);
void imprimirLivros(Livro acervo[], int quantidade);

#endif