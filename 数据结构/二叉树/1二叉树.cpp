#include <iostream>
using namespace std;

class BinaryTreeNode {
public:
	int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;
	BinaryTreeNode(int value = 0) {
		this->data = value;
		left = nullptr;
		right = nullptr;
	}

};
BinaryTreeNode* createBinaryTree(){
	BinaryTreeNode* a = new BinaryTreeNode(1);
	BinaryTreeNode* b = new BinaryTreeNode(2);
	BinaryTreeNode* c = new BinaryTreeNode(3);

	a->left = b;
	a->right = c;

	BinaryTreeNode* d = new BinaryTreeNode(4);
	BinaryTreeNode* e = new BinaryTreeNode(5);
	BinaryTreeNode* f = new BinaryTreeNode(6);
	BinaryTreeNode* g = new BinaryTreeNode(7);

	b->left = d;
	b->right = e;
	c->left = f;
	c->right = g;

	BinaryTreeNode* h = new BinaryTreeNode(8);
	BinaryTreeNode* i = new BinaryTreeNode(9);
	BinaryTreeNode* j = new BinaryTreeNode(10);
	BinaryTreeNode* k = new BinaryTreeNode(11);

	d->left = h;
	d->right = i;
	e->left = j;
	e->right = k;
	return a;
}
//  DLR：先序遍历，先根再左再右
void preOrder(BinaryTreeNode* root) {
	if (root == nullptr) return;
	cout << root->data << " ";	//  先访问数据节点
	preOrder(root->left);		//  先访问左子树
	preOrder(root->right);		//  再访问右子树
}
//  LDR：中序遍历，先左再根再右
void inOrder(BinaryTreeNode* root) {
	if (root == nullptr) return;
	inOrder(root->left);		//  访问左子树
	cout << root->data << " ";	//  数据节点
	inOrder(root->right);		//	再访问右子树
}
//	LRD：中序遍历，先左再右再根
void postOrder(BinaryTreeNode* root) {
	if (root == nullptr) return;
	postOrder(root->left);			//	访问左子树
	postOrder(root->right);			//  访问右子树
	cout << root->data << " ";	//  数据节点
}
//  删除树的节点使用后序遍历
void deleteTree(BinaryTreeNode* root) {
	if (root == nullptr) {
		return;
	}
	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
}
//  计算二叉树中叶子节点数
int calculateLeafNum(BinaryTreeNode* root) {
	if (root == nullptr) return 0;
	if (root->left == nullptr && root->right == nullptr) return 1;
	return calculateLeafNum(root->left) + calculateLeafNum(root->right);
}

//  计算二叉树的高度
int calculateHeight(BinaryTreeNode* root) {
	if (root == nullptr) return 0;
	return max(calculateHeight(root->left), calculateHeight(root->right)) + 1;
}

int main() {
	BinaryTreeNode* root = createBinaryTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	cout << calculateLeafNum(root) << endl;
	cout << calculateHeight(root) << endl;

	deleteTree(root);
	return 0;
}