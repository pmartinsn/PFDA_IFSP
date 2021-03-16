//Pamela M Nunes
//IFSP-TADS
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//1) Desenvolva um programa que crie dois vetores A e B com 10 elementos. A partir deles crie um vetor C, que
//receberá os elementos de A e B intercalados.
void	doisVetores(void)
{
	//char a = 'a';
	//char b = 'b';
	int	vetA[30]; //= {a,a,a,a,a,a,a,a,a,a};
	int	vetB[30]; //= {b,b,b,b,b,b,b,b,b,b};
	int	vetC[60];
	int		i = 0;// index = contador é a posição no vetor vetA[0] = "a" , vetA[1] = "b"
	while (i < 10)
	{
		printf("Insira um caractere para o Vetor A\n");
		scanf(" %i", &vetA[i]);
		printf("Insira um caractere para o vetor B\n");
		scanf(" %i", &vetB[i]);
		i++;
	}
	i = 0;
	int c = 0;
	int l = 0;
	for (int j = 0; j < 20; j++)
	{
		vetC[l] = vetA[i];// passando valor de A pra C
		l++;
		vetC[l] = vetB[c];//Passando valor de B pra C
		l++;
		i++;
		c++;
	}
	printf("Vetor C será impresso agora:\n");
	for (int y = 0; y < 20; y++)
	{
		printf("%i,", vetC[y]);
	}
	printf("\n");
}

//2) Elaborar um programa que leia 10 temperaturas em graus Farenheit, armazenando-as em um vetor. Em
//seguida, transforme-as em graus Celsius e armazene os resultados em outro vetor. No final os dois vetores devem
//ser apresentados lado a lado. A fórmula de conversão é C = 5/9 (F – 32).
void	farenheitToCeusius(void)
{
	int	farenheit[30];
	int	farenheitaux[30];
	int	ceusius[30];
	int		i = 0;
	while (i < 10)
	{
		printf("Qual a temperatura em Farenheit para armazenar?\n");
		scanf(" %i", &farenheit[i]);
		i++;
	}
	//i = 0;
	for (int j = 0; j < 10; j++)
	{
		 farenheitaux[j] = farenheit[j];
		 farenheit[j] = farenheit[j]-32; 
		 farenheit[j] = farenheit[j]/1.8; 
		 ceusius[j] = farenheit[j];
		 
	}
	printf("Temperatura em Farenheit:");
	for (int j = 0; j < 10; j++)
	{
		printf("%i,", farenheitaux[j]);
	}
	printf("\n");
	printf("  Temperatura em Ceusius:");
	for (int j = 0; j < 10; j++)
	{
		printf("%i,", ceusius[j]);
	}
	printf("\n");
}

//3) Crie um vetor para receber 10 notas de um aluno. Em seguida, devem ser exibidas as notas inseridas. Além
//disso, deve ser calculada a média aritmética e exibido no final, o resultado:
//Média >= 8 ➔ Plenamente Satisfatório (PS)
//8 > Média >=6 ➔ Satisfatório (S)
//6 > Média >= 4 ➔Regular (R)
//Média < 4 ➔ Insatisfatório (I)
void	notasAlunos(void)
{
	int	notas[30];
	int	notasaux = 0;
	//int	ceusius[30];
	int		i = 0;
	int countAlunos = 1;
	while (i < 10)
	{
		printf("Qual a nota do %i aluno para armazenar?\n", countAlunos);
		scanf(" %i", &notas[i]);
		notasaux = notasaux + notas[i];
		countAlunos++;
		i++;
	}
	notasaux = notasaux /10;
	printf("Notas inseridas:");
	for (int j = 0; j < 10; j++)
	{
		printf("%i,", notas[j]);
	}
	printf("\n");
	printf("Resultado da Turma:%i\n", notasaux);
	if (notasaux >= 8)
		printf("Média >= 8 ➔ Plenamente Satisfatório (PS)\n");
	else if (notasaux >= 6)
		printf("8 > Média >=6 ➔ Satisfatório (S)\n");
	else if (notasaux >= 4)
		printf("6 > Média >= 4 ➔Regular (R)\n");
	else
		printf("Média < 4 ➔ Insatisfatório (I)\n");

}
//4) Crie uma matriz unidimensional A e uma B com 12 elementos cada. A deve aceitar apenas valores que sejam
//divisíveis por 3 ou 7, enquanto B deve receber valores de A que não sejam múltiplos de 5 (as validações devem
//ser feitas pelo programa e não pelo usuário). Crie uma matriz C com os elementos de A e B. No final devem ser
//exibidas as três matrizes.
void	verificaVetores(void)
{
	int	aux[30];
	int	vetA[30];
	int	vetB[30];
	int	vetC[60];
	int		i = 0;
	int		a = 0;//index dos vetor a
	int		b = 0;//index dos vetor a
	while (i < 12)
	{
		printf("Insira um valor a ser inserido em um dos Vetores\n");
		scanf(" %i", &aux[i]);	
		i++;
	}
	aux[i] = '\0';
	i = 0;
	while (aux[i] != '\0')
	{
		if ((aux[i] % 3 == 0) || (aux[i] % 7 == 0))
		{
			vetA[a] = aux[i];
			if (vetA[a]%5 != 0)
			{
				vetB[b]= vetA[a];
				b++;
			}
			a++;
		}
		i++;
	}
	vetA[a] = '\0';
	vetB[b] = '\0';
	i = 0;
	printf("Matrix A:\n");
	while (vetA[i] != '\0')
	{
		printf("%i,", vetA[i]);
		vetC[i] = vetA[i];
		i++;
	}
	b = 0;
	printf("\n");
	printf("Matrix B:\n");
	while (vetB[b] != '\0')
	{
		printf("%i,", vetB[b]);
		vetC[i] = vetB[b];
		i++;
		b++;
	}
	vetC[i] = '\0';
	printf("\n");
	printf("Matrix C:\n");
	i = 0;
	while (vetC[i] != '\0')
	{
		printf("%i,", vetC[i]);
		i++;
	}

	printf("\n");
}

//5) As Faculdades de Tecnologia Tabajara, desejam publicar o número de acertos de cada aluno em uma prova em
//forma de testes. A prova consta de 10 questões, cada uma com cinco alternativas identificadas por A, B, C, D e E.
//No final, devem ser mostrados os números dos alunos com as suas respectivas notas – cada acerto vale 1 ponto.
//Dados de entrada necessários:
//✓ o número de alunos da turma;
//✓ o cartão de gabarito da prova;
//✓ o cartão de respostas de cada aluno, contendo o seu número e suas respostas.
void	corection(void)
{
	int	nbrAlunos = 0;
	int	indexalumni = 1;
	char	gabarito[30];
	int	g = 0;// index gabarito
	char	respostas[30];
	int	r = 0;// index respostas
	int	alunos[30];
	int pontos = 0;
	printf("Quantos alunos existem na sala?_\n");
	scanf(" %i", &nbrAlunos);
	printf("Insira agora o gabarito da Prova\n");
	int i = 0;
	while(i < 10)//pegar o gabarito da prova
	{
		printf("Questão %i\n", indexalumni);
		scanf(" %c", &gabarito[g]);
		g++;
		indexalumni++;
		i++;	
	}
	indexalumni = 1;
	for (int i= 0; i < nbrAlunos; i++)//coletar os acertos dos alunos
	{
		printf("Insira as dados do aluno %i\n", i + 1);
		while (r < 10)
		{
			printf("Resposta nº:%i\n", r + 1);
			scanf(" %c", &respostas[r]);
			if (respostas[r] == gabarito[r])//confere resposta e atribui nota
				pontos++;
			r++;
		}
		alunos[i] = pontos;
		pontos = 0;
		r = 0;
	}
	for (int i= 0; i < nbrAlunos; i++)//imprime as notas dos alunos
	{
		printf("Aluno %i, Nota:%i\n", i + 1 , alunos[i]);
	}
}
	
int main()
{ 
	//1
	doisVetores();
	//2
	farenheitToCeusius();
	//3
	notasAlunos();
	//4
	verificaVetores();
	//5
	corection();
	return(0);
}