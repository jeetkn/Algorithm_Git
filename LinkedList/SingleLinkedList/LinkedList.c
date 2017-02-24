#include "LinkedList.h"

Node* SLL_CreateNode(ElementType NewData)			//��� ����
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;
}

void SLL_DestroyNode(Node* Node)					//��� �Ҹ�
{
	free(Node);
}

void SLL_AppendNode(Node** Head, Node* NewNode)	//��� �߰�
{
	/* ��� ��尡 NULL�̶�� ���ο� ��尡 Head */
	if ((*Head) == NULL)
	{
		*Head = NewNode;
	}
	else
	{
		/* ���ϸ� ã�� NewNode�� �����Ѵ�. */
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;
		}

		Tail->NextNode = NewNode;
	}
}


