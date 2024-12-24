#pragma once
#ifndef __LinkStNode__
#define __LinkStNode__
typedef char ElemType;
typedef struct linknode
{
	ElemType data;
	struct linknode* next;
}LinkStNode;

void InitStack(LinkStNode*& s);//初始化链栈

void DestoryStack(LinkStNode *&s);//销毁链栈

bool StackEmpty(LinkStNode*& s);//判断栈是否为空

void Push(LinkStNode*& s, ElemType e);//进栈

bool Pop(LinkStNode*& s, ElemType& e);//出栈

bool GetTop(LinkStNode* s, ElemType& e);//取栈顶元素

#endif