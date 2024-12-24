//主函数写这里
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "7_1_BTNode.h"

int main() {
	BTNode* b, * p, * lp, * rp;
	printf("二叉树的基本运算如下:\n");
	printf("(1)创建二叉树\n");
	CreateBTree(b, "A(B(D,E,(H(J,K(L,M,(,N))))),C(F,G(,I))");
	printf("(2)二叉树的基本运算如下:\n");
	DispBTree(b);
	printf("\n");
	printf("(3)H结点：");
	p = FindNode(b, 'H');
	if (p != NULL)
	{
		lp = LchildNode(p);
		if (lp != NULL)
		{
			printf("左孩子为%c",lp->data);
		}else
		{
			printf("无左孩子");
		}
		rp = RchildNode(p);
		if (rp != NULL)
		{
			printf("右孩子为%c",rp->data);
		}
		else
		{
			printf("无右孩子");
		}

	}

	printf("\n");
	printf("(4)二叉树b的高度:%d\n",BTHeight(b));
	printf("(5)释放二叉树b\n");
	DestroyBTree(b);

	return 1;
}