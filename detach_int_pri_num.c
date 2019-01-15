#include "header.h"

void detach_int_pri_num(int n)
{
	int i, j,num;
	int str[100];
	num = n,j = 1;
	for(i = 2; i <= n; i++)
	{
		if(num == 1)
			break;
		if(is_prime_n(i))
		{
			while( (num%i) == 0 )
			{
				str[j++] = i;
				num = num/i;
				if(num != 1)
					str[j++] = '*';
				
			}
		}
	}
	for(i = 1; i < j; i++)
	{
		if((i%2) != 0)
		{
			printf("%d", str[i]);
			
		}
		else
		{
			printf("%c",str[i]);
		}
	}
}