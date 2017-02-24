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
	int i = 0;
	Node* List = NULL;
	Node* NewNode = NULL;

	NewNode = SLL_CreateNode(117);
	SLL_AppendNode(&List, NewNode);

	NewNode = SLL_CreateNode(119);
	SLL_AppendNode(&List, NewNode);

	NewNode = SLL_CreateNode(120);
	SLL_AppendNode(&List, NewNode);

	NewNode = SLL_CreateNode(40);
	SLL_AppendNode(&List, NewNode);

	print_node(List);
}




