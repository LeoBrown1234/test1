#pragma once
typedef char ElemType;
typedef struct DataNode
{
	ElemType data;
	struct DataNode* next;
}DataNode;     //�����������ݽ������

typedef struct
{
	DataNode* front;
	DataNode* rear;
}LinkQuNode;   //������������

void InitQueue(LinkQuNode*& q);//��ʼ������q

void DestroyQueue(LinkQuNode*& q);//���ٶ���q

bool QueueEmpty(LinkQuNode* q);//�ж϶���q�Ƿ��

void enQueue(LinkQuNode*& q, ElemType e);//����

bool deQueue(LinkQuNode *&q,ElemType &e);//����