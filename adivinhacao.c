#include<stdio.h>

int main()
{
    //Número secreto definido para a máquina
    int numerosecreto = 42;
    int chuteusuario = 0;
    int acertou = 0;
    int maior = 0;
    int i = 0;
    //Imprime o cabeçalho do nosso jogo seguindo as aulas da Alura;
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");
	
	//Loop de repetição
    for(i = 0; i < 3; i++)
	{
	    printf("\n*****************************************************************************\n");
        printf("*Qual e o seu chute para descobrir o numero secreto escondido pela maquina? *");
        printf("\n*Seu numero de chances para jogar sao 3 vezes                               *");
        printf("\n*****************************************************************************\n");
        scanf("%d", &chuteusuario);
        printf("\n******************************************\n");
        printf("*Numero informado pelo usuario e %d      *\n",chuteusuario);
        printf("******************************************\n");


        //Condições para disparar mensagem de acerto ou de erro
        acertou = (numerosecreto == chuteusuario);
        if(acertou)
        {
            printf("\n*********************************************\n");
            printf("*Parabens voce acertou o numero secreto e %d*\n",numerosecreto);
            printf("*********************************************\n");
            //Parando o Loop 
            break;
        }
        else
        {
            maior = (chuteusuario > numerosecreto);
            if(maior)
            {
                printf("\n**********************************************************\n");
                printf("*Seu chute foi maior que o numero secreto tente novamente*\n");
                printf("**********************************************************\n");

            }
            else
            {
                printf("\n**********************************************************\n");
                printf("*Seu chute foi menor que o numero secreto tente novamente*\n");
                printf("**********************************************************\n");
            }

        }
    }



    return(0);
}
