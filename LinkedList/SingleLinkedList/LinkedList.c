#include "LinkedList.h"

Node* SLL_CreateNode(ElementType NewData)			//노드 생성
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;
}

void SLL_AppendNode(Node** Head, Node* NewNode)		//노드 추가
{
	/* 헤드 노드가 NULL이라면 새로운 노드가 Head */
	if ((*Head) == NULL)
	{
		*Head = NewNode;
	}
	else
	{
		/* 테일를 찾아 NewNode를 연결한다. */
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;
		}

		Tail->NextNode = NewNode;
	}
}

void SLL_InsertAfter(Node* Current, Node* NewNode)	//노드 삽입
{
	NewNode->NextNode = Current->NextNode;
	Current->NextNode = NewNode;
}

void SLL_InsertNewHead(Node** Head, Node* NewHead)
{
	if (*Head == NULL)
	{
		(*Head) = NewHead;
	}
	else
	{
		NewHead->NextNode = (*Head);
		(*Head) = NewHead;
	}
}

void SLL_DestroyNode(Node* Node)					//노드 소멸
{
	free(Node);
}

void SLL_RemoveNode(Node** Head, Node* Remove)		//노드 제거
{
	if (*Head == Remove)
	{
		*Head = Remove->NextNode;
	}
	else
	{
		Node* Current = *Head;
		while (Current != NULL && Current->NextNode != Remove)
		{
			Current = Current->NextNode;
		}
		
		if (Current != NULL)
			Current->NextNode = Remove->NextNode;
	}
}

Node* SLL_GetNodeAt(Node* Head, int Location)		//노드 탐색
{
	Node* Current = Head;

	while (Current != NULL && (--Location) >= 0)
	{
		Current = Current->NextNode;
	}

	return Current;
}


int SLL_GetNodeCount(Node* Head)
{
	int count = 0;
	Node* current = Head;

	while (current != NULL)
	{
		current = current->NextNode;
		count++;
	}
	return count;
}
