/*Receber dois n�meros e mostre as opera��es de 
soma, subtra��es, multiplica��o, divis�o, 
pot�ncia e raiz da soma dos n�meros.*/
#include"stdio.h"
#include"math.h"
#include"locale.h"
#include"stdlib.h"
main()//fun��o principal
{
	setlocale(LC_ALL,"");system("color e5");
	float x,y;
	printf("\n\n\n\tDigite o primeiro n�mero:");
	scanf("%f",&x);system("cls");
	printf("\n\n\n\tDigite o segundo n�mero:");
	scanf("%f",&y);system("cls");
	printf("\n\n\t\t************");
	printf("\n\t\t  O P E R A � � E S");
	printf("\n\t\t************");
	printf("\n\t %.0f + %.0f = %.0f",x,y,x + y);
	printf("\n\tSUBTRA��O = %.2f",x - y);
	printf("\n\tPRODUTO = %.2f",x * y);
	printf("\n\tDIVIS�O = %.2f",x / y);
	printf("\n\tPOT�NCIA = %.2f",pow(x,y));
	printf("\n\tRA�Z DA SOMA = %.2f",sqrt(x+y));
}
