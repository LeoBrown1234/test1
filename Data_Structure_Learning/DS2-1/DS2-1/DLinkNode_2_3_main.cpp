//��д���ݽṹ�������Լ���������ѧ�ķ�ʽ��ɣ��ͱ�����Ч��̫�� ������Ч��һ�㣬�����ܶ���̫���ˡ�
#pragma once //ʹͷ�ļ�ֻ����һ��

#include<stdio.h>
#include<stdlib.h>
#include "DLinkNode_2_3.h"

int main()
{
	DLinkNode* h;
	ElemType e;
	printf("˫����Ļ�����������:\n");
	printf("(1)��ʼ��˫����h\n");
	InitList(h);
	printf("(2)���β���β�巨����a,b,c,d,eԪ��\n");
	ListInsert(h, 1, 'a');
	ListInsert(h, 2, 'b');
	ListInsert(h, 3, 'c');
	ListInsert(h, 4, 'd');
	ListInsert(h, 5, 'e');
	printf("(3)���˫����h��\n");
	DispList(h);
	printf("(4)˫����h���ȣ�%d\n", ListLength(h));
	printf("(5)˫����hΪ:%s\n", ListEmpty(h) ? "��" : "�ǿ�");
	GetElem(h, 3, e);
	printf("(6)˫����h�ĵ�3��Ԫ�أ�%c\n", e);
	printf("(7)Ԫ��a��λ��:%d\n", LocateElem(h, 'a'));
	printf("(8)�ڵ�4��Ԫ��λ���ϲ���fԪ��\n");
	ListInsert(h, 4, 'f');
	printf("(9)���˫����h:\n");
	DispList(h);
	printf("(10)ɾ��h�ĵ�3��Ԫ��\n");
	ListDelete(h, 3, e);
	printf("(11)���˫����h:\n");
	DispList(h);
	printf("(12)�ͷ�˫����h\n");
	DestoryList(h);
	return 1;
}


