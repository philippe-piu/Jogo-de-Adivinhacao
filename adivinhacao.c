#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Jogo de Adivinha��o
int main()
{
	int numerosecreto, chuteusuario, acertou, maior, tentativas, numerograndesecreto, segundos;
	double pontos;
	//gerando n�mero secreto diferentes por numero de segundos
	segundos = time(0);
	srand(segundos);
	//gerando um n�mero secreto randomico
	numerograndesecreto = rand();
	numerosecreto = numerograndesecreto % 100;
	chuteusuario = 0;
	acertou = 0;
	maior = 0;
	tentativas = 1;
	pontos = 1000;

	//Imprime o cabe�alho do nosso jogo seguindo as aulas da Alura;
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");
	printf("\n***********************************************************************************");


	//Loop de repeti��o
	while(1)
	{
		printf("\n*****************************************************************************\n");
		printf("*Tentativa %d  *\n", tentativas);
		printf("*Qual e o seu chute para descobrir o numero secreto escondido pela maquina? *");
		printf("\n*****************************************************************************\n");
		scanf("%d", &chuteusuario);

		//Condi��o para o usu�rio n�o pode colocar n�meros negaivos
		if(chuteusuario < 0)
		{
			printf("\n*********************************************************\n");
			printf("*Caro usuario voce nao pode informar numeros negativos !*\n");
			printf("*********************************************************\n");
			//Continue para execu��o desse bloco de c�digo e e faz voltar a funcionar e vai para proxima intera��o do loop
			continue;
		}

		//Mostra o valor informado pelo o usu�rio
		printf("\n******************************************\n");
		printf("*Numero informado pelo usuario e %d      *\n", chuteusuario);
		printf("******************************************\n");


		//Condi��es para disparar mensagem de acerto ou de erro
		acertou = (numerosecreto == chuteusuario);
		maior = (chuteusuario > numerosecreto);
		if(acertou)
		{
			printf("\n*********************************************\n");
			printf("*Parabens voce acertou o numero secreto e %d*\n", numerosecreto);
			printf("*********************************************\n");
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

		//Conta o numero de tentativas do usu�rio
		tentativas ++;
		//Calculo dos pontos do jogo
		//variaveis do tipo inteira (chuteusuario - numerosecreto) e 2.0 double   
		//double pontosperdidos = abs(chuteusuario - numerosecreto) / (double)2; seu eu tivesse colocado isso dava certo tamb�m.                
		//abs passa o n�mero para absoluto  de negativo para positivo
		double pontosperdidos = abs(chuteusuario - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}

	printf("\n******************************************\n");
	printf("*           Fim de Jogo !                *\n");
	printf("*****  Voce acertou em %d tentativas  *****\n", tentativas);
	printf("*Total de pontos feitos %.1lf            *\n", pontos);
	printf("******************************************\n");


	return(0);
}
