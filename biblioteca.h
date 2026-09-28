#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#define MAX_LIVROS 100

typedef struct {
    int codigo;
    char titulo[50];
    int ano;
    int quantidade;
} Livro;


#endif