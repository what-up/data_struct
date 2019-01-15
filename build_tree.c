#include "header.h"
/*lc 表示 level count 本层节点数目 lbc 表示 左边的兄弟的孩子节点个数总和 pos 表示 当前结点在数据data中的位置
 data用于存储层次遍历序列和节点的度
 方法为找到节点的孩子和右兄弟一次第跪下去
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