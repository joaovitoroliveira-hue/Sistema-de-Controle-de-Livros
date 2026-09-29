#include "biblioteca.h"
#include <stdio.h>
#include <string.h>

int carregarLivros(Livro acervo[]){
    FILE *arquivo = fopen("livros.txt", "r");
    int total = 0;

    if (arquivo == NULL){
        printf("Aviso: Nao foi possivel abrir o arquivo livros.txt \n");
        return 0;
    }
    while(total < MAX_LIVROS && fscanf(arquivo, "%d%s%d%d",&acervo[total].codigo, 
           acervo[total].titulo, 
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

void imprimirLivros(Livro acervo[], int quantidade){
    printf("\n--- Lista de Livros (%d cadastrados) ---\n", quantidade);
    if(quantidade ==0){ 
        printf("O acervo está vazio. \n");
    }
    for (int i = 0; i < quantidade; i++){
        printf("Codigo: %d | Titulo: %s | Ano: %d | Quantidade: %d \n", acervo[i].codigo, acervo[i].titulo, acervo[i].ano, acervo[i].quantidade);
    }
    printf("------------------------------------------");
    
}

int carregarUsuarios(Usuario lista[]){
    FILE *arquivo = fopen("usuarios.txt", "r");
    int total = 0;

    if (arquivo == NULL){
        printf("Aviso: Nao foi possivel abrir o arquivo usuarios.txt \n");
        return 0;
    }
    while(total < MAX_USUARIO && fscanf(arquivo, "%d%s%s",&lista[total].matricula, 
           lista[total].nome, 
           lista[total].curso) == 3){
            total++;
           }
           fclose(arquivo);
           return(total);
}

int adicionarUsuario(Usuario lista[], int quantidade) {
        if(quantidade >= MAX_USUARIO){
        printf("Erro: Quantidade Maxima de Usuarios Atingida\n");
        return quantidade;
    }
    printf("\n--- Cadastrar Usuario ---\n");
    printf("Digite a matricula do usuario: ");
    scanf("%d", &lista[quantidade].matricula);
    
    printf("Digite o nome do usuario(sem espacos): ");
    scanf("%s", lista[quantidade].nome);
    
    printf("Digite o curso do usuario: ");
    scanf("%s", lista[quantidade].curso);

    printf("\nUsuario '%s' cadastrado com sucesso!\n", lista[quantidade].nome);
     return (quantidade + 1);
}

void buscarUsuario(Usuario lista[], int quantidade){
    int codigoBusca;
    int encontrou = 0;
    if (quantidade == 0){
        printf("\nO acervo esta vazio.\n");
    }
    printf("\n--- Buscar Usuario ---\n");
    printf("--- Digite o numero da matricula do usuario deseja buscar: ---\n");
    scanf("%d", &codigoBusca);

    for(int i = 0; i < quantidade; i++){
        if(lista[i].matricula == codigoBusca){
            printf("Usuario encontrado!\n");
            printf("Nome: %s\n", lista[i].nome);
            printf("Curso: %s\n", lista[i].curso);
            encontrou = 1;
            break;
        }
    }
    if(!encontrou){
        printf("\nO usuario com a matricula %d nao foi encontrado no sistema", codigoBusca);
    }
}

void imprimirUsuarios(Usuario lista[], int quantidade){
    printf("\n--- Lista de Usuarios (%d cadastrados) ---\n", quantidade);
    if(quantidade ==0){
        printf("Nao tem usuarios cadastrados no sistema. \n");
    }
    for (int i = 0; i < quantidade; i++){
        printf("Matricula: %d | Nome: %s | Curso: %s\n", lista[i].matricula, lista[i].nome, lista[i].curso);
    }
    printf("------------------------------------------");
    
}