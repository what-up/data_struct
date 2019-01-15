#include"header.h"
int main()
{
	int n;
	printf("\
input 1 start SqList\n\
input 2 start LinkList\n\
input 3 start tree\n\
input 4 start pre to post\n\
input 5 start build tree\n\
input 6 start test\ninput 7 \
start caculate square root\n\
input 8 start detach int number\n\
input 9 start printf eight number\n\
input 10 start printf float precise\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		{
			SqList L;
			L.length = 0;
			ListInsert(&L,1,3);		
			printf("%d",L.data[0]);
			break;
		}
	case 2:
		{
			LinkList L,p;
			L = CreatList();
			p = GetElemByIndex(L,2);
			printf("%d\n", p->data);
			break;
		}
	case 3:
		{
		/*	BinNode A,B,C,E,D;
			A.data = 'A', B.data = 'B', C.data = 'C', E.data = 'E'; D.data = 'D';
			A.lchild = &B;
			A.rchild = &D;

			B.lchild = NULL;
			B.rchild = &C;

			C.lchild = NULL;
			C.rchild = NULL;

			D.lchild = &E;
			D.rchild = NULL;

			E.lchild = NULL;
			E.rchild = NULL;
			*/
			BinNode * A = build_bin_tree("ABCDEFGHI", 0,"BCAEDGHFI",0,8);
			InOrder(A);
			break;

		}
	case 4:
		{
			char *pre = "ABCDEFG";
			pretopost(pre,0,7);
			break;
		}
	case 5:
		{
			treeStr data[7];
			BinNode *root;
			data[0].data = 'A';
			data[0].degree = 3;
			
			data[1].data = 'B';
			data[1].degree = 2;

			data[2].data = 'C';
			data[2].degree = 0;

			data[3].data = 'D';
			data[3].degree = 1;

			data[4].data = 'E';
			data[4].degree = 0;

			data[5].data = 'F';
			data[5].degree = 0;

			data[6].data = 'G';
			data[6].degree = 0;

			root = build_tree(1,0,0,data);
			InOrder(root);
			break;
		}
	case 6: 
		{
			test();
			break;
		}
	case 7:
		{
			squre(6,1e-3);
		}
		break;
	case 8:
		{
			detach_int_pri_num(16);
			break;
		}
	case 9:
		{
			test1();
			break;
		}
	case 10:
		{
			float_precise();
			break;
		}
	}
	
	return 0;
}

