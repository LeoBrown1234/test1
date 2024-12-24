#pragma once
#ifndef __LinkStNode__
#define __LinkStNode__
typedef char ElemType;
typedef struct linknode
{
	ElemType data;
	struct linknode* next;
}LinkStNode;

void InitStack(LinkStNode*& s);//��ʼ����ջ

void DestoryStack(LinkStNode *&s);//������ջ

bool StackEmpty(LinkStNode*& s);//�ж�ջ�Ƿ�Ϊ��

void Push(LinkStNode*& s, ElemType e);//��ջ

bool Pop(LinkStNode*& s, ElemType& e);//��ջ

bool GetTop(LinkStNode* s, ElemType& e);//ȡջ��Ԫ��

#endif