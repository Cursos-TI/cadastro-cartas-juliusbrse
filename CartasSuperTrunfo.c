#include <stdio.h>
#include <stdlib.h>
// Desafio Super Trunfo - Países
// Variaveis globais
int opcaoMenu;
int submenuCadastro;
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

  // Definicao dos vetores de estados e cidades do tipo estado (Struct)
  estado estados[8];
  cidade cidades[4];

// Procedimento para cadastro do estado
   void cadastroEstados()
    {
     for (int i = 0; i <= 7; i++)
     {
      estados[i].codEstado = 'A' + i;
      printf("Informe o nome do Estado %c: ", estados[i].codEstado);
      fgets(estados[i].nomeEstado, 30, stdin);
     }
    }
// Procedimento para cadastro das cidades
   void cadastroCidades()
    {
     char codEstado;
     int codSelec;
     printf("\n Informe o código do estado no qual deseja cadastrar as cidades\n");
     scanf(" %c",&codEstado );
     while (getchar() != '\n');
     codSelec = codEstado - 'A';
     for (int i = 0; i <= 3; i++)
      {
       estados[codSelec].cidades[i].codCidade = i + 1;
       printf("\nInforme o nome da Cidade %d para o estado %s\n", estados[codSelec].cidades[i].codCidade, estados[codSelec].nomeEstado);
       fgets(estados[codSelec].cidades[i].nomeCidade, 30, stdin);
       printf("\nInforme a população da Cidade %d para o estado %s\n",estados[codSelec].cidades[i].codCidade, estados[codSelec].nomeEstado);
       scanf("%d", &estados[codSelec].cidades[i].populacao);
       while (getchar() != '\n');
      }
     }
// Procedimento para exibição de cartas
   void exibirCartas()
    {
     printf("Cartas Cadastradas:\n\n");
     for (int i = 0; i <= 7; i++)
     {
      printf("\nCodigo do estado: %c - Nome do estado: %s\n", estados[i].codEstado, estados[i].nomeEstado);
      for (int j = 0; j<= 3; j++)
      {
         printf("\nCodigo da cidade: %d - Nome da cidade: %s\n", estados[i].cidades[j].codCidade, estados[i].cidades[j].nomeCidade);
         printf("População da cidade: %s\n\n", estados[i].cidades[j].populacao);
      }
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
      printf("\nInforme a opcao desejada:\n\n");
      printf("1 - Cadastrar\n");
      printf("2 - Exibir:\n");
      printf("3 - Jogar\n");
      printf("4 - Sair\n");
      fgets(entradaMenu, 4, stdin); //armazenamento da opção do menu
      opcaoMenu = atoi(entradaMenu); //converte a entrada para int, e a atribui ao menu 
      switch (opcaoMenu)
      {
       case 1:
       {
          //Procedimento para cadastrar as cartas
          char eSubmenuCadastro[4]; 
          do
          {
            //Submenu de cadastro
            printf("\nInforme a opcao desejada:\n\n");
            printf("1 - Cadastrar Estado\n");
            printf("2 - Cadastrar Cidade:\n");
            printf("3 - Voltar\n");
            fgets(eSubmenuCadastro, sizeof(eSubmenuCadastro), stdin); //armazenamento da opção do menu
            submenuCadastro = atoi(eSubmenuCadastro); //opcao do menu recebe a conversão da opção 
            switch (submenuCadastro)
            {
            case 1:
                //cadastro de estado
                cadastroEstados();
               break;
            case 2:
                // exibição das cartas
                exibirCartas();
                //cadastro de cidade
                cadastroCidades();
               break;
            case 3:
               break;
               //retorna ao menu anterior
            default:
            printf("\nInforme uma opcao valida\n");
               break;
            }
          } while (submenuCadastro!=3);
          break;
      }
      case 2:
       {
         //Procedimento para exibir as cartas
         exibirCartas(); 
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
