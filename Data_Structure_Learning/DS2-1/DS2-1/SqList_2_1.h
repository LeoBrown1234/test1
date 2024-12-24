#pragma once
#ifndef __SqList_2_1__
#define __SqList_2_1__
#define ElemType char
#define MaxSize 50


typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;


void  CreateList(SqList*& L, ElemType a[], int n);//1创建顺序表

void InitList(SqList*& L); //2初始化顺序表

void DestroyList(SqList*& L);//3销毁顺序表

bool ListEmpty(SqList* L);//4判断顺序表是否为空

int ListLength(SqList* L);//5查看顺序表长

void DispList(SqList* L);//6输出线性表

bool GetElem(SqList* L, int i, ElemType& e);//7获取线性表某个数据元素的值到e

int LocateElem(SqList* L, ElemType e);//8按元素值查找位置

bool ListInsert(SqList*& L, int i, ElemType e);//9插入数据元素

bool ListDelete(SqList*& L, int i, ElemType& e);//10删除数据元素



#endif