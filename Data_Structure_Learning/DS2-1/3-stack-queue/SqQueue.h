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

void InitQueue(SqQueue*& q);//��ʼ������q

void DestroyQueue(SqQueue*& q);//���ٶ���q

bool QueueEmpty(SqQueue *q);//�ж϶���q�Ƿ��

bool enQueue(SqQueue*& q, ElemType e);//����

bool deQueue(SqQueue *&q,ElemType e);//����

#endif