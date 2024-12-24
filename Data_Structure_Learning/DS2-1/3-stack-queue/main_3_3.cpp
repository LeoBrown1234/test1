#pragma once
#include<stdio.h>
#include<stdlib.h>
#include "SqQueue.h"

int main()
{
	ElemType e;
	SqQueue* q;
	printf("���ζ��л�����������:\n");
	printf("(1)��ʼ������ȥq\n");
	InitQueue(q);
	printf("(2)���ν�����Ԫ��a,b,c\n");
	InitQueue(q);
	if (!enQueue(q, 'a'))
	{
		printf("\t��ʾ:���������ܽ���\n");
	}
	if (!enQueue(q, 'b'))
	{
		printf("\t��ʾ:���������ܽ���\n");
	}
	if (!enQueue(q, 'c'))
	{
		printf("\t��ʾ:���������ܽ���\n");
	}
	printf("(3)����Ϊ%s\n",(QueueEmpty(q)?"��":"�ǿ�"));
	if (deQueue(q, e) == 0)
	{
		printf("�ӿգ����ܳ���\n");
	}
	else 
	{
		printf("(4)����һ��Ԫ��%c\n",e);
	}
	printf("(5)���ν�����Ԫ��d,e,f\n");
	if (!enQueue(q, 'd'))
	{
		printf("\t��ʾ:���������ܽ���\n");
	}
	if (!enQueue(q, 'e'))
	{
		printf("\t��ʾ:���������ܽ���\n");
	}
	if (!enQueue(q, 'f'))
	{
		printf("\t��ʾ:���������ܽ���\n");
	}
	printf("(6)���������У�");
	while (!QueueEmpty(q))
	{
		deQueue(q, e);
		printf("%c",e);
	}
	printf("\n");
	printf("(7)�ͷŶ���\n");
	DestroyQueue(q);

	return 1;
}



