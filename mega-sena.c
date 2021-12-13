/*
Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena. 

O sorteio consiste na extração de 6 números diferentes, no universo de 01 a 60. 

A seguir, ler um vetor B para a aposta  de tamanho 10. Esse vetor deverá ter no mínimo 6 valores e no máximo 10 valores. 

Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos), a quina (5 acertos) ou a quadra (4 acertos).

Nesse exercício o usuário digita todos os valores, o gabarito e a aposta.

Não permitir que o usuário digite números repitidos para o gabarito ou aposta.

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
			printf("[ERRO] Numeros foram repitidos os números.Tente novamente.\n====================================\n");
			i += 1;
		}
		
	} while(i != 6);
	do
	{
		do
		{
			printf("\n\nInsira a quantidade de números da cartela (6 - 10): ");
			scanf("%i", &num);
		} while(num < 6 || num > 10);
		
		printf("\n\nInsira os números da cartela: ");
		
		for(i = 0 ; i < num ; i++)
		{
			printf("\n[NUMERO %i]: ", i+1);
			scanf("%i", &cartela[i]);	
			if(cartela[i] < 1 || cartela[i] > 60)
			{
				printf("\n\n[ERRO] Insira um número entre 1 e 60.\n");
				i -= 1;
			}
		}
		
		if(cartela[0]==cartela[1] || cartela[0]==cartela[2] || cartela[0]==cartela[3] || cartela[0]==cartela[4] || cartela[0]==cartela[5] || cartela[2]==cartela[1] || cartela[3]==cartela[1] || cartela[4]==cartela[1] || cartela[5]==cartela[1] || cartela[3]==cartela[2] || cartela[4]==cartela[2] || cartela[5]==cartela[2] || cartela[4]==cartela[3] || cartela[5]==cartela[3] || cartela[5]==cartela[4])
		{
			printf("[ERRO] Não repita os números. Entre novamente.\n====================================\n");
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
		printf("Desculpe, mas não houve acertos suficientes. \nNão se esqueça de comprar mais Mega Sena, pois quanto mais apostar, mais chances tem de ganhar!!");
	}
	
	else if(pontos == 6)
	{
		printf("Parabéns! Você fez a SENA. Retire seu prêmio na casa lotérica mais próxima de você!");
	}
	
	else if(pontos == 5)
	{	
		printf("Parabéns! Você fez a QUINA. Retire seu prêmio na casa lotérica mais próxima de você!");
	}
	
	else if(pontos == 4)
	
	{
		printf("Parabéns! Você fez a QUADRA. Retire seu prêmio na casa lotérica mais próxima de você!");
		
	}
		
	return 0;
}
