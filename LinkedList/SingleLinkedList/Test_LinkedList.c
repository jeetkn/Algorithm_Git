#include "LinkedList.h"

void print_node(Node* root) {
	if (root == NULL) {
		printf("End of data\n");
		return;
	}
	printf("%d | ", root->Data);
	print_node(root->NextNode);
}

int main(void)
{
	int i = 2;
	Node* List = NULL;
	Node* NewNode = NULL;
	Node* MyNode = NULL;

	NewNode = SLL_CreateNode(117);
	SLL_AppendNode(&List, NewNode);

	NewNode = SLL_CreateNode(119);
	SLL_AppendNode(&List, NewNode);

	NewNode = SLL_CreateNode(120);
	SLL_AppendNode(&List, NewNode);

	NewNode = SLL_CreateNode(40);
	SLL_AppendNode(&List, NewNode);

	MyNode = SLL_GetNodeAt(List, i);
	
	print_node(List);
	printf("List[%d] = %d\n", i, MyNode->Data);
}




