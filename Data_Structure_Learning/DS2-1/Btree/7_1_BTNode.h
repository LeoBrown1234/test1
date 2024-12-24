#pragma once
#ifndef __7_1_BTNode__
#define __7_1_BTNode__
//头文件结构体和函数声明写这里
#define MaxSize 100
typedef int ElemType;
typedef struct node
{
	ElemType data;
	struct node* lchild;
	struct node* rchild;
}BTNode;//二叉树结构体创建完成

void CreateBTree(BTNode*& b, char* str);//创建二叉树

void DestroyBTree(BTNode*& b);//销毁二叉树

BTNode* FindNode(BTNode* b, ElemType x);//查找值为x的结点

BTNode* LchildNode(BTNode* p);//返回p结点的左孩子结点指针

BTNode* RchildNode(BTNode* p);//返回p结点的右孩子结点指针

int BTHeight(BTNode* b);//求二叉树b的高度

void DispBTree(BTNode* b);//以括号表示法输出二叉树







#endif