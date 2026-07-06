#include <stdio.h>
#include <stdlib.h>
// Desafio Super Trunfo - Países
// Variaveis globais
int opcaoMenu;
int submenuCadastro;
int submenuExibicao;
// Procedimentos
// Área para definição das variáveis para armazenar as propriedades das cidades
    // Definicao das variaveis do tipo struct
     //Struct do estado
      typedef struct 
      {
       int codCidade;
       char nomeCidade[30];
       int populacao;
       float area;
       float pib;
       int pontosTur;
      } cidade;

    //Struct do estado
    
     typedef struct 
      {
       char codEstado; 
       char nomeEstado[30];
       cidade cidades[4];
      } estado;

  // Definicao do vetor de estados do tipo estado (Struct)
  estado estados[8];

// Procedimento para cadstro do estado
   void cadastroEstado()
    {
     for (int i = 0; i <= 7; i++)
     {
      estados[i].codEstado = 'A' + i;
      printf("Informe o nome do Estado %c: ", estados[i].codEstado);
      fgets(estados[i].nomeEstado, 30, stdin);
     }
    }
// Procedimento para exibição de estado
   void exibirEstado()
    {
     printf("Estados Cadastrados:\n\n");
     for (int i = 0; i <= 7; i++)
     {
      printf("Estado %c: ", estados[i].codEstado);
     }
    }

// Procedimento para cadastro da cidade

// Procedimento para exibição dos dados da cidade

// Procedimento para comparacao de cidades

// Procedimento para exibir menu e ler opcao
   void menuPrincipal() 
    {
     char entradaMenu[4]; 
     do
     {
      printf("\n-----Super Trunfo Cidades-----\n\n");
      printf("Informe a opcao desejada:\n\n");
      printf("1 - Cadastrar\n");
      printf("2 - Exibir:\n");
      printf("3 - Jogar\n");
      printf("4 - Sair\n");
      fgets(entradaMenu, sizeof(entradaMenu), stdin); //armazenamento da opção do menu
      opcaoMenu = atoi(entradaMenu); //opcao do menu recebe a conversão da opção 
      switch (opcaoMenu)
      {
       case 1:
       {
          //Procedimento para cadastrar as cartas
          char eSubmenuCadastro[4]; 
          do
          {
            //Submenu de cadastro
            printf("Informe a opcao desejada:\n\n");
            printf("1 - Cadastrar Estado\n");
            printf("2 - Cadastrar Cidade:\n");
            printf("3 - Voltar\n");
            fgets(eSubmenuCadastro, sizeof(eSubmenuCadastro), stdin); //armazenamento da opção do menu
            submenuCadastro = atoi(eSubmenuCadastro); //opcao do menu recebe a conversão da opção 
            switch (submenuCadastro)
            {
            case 1:

                cadastroEstado(); //cadastro de estado
               break;
            case 2:
                //cadastro de cidade
               break;
            case 3:
               break;
               //retorna ao menu anterior
            default:
            printf("Informe uma opcao valida\n");
               break;
            }
          } while (submenuCadastro!=3);
          break;
      }
      case 2:
       {
          //Procedimento para exibir as cartas
          //Submenu de exibição
            char eSubmenuExibicao[4]; 
          do
          {
            //Submenu de exibição
            printf("Informe a opcao desejada:\n\n");
            printf("1 - Exibir Estados\n");
            printf("2 - Exibir Cidades:\n");
            printf("3 - Voltar\n");
            fgets(eSubmenuExibicao, sizeof(eSubmenuExibicao), stdin); //armazenamento da opção do menu
            submenuExibicao = atoi(eSubmenuExibicao); //opcao do menu recebe a conversão da opção 
            switch (submenuExibicao)
            {
            case 1:
                exibirEstado(); //exibição de estados
               break;
            case 2:
                //exibição de cidades
               break;
            case 3:
               break;
               //retorna ao menu anterior
            default:
            printf("Informe uma opcao valida\n");
               break;
            }
          } while (submenuExibicao!=3);
          break;
       }
       case 3:
       {
          //Procedimento para exibir as cartas
          //Procedimento para comparar as cartas
          break; 
       } 
       case 4:
       {
          //Encerra o menu e o programa
          break;
       }
        default:
       {
        printf("Informe uma opcao valida\n");
          break;
       }
      };
     } while (opcaoMenu!=4);
   }
      
int main() {
  
  // Inicio do Aplicativo
  menuPrincipal();
return 0;
} 
