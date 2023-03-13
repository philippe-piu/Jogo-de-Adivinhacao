#include<stdio.h>

//Jogo de Adivinha��o
int main()
{
	//N�mero secreto definido para a m�quina
	int numerosecreto = 42;
	int chuteusuario = 0;
	int acertou = 0;
	int maior = 0;
	int tentativas = 1;
	
	//Imprime o cabe�alho do nosso jogo seguindo as aulas da Alura;
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");
	printf("\n***********************************************************************************");
	

	//Loop de repeti��o
	while(1){
		printf("\n*****************************************************************************\n");
		printf("*Tentativa %d  *\n", tentativas);
		printf("*Qual e o seu chute para descobrir o numero secreto escondido pela maquina? *");
		printf("\n*****************************************************************************\n");
		scanf("%d", &chuteusuario);
		
		//Condi��o para o usu�rio n�o pode colocar n�meros negaivos
		if(chuteusuario < 0){
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
	}
	
	printf("\n********************************\n");
	printf("*Fim do Jogo !                 *\n");
	printf("**Voce acertou em %d tentativas**\n",tentativas);
	printf("********************************\n");


	return(0);
}
