#include<stdio.h>
#include<stdlib.h>
#include "SqList_2_1.h"
#define MAX_INT 32767
#define MIN_INT -32768


void  CreateList(SqList*& L, ElemType a[], int n)//1创建顺序表
{
	int i;
	L = (SqList*)malloc(sizeof(SqList));
	for (i = 0; i < n; i++)
	{
		L->data[i] = a[i];
		
	}
	L->length = n;
}
void InitList(SqList*& L) //2初始化顺序表
{
	L = (SqList*)malloc(sizeof(SqList));
	L->length = 0;
}
void DestroyList(SqList*& L)//3销毁顺序表
{
	free(L);
}
bool ListEmpty(SqList* L)//4判断顺序表是否为空
{
	return(L->length == 0);
}
int ListLength(SqList* L)//5查看顺序表长
{
	return(L->length);
}
void DispList(SqList* L)//6输出线性表
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%c",L->data[i]);
	}
	printf("\n");
}
bool GetElem(SqList* L, int i, ElemType& e)//7获取线性表某个数据元素的值到e
{
	if (i<1 || i>L->length)
	{
		return false;
	}
	e = L->data[i - 1];//逻辑位置转换成物理位置
	return true;
}
int LocateElem(SqList* L, ElemType e)//8按元素值查找位置
{
	int i = 0;
	while (i < L->length && L->data[i] != e)
		i++;
	if (i >= L->length)
		return 0;
	else
		return i + 1;
}
bool ListInsert(SqList*& L, int i, ElemType e)//9插入数据元素
{
	int j;
	if (i<1 || i>L->length + 1)
	{
		return false;
	}
	i--;//逻辑位置转换到物理位置
	for (j = L->length; j > i; j--)
	{
		L->data[j] = L->data[j - 1];//逐个的把元素从最后一个后移，挪出位置
	}
		L ->data[i] = e;//让目标位置等于e
		L->length++;//顺序表表长+1
		return true;
	
} 
bool ListDelete(SqList*& L, int i, ElemType& e)//10删除数据元素
{
	int j;
	if (i<1 || i>L->length + 1)
	{
		return false;
	}
	i--;//逻辑序号转换成物理信号
	e = L->data[i];//取删除的元素
	for (j =i; j<L->length-1; j++)//从被删除的元素的后一个开始，逐个的前移，因为此时只有L->length-1个元素存在，所以到L->length-1就是到了最后一个元素了
	{
		L->data[j] = L->data[j+1];//前一个等于后一个，用j和j+1是因为，j初始值是i，证明一开始j就是i的位置
	}
     	L->length--;
		return true;
}




