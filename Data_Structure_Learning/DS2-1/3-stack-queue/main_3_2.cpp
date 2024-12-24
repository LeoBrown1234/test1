#pragma once
#include<stdio.h>
#include<stdlib.h>
#include "LinkStNode.h"

int main() {

	ElemType e;
	LinkStNode* s;
	printf("链栈s的基本运算如下:\n");
	printf("(1)初始化栈s\n");
	InitStack(s);
	printf("(2)栈为:%s\n",(StackEmpty(s)?"空":"非空"));
	printf("(3)依次进栈元素a,b,c,d,e\n");
	Push(s, 'a');
	Push(s, 'b');
	Push(s, 'c');
	Push(s, 'd');
	Push(s, 'e');
	printf("(4)栈为:%s\n",(StackEmpty(s)?"空":"非空"));
	printf("(5)出栈序列：\n");
	while (!StackEmpty(s))
	{
		Pop(s, e);
		printf("%c ",e);
	}
	printf("\n");
	printf("(6)栈为%s\n",(StackEmpty(s)?"空":"非空"));
	printf("(7)销毁栈\n");
	DestoryStack(s);
	printf("------------操作结束了!------------\n");
	system("pause");
	return 1;
}