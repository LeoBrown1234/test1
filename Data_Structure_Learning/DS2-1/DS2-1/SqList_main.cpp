//重写数据结构，依靠自己查资料自学的方式完成，和别人敲效率太低 ，而且效果一般，主观能动性太低了。
#pragma once //使头文件只编译一次

#include <stdio.h>
#include <stdlib.h>
#include "SqList_2_1.h"

int main()
{
	
	SqList* L;
	ElemType e;
	printf("顺序表的基本运算如下：\n");
	printf("(1)初始化顺序表L\n");
	InitList(L);
	printf("(2)依次插入a，b，c，d，e元素\n");
	ListInsert(L,1, 'a');
	ListInsert(L,2, 'b');
	ListInsert(L,3, 'c');
	ListInsert(L,4, 'd');
	ListInsert(L,5, 'e');
	printf("(3)输出顺序表L:\t");
	DispList(L);
	printf("(4)顺序表长度：%d\t",ListLength(L));
	printf("\n(5)顺序表L为:%s\t",ListEmpty(L)?"空" :"非空");
	GetElem(L, 3, e);
	printf("\n(6)顺序表L的第3个元素：%c\t",e);
	printf("\n(7)元素a的位置:%d\t",LocateElem(L,'a'));
	printf("\n(8)在第4个元素位置上插入f元素");
	ListInsert(L,4,'f');
	printf("\n(9)输出顺序表L:\t");
	DispList(L);
	printf("(10)删除L的第3个元素");
	ListDelete(L,3,e);
	printf("\n(11)输出顺序表L:");
	DispList(L);
	printf("(12)释放顺序表L\t");
	DestroyList(L);
	return 1;
}

