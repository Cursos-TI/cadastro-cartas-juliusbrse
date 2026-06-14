#include <stdio.h>
// Desafio Super Trunfo - Países
// Variaveis globais
int opcaoMenu;
// Procedimentos
// Procedimento para entrada de carta

// Procedimento para exibição dos dados da cidade

// Procedimento para comparacao de cidades

// Procedimento para exibir menu e ler opcao
   void menuPrincipal() 
    {
     do
     {
      printf("-----Super Trunfo Cidades-----\n");
      printf("Informe a opcao desejada:\n");
      printf("1 - Cadastrar\n");
      printf("2 - Exibir:\n");
      printf("3 - Jogar\n");
      printf("4 - Sair\n");
      scanf("%d,&opcaomenu");
      switch (opcaoMenu)
      {
       case 1:
          //Procedimento para cadastrar as cartas
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
        printf("Informe uma opcao valida");
          break;
      };
     } while (opcaoMenu!=4);
   }
      
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Definicao das variaveis do tipo struct
  //Struct do pais
  typedef struct 
  {
    int codCidade;
    char nomeCidade[15];
    int populacao;
    float area;
    float pib;
    int pontosTur;
  } cidade;
 //Struct do estado
   typedef struct 
  {
    char codEstado; 
    char nomeEstado[15];
    cidade cidades[4];
  } estado;
return 0;
} 
