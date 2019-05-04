#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "header-file.h"

#include <windows.h>
#include <conio.h>

NUMEROS n;

void introducao()
{
	printf("Ol\240, Seja muito bem vindo!\nEsse \202 o Lord of Mathematics 6\n");
	printf("\n(Qualquer duvida digite: ?)\n");
}

void primeiroValor()
{
	printf("\n-----------------------------------");
	printf("\n\nDigite o primeiro valor: ");
	scanf("%f",& n.num1);
}

void operacao()
{
	int flag = 0;

	printf("\nDigite a opera\207\706o: ");

	while(flag == 0)
	{

		scanf("%c",& n.letra);

		switch (n.letra)
		{
			case '+':
				funcAdicao();
				flag = 1;
			break;

			case '-':
				funcSubtracao();
				flag = 1;
			break;

			case '*':
				funcMultiplicacao();
				flag = 1;
			break;

			case '/':
				funcDivisao();
				flag = 1;
			break;
			case '%':
				funcDivisao();
				flag = 1;
			break;

			case 's':
				seno();
			break;
			case 'S':
				seno();
			break;

			case 'c':
				cosseno();
			break;
			case 'C':
				cosseno();
			break;

			case 't':
				tangente();
			break;
			case 'T':
				tangente();
			break;

			case 'l':
				loga();
			break;
			case 'L':
				loga();
			break;

			case 'r':
				raiz();
			break;
			case 'R':
				raiz();
			break;

			case 'p':
				poten();
			break;
			case 'P':
				poten();
			break;

			case 'z':
				limpaTela();
			break;
			case 'Z':
				limpaTela();
			break;

			case 'x':
				sobreNos();
			break;
			case 'X':
				sobreNos();
			break;

			case '?':
				duvida();
			break;

			default:
				flag = 0;
			break;
		}
	}
}

void sobreNos()
{
	system("cls");

	printf("Nossa empresa tem como principal principio o desenvolvimento de aplica\207\744es simples, \240geis\ne seguras para a ajudar voc\210 usu\240rio! O Lord of Mathematics 6 \202 o m\240ximo da tecnologia,\nutilizando os m\202todos mais modernos e poderosos para deixar essa vers\706o extremamente intuitiva\ne moderna.");

	printf("\n\nFeito por: Astronaut.lab\nProjeto liderado por: Everton Dias\nFeito em: novembro / 2018\n");

	primeiroValor();
	operacao();
}

void limpaTela()
{
	system("cls");

	introducao();
	primeiroValor();
	operacao();
}

void duvida()
{
	printf("\nA nossa calculadora \202 muito simples de ser usada!\nBasta digitar o numero e a opera\207\706o:\n\n");

	printf("	Adi\207\706o: +		Multiplica\207\706o: * \n");
	printf("	Subtra\207\706o: -		Divis\706o: / \n");
	printf("	Seno: S			Cosseno: C \n");
	printf("	Tangente: T		Logaritmo: L \n");
	printf("	Raiz Quadrada: R	Potencia\207\706o: P \n");
	printf("	Limpar a tela: Z 	Sobre n\242s: X\n");

	primeiroValor();
	operacao();

}

void seno()
{
	float seno = sin(n.num1);
	printf("\nValor de seno de %.2f = %f \n", n.num1, seno);

	primeiroValor();
	operacao();
}

void cosseno()
{
	float cosseno = cos(n.num1);
	printf("\nValor de cosseno de %.2f = %f \n", n.num1, cosseno);

	primeiroValor();
	operacao();
}

void tangente()
{
	float tangente = tan(n.num1);
	printf("\nValor de tangente de %.2f = %f \n", n.num1, tangente);

	primeiroValor();
	operacao();
}

void loga()
{
	float logaritmo = log(n.num1);
	printf("\nValor do logaritmo natural de %.2f = %f \n", n.num1, logaritmo);

	primeiroValor();
	operacao();
}

void raiz()
{
	float raiz = sqrt(n.num1);
	printf("\nValor da raiz quadrada de %.2f = %f \n", n.num1, raiz);

	primeiroValor();
	operacao();
}

void poten()
{
	printf("\nDigite o valor que deseja elevar %.0f: ", n.num1);
	scanf("%f",& n.num2);

	n.resul = pow(n.num1, n.num2);
	printf("\nValor de %.2f elevado a %.2f = %f \n", n.num1, n.num2,n.resul);

	primeiroValor();
	operacao();
}

void funcResul()
{
	printf("\n\nA conta feita foi essa:");
	printf("\n\n  %.0f\n%c %.0f\n---------\n  %.0f", n.num1, n.letra, n.num2, n.resul);

	printf("\n\nResultado: %f\n", n.resul);
}

void segundoValor()
{
	printf("\n%.3f %c ", n.num1, n.letra);
	scanf("%f",& n.num2);
}

void funcAdicao()
{
	segundoValor();

	n.resul = n.num1 + n.num2;

	funcResul();

	primeiroValor();
	operacao();
}

void funcSubtracao()
{
	segundoValor();

	n.resul = n.num1 - n.num2;

	funcResul();

	primeiroValor();
	operacao();
}

void funcMultiplicacao()
{
	segundoValor();

		n.resul = n.num1 * n.num2;

	funcResul();

	primeiroValor();
	operacao();
}

void funcDivisao()
{
	segundoValor();

		n.resul = n.num1 / n.num2;

	printf("\n\n%.2f |_%.2f\n      %.2f", n.num1, n.num2, n.resul);
	printf("\n\nResultado: %f\n", n.resul);

	primeiroValor();
	operacao();
}

void padrao()
{
    system("mode con:cols=95 lines=30");
    system("color 1F");


}

int main()
{
    padrao();
	introducao();

    primeiroValor();
    operacao();
}
