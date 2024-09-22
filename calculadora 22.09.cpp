/*Receber dois números e mostre as operações de 
soma, subtrações, multiplicação, divisão, 
potência e raiz da soma dos números.*/
#include"stdio.h"
#include"math.h"
#include"locale.h"
#include"stdlib.h"
main()//função principal
{
	setlocale(LC_ALL,"");system("color e5");
	float x,y;
	printf("\n\n\n\tDigite o primeiro número:");
	scanf("%f",&x);system("cls");
	printf("\n\n\n\tDigite o segundo número:");
	scanf("%f",&y);system("cls");
	printf("\n\n\t\t************");
	printf("\n\t\t  O P E R A Ç Õ E S");
	printf("\n\t\t************");
	printf("\n\t %.0f + %.0f = %.0f",x,y,x + y);
	printf("\n\tSUBTRAÇÃO = %.2f",x - y);
	printf("\n\tPRODUTO = %.2f",x * y);
	printf("\n\tDIVISÃO = %.2f",x / y);
	printf("\n\tPOTÊNCIA = %.2f",pow(x,y));
	printf("\n\tRAÍZ DA SOMA = %.2f",sqrt(x+y));
}
