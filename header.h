#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ElemType int
#define MaxSize 100
typedef struct
{
	ElemType data[MaxSize];
	int length;
}SqList;
typedef struct
{
    ElemType data;
    struct LNode* next;
}LNode,*LinkList;

int ListInsert(SqList *L, int i, ElemType e);
int ListDelete(SqList *L, int i, ElemType *e);
int LocateElem(SqList *L, ElemType e);
LinkList CreatList();
LinkList GetElemByIndex(LinkList L,int i);

typedef struct BinNode
{
	ElemType data;
	struct BinNode *lchild, *rchild;
} BinNode;
void InOrder( BinNode* root);
BinNode *build_bin_tree(char *a, int i, char*b, int lborder, int rborder);
void pretopost(char*pre, int rootpos, int len);

typedef struct
{
	char data;
	int degree;
}treeStr;
BinNode *build_tree(int lc, int lbc, int pos, treeStr data[]);

void test();
void test1();
void squre(int a, double presis);
int is_prime_n(int n);
void detach_int_pri_num(int n);
typedef struct 
{
	int *c;
	char b;
}Qstr;

void float_precise();


