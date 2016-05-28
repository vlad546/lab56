#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "calc.h"

//int calc(int a,int b,int c);

int main()
{
	setlocale(LC_CTYPE, "Russian");

	double a, b, c, x1, x2;
	int status;
	printf("Введите коэффициент при x^2: ");
	scanf("%lf", &a);
	printf("Введите коеффициетн при x: ");
	scanf("%lf", &b);
	printf("Введите свободный член: ");
	scanf("%lf", &c);

	status = calc(a,b,c,&x1,&x2);
	
	if (status == -1)
		printf("\a\n Уравнение не имеет корней! ");
	if (status == 0)
		printf("\a\n Уравнение не имеет вещественных корней! ");
	if (status == 1)
		printf("Уравнение имеет один корень: x1 = %lf", x1);
	if (status == 2)
		printf("Уравнение имеет два корня: \n x1 = %lf\n x2 = %lf", x1, x2);
	return 0;
}
