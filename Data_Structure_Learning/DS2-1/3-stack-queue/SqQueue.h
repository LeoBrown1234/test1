#pragma once
#ifndef __SqQueue__
#define __SqQueue__
#define MaxSize 100
typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int front, rear;
}SqQueue;

void InitQueue(SqQueue*& q);//初始化队列q

void DestroyQueue(SqQueue*& q);//销毁队列q

bool QueueEmpty(SqQueue *q);//判断队列q是否空

bool enQueue(SqQueue*& q, ElemType e);//进队

bool deQueue(SqQueue *&q,ElemType e);//出队

#endif