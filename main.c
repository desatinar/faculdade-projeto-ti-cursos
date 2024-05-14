#include <stdio.h>
#include <locale.h>

void cabecalho(){
  printf("\n");
  printf("\x1b[31m");
  printf("+---------------------------------------------+\n");
  printf("|                  TI Cursos                  |\n");
  printf("+---------------------------------------------+");
  printf("\n\x1b[0m"); // Reseta a cor
}

void menu(){
  printf("\x1b[36m");
  printf("+=============================================+\n");
  printf("|  1 - Cadastrar Aluno                        |\n");
  printf("|  2 - Editar Aluno                           |\n");
  printf("|  3 - Remover Aluno                          |\n");
  printf("|  4 - Listagem Geral                         |\n");
  printf("|  5 - Listagem por Curso                     |\n");
  printf("|  6 - Listagem por Sexo                      |\n");
  printf("|  0 - Sair                                   |\n");
  printf("+=============================================+\n");
  printf("\n\x1b[0m"); // Reseta a cor
  printf("Opção: ");
}

void limparBuffer(){
  int caracter;
  if(getchar() != '\n'){
    while((caracter = getchar()) != '\n' && caracter != EOF);
    }
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  int opcMenu;

  do {
    cabecalho();
    menu();
    //retorna 1 se for um número e 0 se não for
    int input = scanf("%d", &opcMenu);

    if(input != 1){
      printf("Insira um número entre 0 e 6.\n");
      limparBuffer();
      opcMenu = 9;
      continue;
    }

    limparBuffer();

    switch(opcMenu){
      case 1:
        printf("\n1 - Cadastrar Aluno\n");
        break;
      case 2:
        printf("\n2 - Editar Aluno\n");
        break;
      case 3:
        printf("\n3 - Remover Aluno\n");
        break;
      case 4:
        printf("\n4 - Listagem Geral\n");
        break;
      case 5:
        printf("\n5 - Listagem por Curso\n");
        break;
      case 6:
        printf("\n6 - Listagem por Sexo\n");
        break;
      case 0:
        printf("\n0 - Sair\n");
        break;
      default:
        printf("Opção inválida\n");
    }

  } while(opcMenu != 0);

  return 0;
}