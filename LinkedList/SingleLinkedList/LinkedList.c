#include "LinkedList.h"

Node* SLL_CreateNode(ElementType NewData)			//노드 생성
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;
}

void SLL_DestroyNode(Node* Node)					//노드 소멸
{
	free(Node);
}

void SLL_AppendNode(Node** Head, Node* NewNode)	//노드 추가
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


