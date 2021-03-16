//Pamela M Nunes
//IFSP-ADS
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//1-Desenvolva um programa que leia vários inteiros positivos e mostre, no final, a soma dos números pares e a
//soma dos números ímpares. O programa para quando entrar um número maior que 1000.

void	paresAndImpares(int n)
{
	int par = 0;
	int impar = 0;
	int i = 0;
	while ((i < n) && (i < 1000))
	{
		if ((i % 2)== 0)
			par = par + i;
		else
			impar = impar + i;
		i++;
	}
	printf("Soma dos números pares = %i\nSoma dos números impares = %i\n", par, impar);
	
}

//2) Elaborar um programa que leia um número n e mostre na tela os n primeiros números primos.
void	primos(int n)
{
	int y = 0;//Número de primos encontrados
	int count = 2;//contador universal
	int aux = 2;//auxiliar que é igual a todos os numero entre count e 2
	int verificador = 0;
	while (y < n)
	{
		while (aux <= count)
		{
			if ((count % aux) == 0)
				verificador++;
			aux++;
		}
		if (verificador == 1)
		{
			printf("Número primo %i é: %i\n", y+1, count);
			verificador = 0;
			y++;
		}
		aux = 2;
		verificador = 0;
		count++;
	}
}

void	sumOnzeRestoCinco(void)
{
	printf("Os seguintes números entre 1000 e 2000 quando divididos por 11 dão resto 5:\n");
	int i = 1000;
	do{
		if ((i % 11) == 5)
			printf("%d, ", i);	
		i++;
	}while(i < 2000);
	printf("\n");
}

//4) Definir a sequência de Fibonacci para os N termos abaixo: 1,1,2,3,5,8,13,...N.
void	fibonacci(int n)
{
	int resposta, count, aux;
	int numeros = 3;
	resposta = 2;
	count = 3;
	aux = 0;
	if (n < 0) 
		resposta = -1;
	else if (n == 0)
		resposta = 0;
	else if (n == 1)
		resposta = 1;
	else if (n == 2) 
		printf("1,1,2");
	else 
		printf("1,1,2");
	while (numeros <= n)
	{
		resposta = count + resposta;
		printf(", %i", resposta);
		aux = count;
		count = resposta;
		resposta = aux;
		numeros++;
	}
	printf("\n");
}

void	redesSociais(int n)
{
	float insta, face, twit, zap, outras, total;
	float pinsta, pface, pzap, poutras, ptwit;
	int opcao, count;
	insta = 0.0;
	face = 0.0;
	twit = 0.0;
	zap = 0.0;
	outras = 0.0;
	total = 0.0;
	pinsta = 0.0;
	pface = 0.0;
	pzap = 0.0;
	ptwit = 0.0;
	//escreva("Quantos alunos existem na sala: ")
	//leia(n)
	total = n;
	for (count = 0; count < n; count++)
	{
		printf("Aluno:%i\nEscolha a rede social que mais usa: \n1-Instagram\n2-twitter\n3-facebook\n4-whatsapp\n5-Outras\n\n", count+1);
		scanf("%i", &opcao);
			switch (opcao){
				case 1:
					insta++;
					break;
				case 2:
					twit++;
					break;
				case 3:    
					face++;
					break;
				case 4:
					zap++;
					break;
				case 5:
					outras++;
					break;
				case 0:
					n = 0;
					break;
				default:
					printf("Escolha errada\n");
					break;
			}
	}
	float total2 = 100 / total;
	pinsta = total2 * insta;
	pface = total2 * face;
	pzap = total2 * zap;
	poutras = total2 * outras;
	ptwit = total2 * twit;
	printf("Rede\t\tNºAlunos\t%%\n");
	printf("=====================================");
	printf("\nInstagram:\t%.2f\t\t%.2f", insta, pinsta);
	printf("\nFacebook: \t%.2f\t\t%.2f", face, pface);
	printf("\nWhatsapp: \t%.2f\t\t%.2f", zap, pzap);
	printf("\nTwitter:  \t%.2f\t\t%.2f", twit, ptwit);
	printf("\nOutras:   \t%.2f\t\t%.2f", outras, poutras);
	printf("\n=====================================");
	printf("\nTotais\t\t\t        100\n");
}

//6) A partir da análise preliminar, proceda a execução do que se pede. Considerando um número n inteiro e
//positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. Construa um
//programa em C que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.
void	numerosPerfeitos(int n)
{
	int	perfeito = 0;
	for(int i = 1; i < n; i++)
	{
		if ((n % i)== 0)
			perfeito = perfeito + i;
	}
	if (perfeito == n)
		printf("o número %i, É um número Perfeito\n", n);
	else
		printf("o número %i, NÃO é um número Perfeito\n", n);
}

int main()
{
	int n = 0;
	printf("LG1A1 - Lógica de Programação 1\nExercício para entrega em 19/01/2021 via Moodle\n");
	printf("(1) Desenvolva um programa que leia vários inteiros positivos e mostre, no final, a soma dos números pares e a soma dos números ímpares. O programa para quando entrar um número maior que 1000\n");
	printf("Qual numero deseja verificar a soma dos pares e impares?\n");
	scanf("%i", &n);
	paresAndImpares(n);

	printf("2) Elaborar um programa que leia um número n e mostre na tela os n primeiros números primos.\n");
	printf("Quantos números primos deseja ver?\n");
	scanf("%i", &n);
	primos(n);

	printf("3) Faça um programa em C que gera números inteiros maiores 999 e menores que 2000 e mostra aqueles que divididos por 11 dão resto 5.\n");
	printf("Não há entrada nesta questão\n");
	sleep(2);
	sumOnzeRestoCinco();
	
	printf("4) Definir a sequência de Fibonacci para os N termos abaixo: 1,1,2,3,5,8,13,...N\n");
	printf("Quantos numeros na sequencia de Finobacci deseja ver(mínimo 3)?\n");
	scanf("%i", &n);
	fibonacci(n);

	printf("5) Desenvolva um algoritmo, usando também escolha/caso, que receba dados para uma pesquisa entre N alunos, para verificar acessos as suas redes sociais:\n");
	printf("Quantos alunos tem a sala de aula?\n");
	scanf("%i", &n);
	redesSociais(n);
	

	printf("(6) A partir da análise preliminar, proceda a execução do que se pede. Considerando um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.\n");
	printf("Entre com um número para verificar se é Perfeito ou não:\n");
	scanf("%i", &n);
	numerosPerfeitos(n);
}