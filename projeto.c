#include<stdio.h>

int soma(int a, int b)
{
	int soma_num=a + b;
	return soma_num;
}

int subtracao(int a, int b)
{
	int sub = a-b;
	return sub;
}

int multiplicacao(int a, int b)
{
	int mult = a*b;
	return mult;
}

int divisao(int a, int b)
{
	if(b==0)
	{
		printf("Nao pode dividir\n");
		return div;
	}else{
		(div= a/b);
	}
	int div = a/b;
	return div;
}

int main()
{
	printf("Soma dois numeros:%d\n", soma(5,5));
	printf("Subtrai dois numeros:%d\n", subtracao(5,2));
	printf("Multiplica dois numeros:%d\n", multiplicacao(2,2));
	printf("Divide dois numeros:%d\n", divisao(2,2));
	return 0;
}

