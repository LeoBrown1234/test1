#pragma once
#ifndef __7_1_BTNode__
#define __7_1_BTNode__
//ͷ�ļ��ṹ��ͺ�������д����
#define MaxSize 100
typedef int ElemType;
typedef struct node
{
	ElemType data;
	struct node* lchild;
	struct node* rchild;
}BTNode;//�������ṹ�崴�����

void CreateBTree(BTNode*& b, char* str);//����������

void DestroyBTree(BTNode*& b);//���ٶ�����

BTNode* FindNode(BTNode* b, ElemType x);//����ֵΪx�Ľ��

BTNode* LchildNode(BTNode* p);//����p�������ӽ��ָ��

BTNode* RchildNode(BTNode* p);//����p�����Һ��ӽ��ָ��

int BTHeight(BTNode* b);//�������b�ĸ߶�

void DispBTree(BTNode* b);//�����ű�ʾ�����������







#endif