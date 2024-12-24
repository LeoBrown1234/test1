#include<stdio.h>
#include<stdlib.h>
#include "SqStack.h"

void InitStack(SqStack*& s)//³õÊ¼»¯Ë³ÐòÕ»
{
	s = (SqStack*)malloc(sizeof(SqStack));
	s->top = -1;
}
void DestoryStack(SqStack*& s)//Ïú»ÙË³ÐòÕ»
{
	free(s);
}
bool StackEmpty(SqStack* s)//ÅÐ¶ÏÕ»¿Õ·ñ
{
	return(s->top == -1);
}
bool Push(SqStack*& s, ElemType e)//½øÕ»
{
	if (s->top == MaxSize - 1)
	{
		return false;
	}
	s->top++;
	s->data[s->top] = e;
	return true;
}
bool Pop(SqStack*& s, ElemType& e)//³öÕ»
{
	if (s->top == MaxSize - 1)
	{
		return false;
	}
	e = s->data[s->top];
	s->top--;
	return true;
}
bool GetTop(SqStack*& s, ElemType& e)//È¡Õ»¶¥ÔªËØ
{
	if (s->top == -1)
	{
		return false;
	}
	e = s->data[s->top];
	return true;
}
