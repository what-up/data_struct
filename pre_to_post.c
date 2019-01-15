#include"header.h"

void pretopost(char*pre, int rootpos, int len)
{
	int child_len;
	child_len = len / 2;
	if(child_len)
	{
		pretopost(pre, rootpos+1, child_len);	
		pretopost(pre, rootpos+child_len+1, child_len);	
	}
	printf("%c",pre[rootpos]);
}