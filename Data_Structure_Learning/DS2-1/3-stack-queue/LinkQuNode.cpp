#include<stdio.h>
#include<stdlib.h>
#include "LinkQuNode.h"

void InitQueue(LinkQuNode*& q)//��ʼ������q
{
    q = (LinkQuNode*)malloc(sizeof(LinkQuNode));
    q->front = q->rear = NULL;
}

void DestroyQueue(LinkQuNode*& q)//���ٶ���q
{
    DataNode* p = q->front, * r;
    if (p != NULL)
    {
        r = p->next;
        while (r != NULL)
        {
            free(p);
            p = r;
            r = p->next;
        }
    }
    free(p);
    free(q);
}

bool QueueEmpty(LinkQuNode* q)//�ж϶���q�Ƿ��
{
    return(q->rear==NULL);
}

void enQueue(LinkQuNode*& q, ElemType e)//����
{
    DataNode* p;
    p = (DataNode*)malloc(sizeof(DataNode));
    p->data = e;
    p->next = NULL;
    if (q->rear == NULL)
    {
        q->front = q->rear = p;
    }else
    {
        q->rear->next = p;
        q->rear = p;
    }
}

bool deQueue(LinkQuNode*& q, ElemType& e)//����
{
    DataNode* t;
    if (q->rear == NULL)
    {
        return false;
    }
    t = q->front;
    if (q->front == q->rear)
    {
        q->front = q->rear = NULL;
    }
    else
    {
        q->front = q->front->next;
    }
    e = t->data;
    free(t);

    return true;
}



