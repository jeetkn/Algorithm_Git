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

/* 함수 원형 선언 */	//SLL -> Single Linked List
Node* SLL_CreateNode(ElementType NewData);			//노드 생성
void SLL_DestroyNode(Node* Node);					//노드 소멸
void SLL_AppendNode(Node** Head, Node* NewNode);	//노드 추가
//void SLL_InsertAfter(Node* Current, Node* NewNode);	//노드 삽입
//void SLL_InsertNewHead(Node** Head, Node* Remove);	
//void SLL_RemoveNode(Node** Head, Node* Remove);		//노드 제거
//Node* SLL_GetNodeAt(Node* Head, int Location);		//노드 탐색
//int SLL_GetNodeCount(Node* Head);					//노드 수세기


#endif