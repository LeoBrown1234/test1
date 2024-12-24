#pragma once
#ifndef __SqStack__
#define __SqStack__
#define MaxSize 100

typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack*& s);//初始化顺序栈

void DestoryStack(SqStack*& s);//销毁顺序栈

bool StackEmpty(SqStack* s);//判断栈空否

bool Push(SqStack*& s, ElemType e);//进栈

bool Pop(SqStack*& s, ElemType& e);//出栈

bool GetTop(SqStack*& s, ElemType& e);//取栈顶元素




#endif