#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

extern int num;

bool isBalacned(BinarySearchTreeNode* root) {
	if (root == NULL) {
		return true;
	}
	if (abs(calculateHeight(root->left) - calculateHeight(root->right)) > 1) {
		return false;
	}
	return isBalacned(root->left) && isBalacned(root->right);
}

int main() {
	int a[] = { 7, 4, 5, 6, 1, 0, 8, 9, 3, 2};
	int len = sizeof(a) / sizeof(int);
	//  创建二叉搜索树
	BinarySearchTreeNode* root = createBST(a, len);

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	cout << "searchBST(root, 7): " << searchBST(root, 7) << endl;
	cout << "num: " <<  num << endl;
	cout << "findMax(root)->data: " << findMax(root)->data << endl;
	cout << "findMin(root)->data: " << findMin(root)->data << endl;

	removeNode(root, 4);
	inOrder(root);
	cout << endl << endl;
	
	deleteBST(root);

	int a1[] = { 7, 4, 5, 6, 1, 0, 8, 9, 3 };
	int len1 = sizeof(a1) / sizeof(int);
	//  创建二叉搜索树
	BinarySearchTreeNode* root1 = createBST(a1, len1);
	preOrder(root1);
	cout << endl;
	cout << "isBalacned(root): " << isBalacned(root1) << endl;

	deleteBST(root1);
	return 0;
}