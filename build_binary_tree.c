#include"header.h"

BinNode *build_bin_tree(char *a, int i, char*b, int lborder, int rborder)
{
	int temp = lborder,lchildc,rchildc;
	BinNode *node = malloc(sizeof(BinNode)), *lnode,*rnode;
	node->data = a[i];
	while(a[i] != b[temp])
		temp++;
	lchildc = temp - lborder;
	rchildc = rborder - temp;
	if(lchildc != 0)
	{
		lnode = build_bin_tree(a, i+1,b, lborder, temp-1);
	}else
	{
		lnode = NULL;
	}
	if(rchildc != 0)
	{
		rnode = build_bin_tree(a, i+temp-lborder+1,b,temp+1,rborder);
	}else
	{
		rnode = NULL;
	}
	node->lchild = lnode;
	node->rchild = rnode;
	return node;
}