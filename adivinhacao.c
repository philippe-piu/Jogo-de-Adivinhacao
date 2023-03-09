#include<stdio.h>

int main(){
	//Número secreto definido para a máquina
	int numerosecreto = 42;
	int chuteusuario = 0;
	int acertou = 0;
	//Imprime o cabeçalho do nosso jogo seguindo as aulas da Alura;
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");

	printf("******************************************\n");

	printf("\n*****************************************************************************\n");
	printf("*Qual e o seu chute para descobrir o numero secreto escondido pela maquina? *");
	printf("\n*****************************************************************************\n");
	scanf("%d", &chuteusuario);
	printf("\n******************************************\n");
	printf("*Numero informado pelo usuario e %d      *\n",chuteusuario);
	printf("******************************************\n");

	//Condições para disparar mensagem de acerto ou de erro
	acertou = (numerosecreto == chuteusuario);
	if(acertou){
		printf("\n*********************************************\n");
		printf("*Parabens voce acertou o numero secreto e %d*\n",numerosecreto);
		printf("*********************************************\n");
	}else{
		if(chuteusuario > numerosecreto){
			printf("\n******************************************\n");
			printf("*Seu chute foi maior que o numero secreto*\n");
			printf("******************************************\n");

		}else if(chuteusuario < numerosecreto){
			printf("\n******************************************\n");
			printf("*Seu chute foi menor que o numero secreto*\n");
			printf("******************************************\n");
		}

	}

	return(0);
}
