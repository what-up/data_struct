#include"header.h"
//向表中插入一条数据 1表示成功 0表示失败
int ListInsert(SqList *L, int i, ElemType e)
{
	int j;
	if(i < 1 || i > L->length + 1 || L->length >= MaxSize)
		return 0;
	for(j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j-1];
	}
	L->data[j] = e;
	L->length++;
	return 1;
}
//向表中删除一条数据 1表示成功 0表示失败

int ListDelete(SqList *L, int i, ElemType *e)
{
	int j;
	if( i < 1 || i > L->length)
		return 0;
	*e = L->data[i-1];
	for(j = i-1; j < L->length-2; j++)
		L->data[j] = L->data[j+1];
	L->length--;
	return 1;
}

//查找元素等于e的标号

int LocateElem(SqList *L, ElemType e)
{
	int i;
	for(i = 0; i < L->length; i++)
	{
		if(L->data[i] == e)
			break;
	}
	if(i == L->length)
		return -1;
	else
		return i+1;
}

