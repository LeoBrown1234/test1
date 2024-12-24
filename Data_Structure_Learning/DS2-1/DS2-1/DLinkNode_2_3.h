#pragma once
#ifndef __DLINKNODE_2_3__
#define __DLINKNODE_2_3__
typedef int ElemType;
typedef struct DNode {
	ElemType data;
	struct DNode* prior;
	struct DNode* next;
}DLinkNode;

void CreateListF(DLinkNode*& L, ElemType a[], int n);//ͷ�巨

void CreateListR(DLinkNode*& L, ElemType a[], int n);//β�巨

void InitList(DLinkNode*& L);//��ʼ��

void DestoryList(DLinkNode *&L);//�������Ա�

bool ListEmpty(DLinkNode *L);//��˫����Ϊ�գ�

int ListLength(DLinkNode *L);//��˫������

void DispList(DLinkNode* L);//���˫����

bool GetElem(DLinkNode *L,int i,ElemType &e);//��˫�����i��Ԫ�ص�ֵ

int LocateElem(DLinkNode *L,ElemType e);//���ҵ�һ��ֵΪe��Ԫ�����

bool ListInsert(DLinkNode *&L,int i,ElemType e);//�����i��Ԫ��

bool ListDelete(DLinkNode *&L,int i,ElemType &e);//ɾ����i��Ԫ��

#endif