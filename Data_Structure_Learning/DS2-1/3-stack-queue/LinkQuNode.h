#pragma once
typedef char ElemType;
typedef struct DataNode
{
	ElemType data;
	struct DataNode* next;
}DataNode;     //声明链队数据结点类型

typedef struct
{
	DataNode* front;
	DataNode* rear;
}LinkQuNode;   //声明链队类型

void InitQueue(LinkQuNode*& q);//初始化队列q

void DestroyQueue(LinkQuNode*& q);//销毁队列q

bool QueueEmpty(LinkQuNode* q);//判断队列q是否空

void enQueue(LinkQuNode*& q, ElemType e);//进队

bool deQueue(LinkQuNode *&q,ElemType &e);//出队