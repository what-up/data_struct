#include"header.h"

void squre(int a, double presis)
{
	double x,y;
	y = a/2;
	do
	{
		x = y;
		y = (x + a/x)/2;
	}while(fabs(y - x) > presis);
	printf("%f",y);
}