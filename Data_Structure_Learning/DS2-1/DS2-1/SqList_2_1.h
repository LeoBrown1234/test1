#pragma once
#ifndef __SqList_2_1__
#define __SqList_2_1__
#define ElemType char
#define MaxSize 50


typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;


void  CreateList(SqList*& L, ElemType a[], int n);//1����˳���

void InitList(SqList*& L); //2��ʼ��˳���

void DestroyList(SqList*& L);//3����˳���

bool ListEmpty(SqList* L);//4�ж�˳����Ƿ�Ϊ��

int ListLength(SqList* L);//5�鿴˳���

void DispList(SqList* L);//6������Ա�

bool GetElem(SqList* L, int i, ElemType& e);//7��ȡ���Ա�ĳ������Ԫ�ص�ֵ��e

int LocateElem(SqList* L, ElemType e);//8��Ԫ��ֵ����λ��

bool ListInsert(SqList*& L, int i, ElemType e);//9��������Ԫ��

bool ListDelete(SqList*& L, int i, ElemType& e);//10ɾ������Ԫ��



#endif