#include<stdio.h>
#include<stdlib.h>
#include "LinkNode_2_2.h"

void CreateListF(LinkNode*& L, ElemType a[], int n)//ͷ�巨
{
	LinkNode* s;
	L = (LinkNode*)malloc(sizeof(LinkNode));//��ʼ��ͷ�ڵ�Ŀռ�
	L->next = NULL;
	for (int i = 0; i < n; i++)
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));//��ʼ���½ڵ�s
		s->data = a[i];//��ֵ���½ڵ�
		s->next = L->next;//��ʱ��s���ӵ�ͷ�ڵ�ĺ���
		L->next = s;//L����һ������ָ��s           �½ڵ�������������ǰ�棬��Ϊ�˷�ֹ�Ҳ�����󷽵Ľڵ�λ��
	}
}
void CreateListR(LinkNode*& L, ElemType a[], int n)//β�巨
{
	LinkNode* s, * r;//s�����½ڵ㣬rһֱָ���������ĩ��
	L = (LinkNode *)malloc(sizeof(LinkNode));//ͷ�ڵ��ʼ��
	r = L;
	for (int i = 0; i < n; i++)//��ʼ��s����ֵ��Ӧ���ݣ�r��������½ڵ㣬ע�⣺r�������ָ�����ã�����ʱ�仯ָ�Ľڵ�Ŀ��
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));
		s->data = a[i];
		r->next = s;
		r = s;//r����ָ��������ĩ��
	}
	r->next = NULL;//��ĩ���ÿգ��Ͽ�ָ���ԭ������ʱ�½ڵ�
}
void InitList(LinkNode*& L)//��ʼ��������
{
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
}
void DestroyList(LinkNode*& L)//���ٵ�����
{//ÿ���ڵ㶼Ҫ��������
	LinkNode* pre = L, * p = pre->next;//ǰ����̱��
	while (p != NULL)
	{
		free(pre);//�ͷ�ǰ��
		pre = p;
		p = pre->next;
	}
	free(pre);
}
bool ListEmpty(LinkNode* L)//�жϵ������Ƿ�Ϊ��
{
	return(L->next == NULL);
}
int ListLength(LinkNode* L)//�鿴��������
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
void DispList(LinkNode* L)//����������Ԫ������
{
	LinkNode* p = L->next;
	while (p!= NULL)
	{
		printf("%c",p->data);
		p = p->next;
	}
	printf("\n");
}
bool GetElem(LinkNode* L, int i, ElemType& e)//�鿴�������i��Ԫ�ص�ֵ
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
int LocateElem(LinkNode* L, ElemType e)//���ҵ�һ��Ϊe��Ԫ�ص����
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
bool ListInsert(LinkNode*& L, int i, ElemType e)//����Ԫ�ص���i��λ��
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
bool ListDelete(LinkNode*& L, int i, ElemType& e)//ɾ����i��Ԫ��
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