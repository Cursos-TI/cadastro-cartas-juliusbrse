#include <stdio.h>
// Desafio Super Trunfo - Países
// Variaveis globais
int opcaoMenu;
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

// Procedimento para entrada de carta
   void cadastroCartas()
    {
     char letra = 'A';
     for (int i = 0; i <= 7; i++)
     {
      estados[i].codEstado = letra;
      printf("Informe o nome do Estado %c: ", estados[i].codEstado);
      fgets(estados[i].nomeEstado, 30, stdin);
      letra++;
     }
    }
// Procedimento para exibição dos dados da cidade

// Procedimento para comparacao de cidades

// Procedimento para exibir menu e ler opcao
   void menuPrincipal() 
    {
     do
     {
      printf("\n-----Super Trunfo Cidades-----\n\n");
      printf("Informe a opcao desejada:\n\n");
      printf("1 - Cadastrar\n");
      printf("2 - Exibir:\n");
      printf("3 - Jogar\n");
      printf("4 - Sair\n");
      scanf("%d",&opcaoMenu);
      switch (opcaoMenu)
      {
       case 1:
          //Procedimento para cadastrar as cartas
          cadastroCartas();
          break;
       case 2:
          //Procedimento para exibir as cartas
          break;
       case 3:
          //Procedimento para exibir as cartas
          //Procedimento para comparar as cartas
          break;  
       case 4:
          //Encerra o menu e o programa
          break;  
        default:
        printf("Informe uma opcao valida\n");
          break;
      };
     } while (opcaoMenu!=4);
   }
      
int main() {
  
  // Inicio do Aplicativo
  menuPrincipal();
return 0;
} 
