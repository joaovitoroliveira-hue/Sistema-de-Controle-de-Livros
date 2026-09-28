#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#define MAX_LIVROS 100

typedef struct {
    int codigo;
    char titulo[50];
    int ano;
    int quantidade;
} Livro;

typedef struct {
    int matricula;
    char nome[50];
    char curso[50];
} Usuario;

int carregarLivros(Livro acervo[]);
int adicionarLivro(Livro acervo[], int quantidade);
void buscarLivros(Livro acervo[], int quantidade);
void imprimirLivros(Livro acervo[], int quantidade);

int carregarUsuarios(Usuario lista[]);
int adicionarUsuario(Usuario lista[], int quantidade);
void buscarUsuario(Usuario lista[], int quantidade);
void imprimirUsuarios(Usuario lista[], int quantidade);

#endif