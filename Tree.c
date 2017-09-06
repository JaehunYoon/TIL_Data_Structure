#include <stdio.h>

void preorder(char tree[], int index);
void inorder(char tree[], int index);
void postorder(char tree[], int index);

void main()
{
	char arr[100] = { '\0','A','B','C','D','E','\0','G','\0','H','I','\0','\0'};
	
	printf("전위 순회 \n");
	preorder(arr, 1);
	printf("\n\n");

	printf("중위 순회 \n");
	inorder(arr, 1);
	printf("\n\n");

	printf("후위 순회 \n");
	postorder(arr, 1);
	printf("\n\n");
}

void preorder(char tree[], int index)
{
	if (tree[index] != '\0')
	{
		printf("%c ", tree[index]);
		preorder(tree, index * 2);
		preorder(tree, index * 2 + 1);
	}
}

void inorder(char tree[], int index)
{
	if (tree[index] != '\0')
	{
		inorder(tree, index * 2);
		printf("%c ", tree[index]);
		inorder(tree, index * 2 + 1);
	}
}

void postorder(char tree[], int index)
{
	if (tree[index] != '\0')
	{
		inorder(tree, index * 2);
		inorder(tree, index * 2 + 1);
		printf("%c ", tree[index]);
	}
}