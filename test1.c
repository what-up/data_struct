#include"header.h"

void test()
{
	LNode q,*p;
	int a[2] = {1,2};
	Qstr str;
	
	int value,a1,b,c;
	a1=3,b=2,c=1;
	value = a1>b>c;
	str.c = a;
	q.data = 1;
	p = &q;
	q.data = p->data;
	
	printf("%d",value); 
}
//Êä³ö°Ë½øÖÆ
void test1()
{
	int i = 010, j = 110;
	char *s = "\"hello\\world\n";
	printf("%d,%d\n",i,j);
	printf("length is %d ", strlen(s));
}