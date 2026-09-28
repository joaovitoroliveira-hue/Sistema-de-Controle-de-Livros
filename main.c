#include <stdio.h>

int main() {
    int opcao = 0;

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
                
                break;
            case 2:
                
                break;
            case 3:
                
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