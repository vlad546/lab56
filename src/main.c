#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "calc.h"

//int calc(int a,int b,int c);

int main()
{
	setlocale(LC_CTYPE, "Russian");

	double a, b, c;
	
	printf("Введите коэффициент при x^2: ");
	scanf("%lf", &a);
	printf("Введите коеффициетн при x: ");
	scanf("%lf", &b);
	printf("Введите свободный член: ");
	scanf("%lf", &c);

	calc(a,b,c);
	
	return 0;
}

