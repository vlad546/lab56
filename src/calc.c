#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "calc.h"

void calc(double a,double b,double c, double *x1, double *x2)
{
	double d, x1 = 0, x2 = 0;
	
	if (a == 0)
		printf("\a\n Уравнение не имеет корней! ");
	else
	{
		d = (b * b) - 4 * a * c;
		if (d < 0)
			printf("\a\n Уравнение не имеет вещественных корней! ");
		else if (d == 0)	
		{
			x1 = -b / (2 / a);
			if (b == 0 && c == 0)
				x1 = 0;
			printf("Уравнение имеет один корень: x = %lf", x1);
		}
		else
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			printf("Уравнение имеет два корня: \n x1 = %lf\n x2 = %lf", x1, x2);
		}
	}
}
