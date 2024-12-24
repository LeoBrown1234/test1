#include<stdio.h>
#include<stdlib.h>
#include "LinkStNode.h"
void InitStack(LinkStNode*& s)//³õÊ¼»¯Á´Õ»
{
	s = (LinkStNode*)malloc(sizeof(LinkStNode));
	s->next = NULL;
}
void DestoryStack(LinkStNode*& s)//Ïú»ÙÁ´Õ»
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
bool StackEmpty(LinkStNode*& s)//ÅĞ¶ÏÕ»ÊÇ·ñÎª¿Õ
{
	return(s->next == NULL);
}
void Push(LinkStNode*& s, ElemType e)//½øÕ»
{
	LinkStNode* p;
	p = (LinkStNode*)malloc(sizeof(LinkStNode));
	p->data = e;
	p->next = s->next;
	s->next = p;
}
bool Pop(LinkStNode*& s, ElemType& e)//³öÕ»
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
bool GetTop(LinkStNode* s, ElemType& e)//È¡Õ»¶¥ÔªËØ
{
	if (s->next == NULL)
	{
		return false;
	}
	e = s->next->data;
	return true;
}