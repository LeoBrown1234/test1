//��д���ݽṹ�������Լ���������ѧ�ķ�ʽ��ɣ��ͱ�����Ч��̫�� ������Ч��һ�㣬�����ܶ���̫���ˡ�
#pragma once //ʹͷ�ļ�ֻ����һ��

#include <stdio.h>
#include <stdlib.h>
#include "SqList_2_1.h"

int main()
{
	
	SqList* L;
	ElemType e;
	printf("˳���Ļ����������£�\n");
	printf("(1)��ʼ��˳���L\n");
	InitList(L);
	printf("(2)���β���a��b��c��d��eԪ��\n");
	ListInsert(L,1, 'a');
	ListInsert(L,2, 'b');
	ListInsert(L,3, 'c');
	ListInsert(L,4, 'd');
	ListInsert(L,5, 'e');
	printf("(3)���˳���L:\t");
	DispList(L);
	printf("(4)˳����ȣ�%d\t",ListLength(L));
	printf("\n(5)˳���LΪ:%s\t",ListEmpty(L)?"��" :"�ǿ�");
	GetElem(L, 3, e);
	printf("\n(6)˳���L�ĵ�3��Ԫ�أ�%c\t",e);
	printf("\n(7)Ԫ��a��λ��:%d\t",LocateElem(L,'a'));
	printf("\n(8)�ڵ�4��Ԫ��λ���ϲ���fԪ��");
	ListInsert(L,4,'f');
	printf("\n(9)���˳���L:\t");
	DispList(L);
	printf("(10)ɾ��L�ĵ�3��Ԫ��");
	ListDelete(L,3,e);
	printf("\n(11)���˳���L:");
	DispList(L);
	printf("(12)�ͷ�˳���L\t");
	DestroyList(L);
	return 1;
}

