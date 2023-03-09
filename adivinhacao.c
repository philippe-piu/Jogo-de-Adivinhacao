#include<stdio.h>

int main()
{
	//Número secreto definido para a máquina
	int numerosecreto = 42;
	int chuteusuario = 0;
	int acertou = 0;
	int maior = 0;
	int i = 0;
	int numerotentativas = 0;
	//Imprime o cabeçalho do nosso jogo seguindo as aulas da Alura;
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");
	printf("\n***********************************************************************************");
	printf("\n*Quantas vezes voce gostaria de tentar acertar o numero secreto da nossa maquina ?*\n");
	printf("***********************************************************************************\n");
	scanf("%d", &numerotentativas);
	printf("\n**************************************************");
	printf("\n*Seu numero de chances para jogar sao %d vezes *", numerotentativas);
	printf("\n**************************************************\n");

	//Loop de repetição
	for(i = 0; i < numerotentativas; i++)
	{
		printf("\n*****************************************************************************\n");
		printf("*Tentativa %d de %d *\n", i, numerotentativas);
		printf("*Qual e o seu chute para descobrir o numero secreto escondido pela maquina? *");
		printf("\n*****************************************************************************\n");
		scanf("%d", &chuteusuario);
		printf("******************************************\n");
		printf("*Numero informado pelo usuario e %d      *\n", chuteusuario);
		printf("******************************************\n");


		//Condições para disparar mensagem de acerto ou de erro
		acertou = (numerosecreto == chuteusuario);
		maior = (chuteusuario > numerosecreto);
		if(acertou)
		{
			printf("\n*********************************************\n");
			printf("*Parabens voce acertou o numero secreto e %d*\n", numerosecreto);
			printf("*********************************************\n");
			//Parando o Loop
			break;
		}
		else if(maior)
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



	return(0);
}
