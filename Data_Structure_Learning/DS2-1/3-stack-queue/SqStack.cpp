#include<stdio.h>
#include<stdlib.h>
#include "SqStack.h"

void InitStack(SqStack*& s)//��ʼ��˳��ջ
{
	s = (SqStack*)malloc(sizeof(SqStack));
	s->top = -1;
}
void DestoryStack(SqStack*& s)//����˳��ջ
{
	free(s);
}
bool StackEmpty(SqStack* s)//�ж�ջ�շ�
{
	return(s->top == -1);
}
bool Push(SqStack*& s, ElemType e)//��ջ
{
	if (s->top == MaxSize - 1)
	{
		return false;
	}
	s->top++;
	s->data[s->top] = e;
	return true;
}
bool Pop(SqStack*& s, ElemType& e)//��ջ
{
	if (s->top == MaxSize - 1)
	{
		return false;
	}
	e = s->data[s->top];
	s->top--;
	return true;
}
bool GetTop(SqStack*& s, ElemType& e)//ȡջ��Ԫ��
{
	if (s->top == -1)
	{
		return false;
	}
	e = s->data[s->top];
	return true;
}
