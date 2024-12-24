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

void InitStack(SqStack*& s);//��ʼ��˳��ջ

void DestoryStack(SqStack*& s);//����˳��ջ

bool StackEmpty(SqStack* s);//�ж�ջ�շ�

bool Push(SqStack*& s, ElemType e);//��ջ

bool Pop(SqStack*& s, ElemType& e);//��ջ

bool GetTop(SqStack*& s, ElemType& e);//ȡջ��Ԫ��




#endif