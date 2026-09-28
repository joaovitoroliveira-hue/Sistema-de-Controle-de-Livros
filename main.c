#include <stdio.h>
#include "biblioteca.c"

int main() {
    Livro acervo[MAX_LIVROS];
    int quantidadeAtual = 0, opcao;

    do{
        printf("\n--- Sistema Bibliotecario ---\n");
        printf("1. Adicionar livro\n");
        printf("2. Buscar livro por codigo\n");
        printf("3. Imprimir livros\n");
        printf("4. Cadastrar Usuario\n");
        printf("5. Buscar usuario por matricula\n");
        printf("6. Imprimir Usuarios\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); 
        switch(opcao) {
            case 1:
                quantidadeAtual = adicionarLivro(acervo, quantidadeAtual);
                break;
            case 2:
                buscarLivros(acervo, quantidadeAtual);
                break;
            case 3:
                imprimirLivros(acervo, quantidadeAtual);
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
                
                break;
            case 7:
                printf("\nSaindo do sistema...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 7);

    return(0);
}