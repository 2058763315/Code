#include <iostream>
using namespace std;

class BinarySearchNode {
public:
	int data;
	BinarySearchNode* left;
	BinarySearchNode* right;

	BinarySearchNode(int value = 0) {
		this->data = value;
		left = nullptr;
		right = nullptr;
	}
};
//  添加节点
void addNode(BinarySearchNode* root, int value) {
	if (root->data > value) {
		if (root->left == nullptr) {
			root->left = new BinarySearchNode(value);
		}
		else {
			addNode(root->left, value);
		}
	}
	else if (root->data < value) {
		if (root->right == nullptr) {
			root->right = new BinarySearchNode(value);
		}
		else {
			addNode(root->right, value);
		}
	}
}

BinarySearchNode* creatSearchTree() {
	int a[] = { 7, 4, 5, 6, 1, 0, 8, 9, 3, 2 };
	int len = sizeof(a) / sizeof(int);
	BinarySearchNode* root = new BinarySearchNode(a[0]);
	for (int i = 1; i < len; i++) {
		addNode(root, a[i]);
	}
	return root;
}

//  先序遍历
void preOrder(BinarySearchNode* root) {
	if (root == nullptr) return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}
//  二叉搜索树中序遍历是个有序数组
void inOrder(BinarySearchNode* root) {
	if (root == nullptr) return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}
//  后序遍历
void postOrder(BinarySearchNode* root) {
	if (root == nullptr) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}
//  计算高度
int treeHeight(BinarySearchNode* root) {
	if (root == nullptr) return 0;
	return max(treeHeight(root->left), treeHeight(root->right)) + 1;
}
//  释放
void deleteTree(BinarySearchNode* root) {
	if (root == nullptr) return;
	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
}
//  找最大值
BinarySearchNode* findMax(BinarySearchNode* root) {
	if (root == nullptr) return 0;
	while (root->right != nullptr) {
		root = root->right;
	}
	return root;
}
//  找最小值
BinarySearchNode* findMin(BinarySearchNode* root) {
	if (root == nullptr) return 0;
	while (root->left != nullptr) {
		root = root->left;
	}
	return root;
}

//  查找节点
bool findNode(BinarySearchNode* root, int value) {
	if (root == nullptr) return false;
	if (root->data == value) return true;
	if (value < root->data) {
		findNode(root->left, value);
	}
	else if(value > root->data){
		findNode(root->right, value);
	}
}

//  删除二叉搜索树上的某个节点
BinarySearchNode* remove(BinarySearchNode* root, int value) {
	//  判断是否为空树
	if (root == nullptr) return root;
	//  value大于根节点，要删除的在右侧
	if (root->data < value) {
		//  根节点的right指针指向删除后的右子树的根节点
		root->right = remove(root->right, value);
	}
	else if (root->data > value) {
		root->left = remove(root->left, value);
	}
	//  value等于根节点
	else {
		//  左右两个子树都存在
		if (root->left != nullptr && root->right != nullptr) {
			//  找到左子树最大值
			BinarySearchNode* tmp = findMax(root->left);
			//  左子树最大值复值给根节点
			root->data = tmp->data;
			//  在左子树中删除最大值，
			root->left = remove(root->left, root->data);
		}
		else {
			BinarySearchNode* tmp = root;
			//  只有右子树
			if (root->left == nullptr) {
				//  右子树的根节点覆盖当前根节点
				root = root->right;
			}
			//  只有左子树
			else if(root->right == nullptr) {
				//  左子树的根节点覆盖当前根节点
				root = root->left;
			}
			//  删除当前根节点
			delete tmp;
		}
	}
	return root;
}

//  判断是否是平衡二叉树
bool isBlanced(BinarySearchNode* root){
	//  是一颗空树
	if (root == nullptr) return true;
	//  左右两个子树的高度差的绝对值不超过1
	if (abs(treeHeight(root->left) - treeHeight(root->right)) > 1) return false;
	//  左右两个子树都是一颗平衡二叉树
	return isBlanced(root->left) && isBlanced(root->right);
}


int main() {
	BinarySearchNode* root = creatSearchTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout << treeHeight(root) << endl;
	cout << findMin(root)->data << endl;
	cout << findMax(root)->data << endl;

	cout << "findNode: " << findNode(root, 4) << endl;

	remove(root, 7);
	inOrder(root);
	cout << endl;

	cout << isBlanced(root) << endl;

	deleteTree(root);
	return 0;
}