#include <stdio.h>

int main()
{
    // o comando printf(" ") imprime na tela tudo que estiver entre ()
    printf("\n****************************************** \n");
    printf("* Bem vindo ao nosso jogo de adivinhação * \n");
    printf("****************************************** \n\n");

    int numeroSecreto = 42;

    int chute;
    char nome[50];

    printf("Qual o seu nome? ");
    scanf("%s", nome);
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    printf("%s, seu chute foi %d!\n\n", nome, chute);
    
}