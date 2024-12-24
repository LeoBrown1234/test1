//重写数据结构，依靠自己查资料自学的方式完成，和别人敲效率太低 ，而且效果一般，主观能动性太低了。
#pragma once //使头文件只编译一次

#include<stdio.h>
#include<stdlib.h>
#include "DLinkNode_2_3.h"

int main()
{
	DLinkNode* h;
	ElemType e;
	printf("双链表的基本运算如下:\n");
	printf("(1)初始化双链表h\n");
	InitList(h);
	printf("(2)依次采用尾插法插入a,b,c,d,e元素\n");
	ListInsert(h, 1, 'a');
	ListInsert(h, 2, 'b');
	ListInsert(h, 3, 'c');
	ListInsert(h, 4, 'd');
	ListInsert(h, 5, 'e');
	printf("(3)输出双链表h：\n");
	DispList(h);
	printf("(4)双链表h长度：%d\n", ListLength(h));
	printf("(5)双链表h为:%s\n", ListEmpty(h) ? "空" : "非空");
	GetElem(h, 3, e);
	printf("(6)双链表h的第3个元素：%c\n", e);
	printf("(7)元素a的位置:%d\n", LocateElem(h, 'a'));
	printf("(8)在第4个元素位置上插入f元素\n");
	ListInsert(h, 4, 'f');
	printf("(9)输出双链表h:\n");
	DispList(h);
	printf("(10)删除h的第3个元素\n");
	ListDelete(h, 3, e);
	printf("(11)输出双链表h:\n");
	DispList(h);
	printf("(12)释放双链表h\n");
	DestoryList(h);
	return 1;
}


