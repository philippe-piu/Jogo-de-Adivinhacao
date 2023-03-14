#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Jogo de Adivinhação
int main()
{
	int i, numerosecreto, chuteusuario, acertou, maior, tentativas, numerograndesecreto,
		segundos, numtentativas, niveljogo;
	double pontos;
	//gerando número secreto diferentes por numero de segundos
	segundos = time(0);
	srand(segundos);
	//gerando um número secreto randomico
	numerograndesecreto = rand();
	numerosecreto = numerograndesecreto % 100;
	chuteusuario = 0;
	acertou = 0;
	maior = 0;
	numtentativas = 0;
	tentativas = 1;
	pontos = 1000;
	niveljogo = 0;

	//Imprime o cabeçalho do nosso jogo seguindo as aulas da Alura;
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");
	printf("\n***********************************************\n");

	//Loop de repetição para o usuário poder escolher novamente um nivel caso tenha informado uma opção não existente no jogo
	do
	{
		printf("*Qual o nivel de dificuldade voce quer jogar ?*\n");
		printf("*     Digite (1)Facil (2)Medio (3)Dificil     *\n");
		printf("***********************************************\n");
		scanf("%d", &niveljogo);
		system("cls");

		//Escolha de dificuldade do jogo quanto maior a dificuldade menos tentativas o usuario tera
		switch(niveljogo)
		{
		case 1:
			numtentativas = 20;
			printf("\n*****************************\n");
			printf("*Nivel escolhido foi %d Facil*\n", niveljogo);
			printf("*Numero de tentativas %d    *\n", numtentativas);
			printf("*****************************\n");
			break;

		case 2:
			numtentativas = 15;
			printf("\n*****************************\n");
			printf("*Nivel escolhido foi %d Medio*\n", niveljogo);
			printf("*Numero de tentativas %d    *\n", numtentativas);
			printf("*****************************\n");
			break;

		case 3:
			numtentativas = 6;
			printf("\n*******************************\n");
			printf("*Nivel escolhido foi %d Dificil*\n", niveljogo);
			printf("*Numero de tentativas %d       *\n", numtentativas);
			printf("*******************************\n");
			break;

		default:
			printf("**************************************************************\n");
			printf("*Tente novamente suas escolhas de nivel e de somente de 1 2 3*\n");
			printf("**************************************************************\n");
			break;

		}

	}
	while((niveljogo != 1) && (niveljogo != 2) && (niveljogo != 3));


	//Loop de repetição
	for(i = 1; i <= numtentativas; i++)
	{
		printf("\n*****************************************************************************\n");
		printf("*Tentativa %d  *\n", tentativas);
		printf("*Qual e o seu chute para descobrir o numero secreto escondido pela maquina? *");
		printf("\n*****************************************************************************\n");
		scanf("%d", &chuteusuario);
		system("cls");
		//Condição para o usuário não pode colocar números negaivos
		if(chuteusuario < 0)
		{
			printf("\n*********************************************************\n");
			printf("*Caro usuario voce nao pode informar numeros negativos !*\n");
			printf("*********************************************************\n");
			//Continue para execução desse bloco de código e e faz voltar a funcionar e vai para proxima interação do loop
			continue;
		}

		//Mostra o valor informado pelo o usuário
		printf("\n******************************************\n");
		printf("*Numero informado pelo usuario e %d      *\n", chuteusuario);
		printf("******************************************\n");


		//Condições para disparar mensagem de acerto ou de erro
		acertou = (numerosecreto == chuteusuario);
		maior = (chuteusuario > numerosecreto);
		if(acertou)
		{
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

		//Conta o numero de tentativas do usuário
		tentativas ++;
		//Calculo dos pontos do jogo
		//variaveis do tipo inteira (chuteusuario - numerosecreto) e 2.0 double
		//double pontosperdidos = abs(chuteusuario - numerosecreto) / (double)2; seu eu tivesse colocado isso dava certo também.
		//abs passa o número para absoluto  de negativo para positivo
		double pontosperdidos = abs(chuteusuario - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}
	printf("\n******************************************\n");
	printf("*           Fim de Jogo !                *\n");
	printf("******************************************\n");
	printf("\n");
	
	if(acertou)
	{
		printf("*********************************************\n");
		printf("*Parabens voce acertou o numero secreto e %d*\n", numerosecreto);
		printf("*********************************************\n");
		printf("\n******************************************\n");
		printf("*****  Voce acertou em %d tentativas  ****\n", tentativas);
		printf("*Total de pontos feitos %.1lf            *\n", pontos);
		printf("******************************************\n");
	}
	else
	{
		printf("******************************************\n");
		printf("*      Voce errou tente novamente        *\n");
		printf("******************************************\n");
	}


	return(0);
}
