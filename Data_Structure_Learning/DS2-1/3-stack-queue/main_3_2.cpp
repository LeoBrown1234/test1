#pragma once
#include<stdio.h>
#include<stdlib.h>
#include "LinkStNode.h"

int main() {

	ElemType e;
	LinkStNode* s;
	printf("��ջs�Ļ�����������:\n");
	printf("(1)��ʼ��ջs\n");
	InitStack(s);
	printf("(2)ջΪ:%s\n",(StackEmpty(s)?"��":"�ǿ�"));
	printf("(3)���ν�ջԪ��a,b,c,d,e\n");
	Push(s, 'a');
	Push(s, 'b');
	Push(s, 'c');
	Push(s, 'd');
	Push(s, 'e');
	printf("(4)ջΪ:%s\n",(StackEmpty(s)?"��":"�ǿ�"));
	printf("(5)��ջ���У�\n");
	while (!StackEmpty(s))
	{
		Pop(s, e);
		printf("%c ",e);
	}
	printf("\n");
	printf("(6)ջΪ%s\n",(StackEmpty(s)?"��":"�ǿ�"));
	printf("(7)����ջ\n");
	DestoryStack(s);
	printf("------------����������!------------\n");
	system("pause");
	return 1;
}