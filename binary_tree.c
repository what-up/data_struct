#include"header.h"

void InOrder( BinNode* root)
{
	if(root)
	{
		if(root->lchild != NULL)
			InOrder(root->lchild);
		printf("%c", root->data);
		if(root->rchild != NULL)
			InOrder(root->rchild);
	}
}