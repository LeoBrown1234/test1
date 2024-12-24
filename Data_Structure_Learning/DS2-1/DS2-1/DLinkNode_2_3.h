#pragma once
#ifndef __DLINKNODE_2_3__
#define __DLINKNODE_2_3__
typedef int ElemType;
typedef struct DNode {
	ElemType data;
	struct DNode* prior;
	struct DNode* next;
}DLinkNode;

void CreateListF(DLinkNode*& L, ElemType a[], int n);//头插法

void CreateListR(DLinkNode*& L, ElemType a[], int n);//尾插法

void InitList(DLinkNode*& L);//初始化

void DestoryList(DLinkNode *&L);//销毁线性表

bool ListEmpty(DLinkNode *L);//判双链表为空？

int ListLength(DLinkNode *L);//求双链表长度

void DispList(DLinkNode* L);//输出双链表

bool GetElem(DLinkNode *L,int i,ElemType &e);//求双链表第i个元素的值

int LocateElem(DLinkNode *L,ElemType e);//查找第一个值为e的元素序号

bool ListInsert(DLinkNode *&L,int i,ElemType e);//插入第i个元素

bool ListDelete(DLinkNode *&L,int i,ElemType &e);//删除第i个元素

#endif