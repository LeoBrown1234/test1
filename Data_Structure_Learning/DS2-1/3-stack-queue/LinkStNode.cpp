#include<stdio.h>
#include<stdlib.h>
#include "LinkStNode.h"
void InitStack(LinkStNode*& s)//��ʼ����ջ
{
	s = (LinkStNode*)malloc(sizeof(LinkStNode));
	s->next = NULL;
}
void DestoryStack(LinkStNode*& s)//������ջ
{
	LinkStNode* p = s->next;
	while (p != NULL)
	{
		free(s);
		s = p;
		p = p->next;
	}
	free(s);
}
bool StackEmpty(LinkStNode*& s)//�ж�ջ�Ƿ�Ϊ��
{
	return(s->next == NULL);
}
void Push(LinkStNode*& s, ElemType e)//��ջ
{
	LinkStNode* p;
	p = (LinkStNode*)malloc(sizeof(LinkStNode));
	p->data = e;
	p->next = s->next;
	s->next = p;
}
bool Pop(LinkStNode*& s, ElemType& e)//��ջ
{
	LinkStNode* p;
	if (s->next == NULL)
	{
		return false;
	}
	p = s->next;
	e = p->data;
	s->next = p->next;
	free(p);
	return true;
}
bool GetTop(LinkStNode* s, ElemType& e)//ȡջ��Ԫ��
{
	if (s->next == NULL)
	{
		return false;
	}
	e = s->next->data;
	return true;
}