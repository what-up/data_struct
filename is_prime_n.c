#include"header.h"

int is_prime_n(int n)
{
	int sqr_n, i;
	sqr_n = (int)sqrt(n);
	for(i = 2; i <= sqr_n;i++)
	{
		if( (n%i) == 0)
			return 0;
	}
	return 1;
}