#pragma once
class BinaryTreeNode {
public:
	int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(int value);

};

BinaryTreeNode* createBinaryTree();

void preOrder(BinaryTreeNode* root);
void inOrder(BinaryTreeNode* root);
void postOrder(BinaryTreeNode* root);

void deleteTree(BinaryTreeNode* root);

int calculateLeafNum(BinaryTreeNode* root);

int test(BinaryTreeNode* root);

int calculateHeight(BinaryTreeNode* root);