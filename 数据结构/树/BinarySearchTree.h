#pragma once
#pragma once
class BinarySearchTreeNode {
public:
	int data;
	BinarySearchTreeNode* left;
	BinarySearchTreeNode* right;

	BinarySearchTreeNode(int value);

};

BinarySearchTreeNode* createBST(int a[], int len);
BinarySearchTreeNode* findMax(BinarySearchTreeNode* root);
BinarySearchTreeNode* findMin(BinarySearchTreeNode* root);
void preOrder(BinarySearchTreeNode* root);
void inOrder(BinarySearchTreeNode* root);
void postOrder(BinarySearchTreeNode* root);

void deleteBST(BinarySearchTreeNode* root);

int calculateLeafNum(BinarySearchTreeNode* root);

int calculateHeight(BinarySearchTreeNode* root);

bool searchBST(BinarySearchTreeNode* root, int value);

BinarySearchTreeNode* removeNode(BinarySearchTreeNode* root, int value);
