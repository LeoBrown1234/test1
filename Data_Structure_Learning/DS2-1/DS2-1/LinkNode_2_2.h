#pragma once
#ifndef __LINKNODE_2_2__
#define __LINKNODE_2_2__
typedef char ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LinkNode;

void CreateListF(LinkNode*& L, ElemType a[], int n);//ͷ�巨

void CreateListR(LinkNode*& L, ElemType a[], int n);//β�巨

void InitList(LinkNode*& L);//��ʼ��������

void DestroyList(LinkNode*& L);//���ٵ�����

bool ListEmpty(LinkNode* L);//�жϵ������Ƿ�Ϊ��

int ListLength(LinkNode* L);//�鿴��������

void DispList(LinkNode* L);//����������Ԫ������

bool GetElem(LinkNode* L, int i, ElemType& e);//�鿴�������i��Ԫ�ص�ֵ

int LocateElem(LinkNode* L, ElemType e);//���ҵ�һ��Ϊe��Ԫ�ص����

bool ListInsert(LinkNode*& L, int i, ElemType e);//����Ԫ�ص���i��λ��

bool ListDelete(LinkNode*& L, int i, ElemType& e);//ɾ����i��Ԫ��

#endif