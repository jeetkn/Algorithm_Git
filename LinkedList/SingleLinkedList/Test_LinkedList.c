#include "LinkedList.h"

//void print_node(Node* root) {
//	if (root == NULL) {
//		printf("End of data\n");
//		return;
//	}
//	printf("%d | ", root->Data);
//	print_node(root->NextNode);
//}

int main(void)
{
	//int i = 2;
	//Node* List = NULL;
	//Node* NewNode = NULL;
	//Node* MyNode = NULL;

	//NewNode = SLL_CreateNode(117);
	//SLL_AppendNode(&List, NewNode);

	//NewNode = SLL_CreateNode(119);
	//SLL_AppendNode(&List, NewNode);

	//NewNode = SLL_CreateNode(120);
	//SLL_AppendNode(&List, NewNode);

	//NewNode = SLL_CreateNode(1592);
	//SLL_AppendNode(&List, NewNode);

	//NewNode = SLL_CreateNode(12);
	//SLL_AppendNode(&List, NewNode);

	//NewNode = SLL_CreateNode(30);
	//SLL_AppendNode(&List, NewNode);

	//MyNode = SLL_GetNodeAt(List, i);	//MyNode�� i+1��° ����� �ּҸ� ����
	//
	//print_node(List);
	///*printf("List[%d] = %d\n", i, MyNode->Data);*/
	//printf("%p\n", MyNode->NextNode);

	//SLL_RemoveNode(&List, MyNode);
	//SLL_DestroyNode(MyNode);
	//print_node(List);

	int i = 0;
	int Count = 0;
	Node* List = NULL;
	Node* Current = NULL;
	Node* NewNode = NULL;

	/* ��� 5�� �߰� */
	for (i = 0; i < 5; i++)
	{
		NewNode = SLL_CreateNode(i);
		SLL_AppendNode(&List, NewNode);
	}

	NewNode = SLL_CreateNode(-1);
	SLL_InsertNewHead(&List, NewNode);

	NewNode = SLL_CreateNode(-2);
	SLL_InsertNewHead(&List, NewNode);

	/* ����Ʈ ��� */
	Count = SLL_GetNodeCount(List);
	for (i = 0; i < Count; i++)
	{
		Current = SLL_GetNodeAt(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}

	/* ����Ʈ�� ����° ��� �ڿ� �� ��� ���� */
	printf("\nInserting 3000 After [2]...\n\n");

	Current = SLL_GetNodeAt(List, 2);
	NewNode = SLL_CreateNode(3000);

	SLL_InsertAfter(Current, NewNode);

	/* ����Ʈ ��� */
	Count = SLL_GetNodeCount(List);
	for (i = 0; i < Count; i++)
	{
		Current = SLL_GetNodeAt(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}

	/* ��� ��带 �޸𸮿��� ���� */	
	printf("\nDestroying List...\n");

	for (i = 0; i < Count; i++)
	{
		Current = SLL_GetNodeAt(List, 0);
		if (Current != NULL)
		{
			SLL_RemoveNode(&List, Current);
			SLL_DestroyNode(Current);
		}
	}

	return 0;
}




