#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "calc.h"

int calc(double a,double b,double c, double *x1, double *x2)
{
	double d;
	int status;
	
	if (a == 0)
		status = -1;
	else
	{
		d = (b * b) - 4 * a * c;
		if (d < 0)
			status = 0;
		else if (d == 0)	
		{
			*x1 = (-b - sqrt(d)) / (2 * a);
			if (b == 0 && c == 0)
			{
				x1 = 0;
			}
			status = 1;
		}
		else
		{
			*x1 = (-b - sqrt(d)) / (2 * a);
			*x2 = (-b + sqrt(d)) / (2 * a);
			status = 2;
		}
	}
	return status;
}
