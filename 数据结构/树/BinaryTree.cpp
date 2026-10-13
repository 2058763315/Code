#include <iostream>
#include "BinaryTree.h"
using namespace std;

BinaryTreeNode::BinaryTreeNode(int value) {
	data = value;
	left = NULL;
	right = NULL;
}
/*
					  1
				  /        \
			   2             3
			/      \      /      \
		   4       5     6        7

*/
BinaryTreeNode* createBinaryTree() {
	BinaryTreeNode* a = new BinaryTreeNode(1);
	BinaryTreeNode* b = new BinaryTreeNode(2);
	BinaryTreeNode* c = new BinaryTreeNode(3);
	BinaryTreeNode* d = new BinaryTreeNode(4);
	BinaryTreeNode* e = new BinaryTreeNode(5);
	BinaryTreeNode* f = new BinaryTreeNode(6);
	BinaryTreeNode* g = new BinaryTreeNode(7);
	BinaryTreeNode* h = new BinaryTreeNode(8);
	BinaryTreeNode* i = new BinaryTreeNode(9);
	BinaryTreeNode* j = new BinaryTreeNode(10);

	a->left = b;
	a->right = c;

	b->left = d;
	b->right = e;

	c->left = f;
	c->right = g;

	d->left = h;
	d->right = i;

	e->left = j;
	return a;
}

//  先序遍历二叉树
void preOrder(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";  //  先访问数据节点，称为先序遍历
	preOrder(root->left);  //  先遍历左节点
	preOrder(root->right);
}
//  中序遍历二叉树
void inOrder(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	inOrder(root->left);  //  先遍历左节点
	cout << root->data << " ";  //  中间访问数据节点
	inOrder(root->right);
}
//  后序遍历二叉树
void postOrder(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	postOrder(root->left);  //  先遍历左节点
	postOrder(root->right);
	cout << root->data << " ";  //  最后访问数据节点
}

void deleteTree(BinaryTreeNode* root) {
	if (root == NULL)
		return;
	deleteTree(root->left);
	deleteTree(root->right);
	delete root;  //  使用后序遍历
}

//  计算二叉树中叶子节点的个数
int calculateLeafNum(BinaryTreeNode* root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return 1;
	return calculateLeafNum(root->left) + calculateLeafNum(root->right);
}

int n = 0;
int test(BinaryTreeNode* root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) n++;
	test(root->left);
	test(root->right);
	return n;
}

int calculateHeight(BinaryTreeNode* root) {
	if (root == NULL) return 0;
	return max(calculateHeight(root->left), calculateHeight(root->right)) + 1;

}