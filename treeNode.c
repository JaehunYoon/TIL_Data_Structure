#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode
{
	char data;
	struct treeNode* left;
	struct treeNode* right;
} treeNode;

treeNode* makenode(char data, treeNode* leftN, treeNode* rightN)
{
	treeNode* node = (treeNode*)malloc(sizeof(treeNode));
	node->data = data;
	node->left = leftN;
	node->right = rightN;

	return node;
}

void preorder(treeNode* root);
void inorder(treeNode* root);
void postorder(treeNode* root);

void main()
{
	treeNode* n7 = makenode('G', NULL, NULL);
	treeNode* n6 = makenode('F', NULL, NULL);
	treeNode* n5 = makenode('E', NULL, NULL);
	treeNode* n4 = makenode('D', NULL, NULL);
	treeNode* n3 = makenode('C', n6, n7);
	treeNode* n2 = makenode('B', n4, n5);
	treeNode* n1 = makenode('A', n2, n3);

	printf("전위 순회\n");
	preorder(n1);
	printf("\n\n");

	printf("중위 순회\n");
	inorder(n1);
	printf("\n\n");

	printf("후위 순회\n");
	postorder(n1);
	printf("\n\n");
}

void preorder(treeNode* root)
{
	if (root)
	{
		printf("%c ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(treeNode* root)
{
	if (root)
	{
		inorder(root->left);
		printf("%c ", root->data);
		inorder(root->right);
	}
}

void postorder(treeNode* root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%c ", root->data);
	}
}