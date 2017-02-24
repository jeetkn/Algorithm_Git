#ifndef LINKEDLIST_H
#define LINEDLIST_H

#include<stdio.h>
#include<stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
	struct tagNode* NextNode;
}Node;

/* �Լ� ���� ���� */	//SLL -> Single Linked List
Node* SLL_CreateNode(ElementType NewData);			//��� ����
void SLL_DestroyNode(Node* Node);					//��� �Ҹ�
void SLL_AppendNode(Node** Head, Node* NewNode);	//��� �߰�
//void SLL_InsertAfter(Node* Current, Node* NewNode);	//��� ����
//void SLL_InsertNewHead(Node** Head, Node* Remove);	
//void SLL_RemoveNode(Node** Head, Node* Remove);		//��� ����
//Node* SLL_GetNodeAt(Node* Head, int Location);		//��� Ž��
//int SLL_GetNodeCount(Node* Head);					//��� ������


#endif