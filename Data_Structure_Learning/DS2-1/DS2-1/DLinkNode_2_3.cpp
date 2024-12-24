#include<stdio.h>
#include<stdlib.h>
#include "DLinkNode_2_3.h"


void CreateListF(DLinkNode*& L, ElemType a[], int n)//ͷ�巨
{
	DLinkNode* s;
	L = (DLinkNode*)malloc(sizeof(DLinkNode));//ͷ�����
	L->prior = L->next = NULL;  //ǰ����̶���NULL
	for (int i = 0; i < n; i++)
	{
		s = (DLinkNode*)malloc(sizeof(DLinkNode));
		s -> data = a[i];
		s->next = L->next;
		if (L->next != NULL)
		{
			L->next->prior = s;
		}
		L->next = s;
		s->prior = L;
	}
}
void CreateListR(DLinkNode*& L, ElemType a[], int n)//β�巨
{
	DLinkNode *s, * r;
	L = (DLinkNode*)malloc(sizeof(DLinkNode));
	L->prior = L->next = NULL;
	r = L;
	for (int i = 0; i < n; i++)
	{
		s = (DLinkNode *)malloc(sizeof(DLinkNode));
		s->data = a[i];
		r->next = s;
		s->prior = r;
		r = s;
	}
	r->next = NULL;
}
void InitList(DLinkNode*& L)//��ʼ��
{
	L = (DLinkNode*)malloc(sizeof(DLinkNode));
	L->prior = L->next = NULL;
}
void DestoryList(DLinkNode*& L)//�������Ա�
{
	DLinkNode* pre = L, * p = pre->next;
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);//maybe a bug here 
	printf("Destory is Complete!\t");
}
bool ListEmpty(DLinkNode* L)//��˫����Ϊ�գ�
{
	return(L->next == NULL);
}
int ListLength(DLinkNode* L)//��˫������
{
	DLinkNode* p = L;
	int i = 0;
	while (p->next != NULL)
	{
		i++;
		p = p->next;
	}
	return(i);
}

void DispList(DLinkNode* L)//���˫����
{
	DLinkNode* p = L->next;
	while (p != NULL)
	{
		printf("%c\t", p->data);
		p = p->next;
	}
	printf("\n");
}

bool GetElem(DLinkNode* L, int i, ElemType& e)//��˫�����i��Ԫ�ص�ֵ
{ 
	int j = 0;
	DLinkNode* p = L;
	if (i < 0)
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
	else
	{
		e = p->data;
		return true;
	}

}
int LocateElem(DLinkNode* L, ElemType e)//���ҵ�һ��ֵΪe��Ԫ�����
{
	int i = 1;
	DLinkNode* p = L->next;
	while (p != NULL && p->data != e)
	{
		i++;
		p = p->next;
	}
	if (p == NULL)
	{
		return(0);
	}
	else
	{
		return(i);
	}
}
bool ListInsert(DLinkNode*& L, int i, ElemType e)//�����i��Ԫ��
{
	int j = 0;
	DLinkNode* p = L, * s;
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
	else
	{
		s = (DLinkNode*)malloc(sizeof(DLinkNode));
		s->data = e;
		s->next = p->next;
		if (p->next != NULL)
		{
			p->next->prior = s;
		}
		s->prior = p;
		p->next = s;
		return true;
	}
}
bool ListDelete(DLinkNode*& L, int i,ElemType &e)//ɾ����i��Ԫ��
{
	int j = 0;
	DLinkNode *p=L, * q;
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
	else
	{
		q = p->next;
		if (q == NULL)
		{
			return false;
		}
		e = q->data;
		p->next = q->next;
		if (p->next != NULL)
		{
			p->next->prior = p;
		}
		free(q);
		return true;
	}
}

