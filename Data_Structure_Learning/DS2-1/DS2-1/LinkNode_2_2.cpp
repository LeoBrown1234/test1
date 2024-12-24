#include<stdio.h>
#include<stdlib.h>
#include "LinkNode_2_2.h"

void CreateListF(LinkNode*& L, ElemType a[], int n)//头插法
{
	LinkNode* s;
	L = (LinkNode*)malloc(sizeof(LinkNode));//初始化头节点的空间
	L->next = NULL;
	for (int i = 0; i < n; i++)
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));//初始化新节点s
		s->data = a[i];//赋值给新节点
		s->next = L->next;//此时把s连接到头节点的后面
		L->next = s;//L的下一个还是指向s           新节点先连后面再连前面，是为了防止找不到其后方的节点位置
	}
}
void CreateListR(LinkNode*& L, ElemType a[], int n)//尾插法
{
	LinkNode* s, * r;//s代表新节点，r一直指向单链表的最末端
	L = (LinkNode *)malloc(sizeof(LinkNode));//头节点初始化
	r = L;
	for (int i = 0; i < n; i++)//初始化s并赋值对应数据，r后面接上新节点，注意：r本身就是指针作用，可随时变化指的节点目标
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));
		s->data = a[i];
		r->next = s;
		r = s;//r从新指向单链表最末端
	}
	r->next = NULL;//最末端置空，断开指向的原来的临时新节点
}
void InitList(LinkNode*& L)//初始化单链表
{
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
}
void DestroyList(LinkNode*& L)//销毁单链表
{//每个节点都要单独销毁
	LinkNode* pre = L, * p = pre->next;//前驱后继标好
	while (p != NULL)
	{
		free(pre);//释放前驱
		pre = p;
		p = pre->next;
	}
	free(pre);
}
bool ListEmpty(LinkNode* L)//判断单链表是否为空
{
	return(L->next == NULL);
}
int ListLength(LinkNode* L)//查看单链表长度
{
	int i = 0;
	LinkNode* p = L;
	while (p->next != NULL)
	{
		i++;
		p = p->next;
	}
	return(i);
}
void DispList(LinkNode* L)//输出单链表各元素内容
{
	LinkNode* p = L->next;
	while (p!= NULL)
	{
		printf("%c",p->data);
		p = p->next;
	}
	printf("\n");
}
bool GetElem(LinkNode* L, int i, ElemType& e)//查看单链表第i个元素的值
{
	int j = 0;
	LinkNode* p = L;
	if(i<=0)
	{
		return false;
	}
	while (j < i && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
	{
		return false;
	}
	else {
		e = p->data;
		return true;
	}
}
int LocateElem(LinkNode* L, ElemType e)//查找第一个为e的元素的序号
{
	int i = 1;
	LinkNode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
	{
		return (0);
	}
	else {
		return(i);
	}
}
bool ListInsert(LinkNode*& L, int i, ElemType e)//插入元素到第i个位置
{
	int j = 0;
	LinkNode* p = L, * s;
	if(i<=0)
	{
		return false;
	}
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
	{
		return false;
	}
	else {
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = e;
		s->next = p->next;
		p->next = s;
		return true;
	}
}
bool ListDelete(LinkNode*& L, int i, ElemType& e)//删除第i个元素
{
	int j = 0;
	LinkNode* p = L, * q;
	if (i <= 0)
	{
		return false;
	}
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
	{
		return false;
	}
	else {
		q = p->next;
		if (q == NULL)
		{
			return false;
		}
		e = q->data;
		p->next = q->next;
		free(q);
		return true;
	}
}