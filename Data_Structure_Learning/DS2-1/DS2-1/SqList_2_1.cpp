#include<stdio.h>
#include<stdlib.h>
#include "SqList_2_1.h"
#define MAX_INT 32767
#define MIN_INT -32768


void  CreateList(SqList*& L, ElemType a[], int n)//1����˳���
{
	int i;
	L = (SqList*)malloc(sizeof(SqList));
	for (i = 0; i < n; i++)
	{
		L->data[i] = a[i];
		
	}
	L->length = n;
}
void InitList(SqList*& L) //2��ʼ��˳���
{
	L = (SqList*)malloc(sizeof(SqList));
	L->length = 0;
}
void DestroyList(SqList*& L)//3����˳���
{
	free(L);
}
bool ListEmpty(SqList* L)//4�ж�˳����Ƿ�Ϊ��
{
	return(L->length == 0);
}
int ListLength(SqList* L)//5�鿴˳���
{
	return(L->length);
}
void DispList(SqList* L)//6������Ա�
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%c",L->data[i]);
	}
	printf("\n");
}
bool GetElem(SqList* L, int i, ElemType& e)//7��ȡ���Ա�ĳ������Ԫ�ص�ֵ��e
{
	if (i<1 || i>L->length)
	{
		return false;
	}
	e = L->data[i - 1];//�߼�λ��ת��������λ��
	return true;
}
int LocateElem(SqList* L, ElemType e)//8��Ԫ��ֵ����λ��
{
	int i = 0;
	while (i < L->length && L->data[i] != e)
		i++;
	if (i >= L->length)
		return 0;
	else
		return i + 1;
}
bool ListInsert(SqList*& L, int i, ElemType e)//9��������Ԫ��
{
	int j;
	if (i<1 || i>L->length + 1)
	{
		return false;
	}
	i--;//�߼�λ��ת��������λ��
	for (j = L->length; j > i; j--)
	{
		L->data[j] = L->data[j - 1];//����İ�Ԫ�ش����һ�����ƣ�Ų��λ��
	}
		L ->data[i] = e;//��Ŀ��λ�õ���e
		L->length++;//˳����+1
		return true;
	
} 
bool ListDelete(SqList*& L, int i, ElemType& e)//10ɾ������Ԫ��
{
	int j;
	if (i<1 || i>L->length + 1)
	{
		return false;
	}
	i--;//�߼����ת���������ź�
	e = L->data[i];//ȡɾ����Ԫ��
	for (j =i; j<L->length-1; j++)//�ӱ�ɾ����Ԫ�صĺ�һ����ʼ�������ǰ�ƣ���Ϊ��ʱֻ��L->length-1��Ԫ�ش��ڣ����Ե�L->length-1���ǵ������һ��Ԫ����
	{
		L->data[j] = L->data[j+1];//ǰһ�����ں�һ������j��j+1����Ϊ��j��ʼֵ��i��֤��һ��ʼj����i��λ��
	}
     	L->length--;
		return true;
}




