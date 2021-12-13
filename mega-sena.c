/*
Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena. 

O sorteio consiste na extra��o de 6 n�meros diferentes, no universo de 01 a 60. 

A seguir, ler um vetor B para a aposta  de tamanho 10. Esse vetor dever� ter no m�nimo 6 valores e no m�ximo 10 valores. 

Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos), a quina (5 acertos) ou a quadra (4 acertos).

Nesse exerc�cio o usu�rio digita todos os valores, o gabarito e a aposta.

N�o permitir que o usu�rio digite n�meros repitidos para o gabarito ou aposta.

28 DE MAIO DE 2021
*/

#include <stdio.h>

int main(){
	
	
	int gabarito[6], cartela[10], i, num, c, pontos = 0, a;
	
	do
	{
		printf("Insira os numeros do gabarito: ");
		
		for(i = 0 ; i < 6 ; i++)
		{
			printf("\n[NUMERO %i]: ", i+1);
			scanf("%i", &gabarito[i]);	
			if(gabarito[i] < 1 || gabarito[i] > 60)
			{
				printf("\n\n[ERRO] Insira um numero entre 1 e 60.\n");
				i -= 1;
			}
		}
		
		if(gabarito[0]==gabarito[1] || gabarito[0]==gabarito[2] || gabarito[0]==gabarito[3] || gabarito[0]==gabarito[4] || gabarito[0]==gabarito[5] || gabarito[2]==gabarito[1] || gabarito[3]==gabarito[1] || gabarito[4]==gabarito[1] || gabarito[5]==gabarito[1] || gabarito[3]==gabarito[2] || gabarito[4]==gabarito[2] || gabarito[5]==gabarito[2] || gabarito[4]==gabarito[3] || gabarito[5]==gabarito[3] || gabarito[5]==gabarito[4])
		{
			printf("[ERRO] Numeros foram repitidos os n�meros.Tente novamente.\n====================================\n");
			i += 1;
		}
		
	} while(i != 6);
	do
	{
		do
		{
			printf("\n\nInsira a quantidade de n�meros da cartela (6 - 10): ");
			scanf("%i", &num);
		} while(num < 6 || num > 10);
		
		printf("\n\nInsira os n�meros da cartela: ");
		
		for(i = 0 ; i < num ; i++)
		{
			printf("\n[NUMERO %i]: ", i+1);
			scanf("%i", &cartela[i]);	
			if(cartela[i] < 1 || cartela[i] > 60)
			{
				printf("\n\n[ERRO] Insira um n�mero entre 1 e 60.\n");
				i -= 1;
			}
		}
		
		if(cartela[0]==cartela[1] || cartela[0]==cartela[2] || cartela[0]==cartela[3] || cartela[0]==cartela[4] || cartela[0]==cartela[5] || cartela[2]==cartela[1] || cartela[3]==cartela[1] || cartela[4]==cartela[1] || cartela[5]==cartela[1] || cartela[3]==cartela[2] || cartela[4]==cartela[2] || cartela[5]==cartela[2] || cartela[4]==cartela[3] || cartela[5]==cartela[3] || cartela[5]==cartela[4])
		{
			printf("[ERRO] N�o repita os n�meros. Entre novamente.\n====================================\n");
			i += 1;
		}	
	} while(i != num);
	
	printf("\n\n========ANALISE DOS DADOS========\n\n");
	
	for(i = 0 ; i < num ; i++)
	{
		for(a = 0 ; a < 6 ; a++)
		{
			if(cartela[i] == gabarito[a])
			{
				pontos += 1;
			}
		}
	}
	
	if(pontos < 4)
	{
		printf("Desculpe, mas n�o houve acertos suficientes. \nN�o se esque�a de comprar mais Mega Sena, pois quanto mais apostar, mais chances tem de ganhar!!");
	}
	
	else if(pontos == 6)
	{
		printf("Parab�ns! Voc� fez a SENA. Retire seu pr�mio na casa lot�rica mais pr�xima de voc�!");
	}
	
	else if(pontos == 5)
	{	
		printf("Parab�ns! Voc� fez a QUINA. Retire seu pr�mio na casa lot�rica mais pr�xima de voc�!");
	}
	
	else if(pontos == 4)
	
	{
		printf("Parab�ns! Voc� fez a QUADRA. Retire seu pr�mio na casa lot�rica mais pr�xima de voc�!");
		
	}
		
	return 0;
}
