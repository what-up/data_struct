#include "header.h"
/*lc ��ʾ level count ����ڵ���Ŀ lbc ��ʾ ��ߵ��ֵܵĺ��ӽڵ�����ܺ� pos ��ʾ ��ǰ���������data�е�λ��
 data���ڴ洢��α������кͽڵ�Ķ�
 ����Ϊ�ҵ��ڵ�ĺ��Ӻ����ֵ�һ�εڹ���ȥ
*/
BinNode *build_tree(int lc, int lbc, int pos, treeStr data[])
{
	BinNode *child = NULL, *brother = NULL, *root = NULL;
	if(data[pos].degree > 0)
	{
		int lbcc = 0,posTemp = pos,lbcTemp = lbc,childpos = 0;
		while(lbcTemp-- > 0)
		{
			lbcc += data[--posTemp].degree;
		}
		childpos = pos + lc - lbc + lbcc;
		
		child = build_tree(data[pos].degree, 0, childpos,data);
	}
	if(lc - lbc > 1)
	{
		brother = build_tree(lc, lbc+1, pos+1, data);
	}
	root = (BinNode*)malloc(sizeof(BinNode));
	root->lchild = child;
	root->rchild = brother;
	root->data = data[pos].data;
	return root;
}