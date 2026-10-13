#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

BinarySearchTreeNode::BinarySearchTreeNode(int value) {
	data = value;
	left = NULL;
	right = NULL;
}
/*
					  7
				  /        \
			   4            8
			/      \            \
		   1        5            9
	     /    \       \
		0	   3	    6
*/
void addNode(BinarySearchTreeNode* root, int value) {
	//  如果值小于根，在左子树上添加
	if (root->data > value) {
		//  如果左子树为空树，直接添加节点
		if (root->left == NULL) {
			root->left = new BinarySearchTreeNode(value);
		}
		//  如果左子树不空，将值添加到左孩子作为根节点的二叉搜索树上
		else {
			addNode(root->left, value);
		}
	}
	else if(root->data < value){
		if (root->right == NULL) {
			root->right = new BinarySearchTreeNode(value);
		}
		else {
			addNode(root->right, value);
		}
	}
}
BinarySearchTreeNode* createBST(int a[], int len) {

	BinarySearchTreeNode* root = new BinarySearchTreeNode(a[0]);
	for (int i = 1; i < len; i++) {
		addNode(root, a[i]);
	}
	return root;
}

int num = 0;
//  查找节点
bool searchBST(BinarySearchTreeNode* root, int value) {
	num++;
	if (root == NULL) return false;
	if (root->data == value) {
		return true;
	}
	if (root->data > value) {
		return searchBST(root->left, value);
	}
	else {
		return searchBST(root->right, value);
	}
}

BinarySearchTreeNode* findMax(BinarySearchTreeNode* root) {
	if (root == NULL) return 0;
	while (root->right != NULL)
		root = root->right;
	return root;

}
BinarySearchTreeNode* findMin(BinarySearchTreeNode* root) {
	if (root == NULL) return 0;
	while (root->left != NULL)
		root = root->left; 
	return root;
}

BinarySearchTreeNode* removeNode(BinarySearchTreeNode* root, int value) {
	BinarySearchTreeNode* temp;
	if (root == NULL) cout << "没有找到" << endl;
	else if (root->data > value) {
		root ->left = removeNode(root->left, value);
	}
	else if(root->data < value){
		root->right = removeNode(root->right, value);
	}
	else {
		if (root->left != NULL && root->right != NULL) {
			temp = findMax(root->left);
			root->data = temp->data;
			root->left = removeNode(root->left, root->data);

		}
		else {
			temp = root;
			if (root->left == NULL) {
				root = root->right;
			}
			else if(root->right == NULL) {
				root = root->left;
			}
			delete temp;
		}
	}
	return root;
}

//  先序遍历二叉树
void preOrder(BinarySearchTreeNode* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";  //  先访问数据节点，称为先序遍历
	preOrder(root->left);  //  先遍历左节点
	preOrder(root->right);
}
//  中序遍历二叉树
void inOrder(BinarySearchTreeNode* root) {
	if (root == NULL) {
		return;
	}

	inOrder(root->left);  //  先遍历左节点
	cout << root->data << " ";  //  中间访问数据节点
	inOrder(root->right);
}
//  后序遍历二叉树
void postOrder(BinarySearchTreeNode* root) {
	if (root == NULL) {
		return;
	}

	postOrder(root->left);  //  先遍历左节点
	postOrder(root->right);
	cout << root->data << " ";  //  最后访问数据节点
}

void deleteBST(BinarySearchTreeNode* root) {
	if (root == NULL)
		return;
	deleteBST(root->left);
	deleteBST(root->right);
	delete root;  //  使用后序遍历
}

//  计算二叉树中叶子节点的个数
int calculateLeafNum(BinarySearchTreeNode* root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return 1;
	return calculateLeafNum(root->left) + calculateLeafNum(root->right);
}

int calculateHeight(BinarySearchTreeNode* root) {
	if (root == NULL) return 0;
	return max(calculateHeight(root->left), calculateHeight(root->right)) + 1;

}
