#include <iostream>
using namespace std;

class BinarySearchTreeNode {
public:
	int data;
	BinarySearchTreeNode* left;
	BinarySearchTreeNode* right;

	BinarySearchTreeNode(int value);	//	构造数据节点

};

BinarySearchTreeNode::BinarySearchTreeNode(int value) {
	data = value;
	left = NULL;
	right = NULL;
}

//	中序遍历二叉树
void inOrder(BinarySearchTreeNode* root) {
	if (root == NULL) {
		return;
	}

	inOrder(root->left);	//	先遍历左节点
	cout << root->data << ", ";	//	先访左子树，再访问数据，称为中序遍历
	inOrder(root->right);
}

//	树根的左子树均要小于树根；树根的右子树，均要大于树根。对于任意一个节点及其子树，均要求满足二叉搜索树的要求。
//	给二叉搜索树添加节点
void addNode(BinarySearchTreeNode* root, int value) {
	//	如果值小于根，在左子树上添加
	if (root->data > value) {
		//	如果左子树为空树，直接添加节点。
		if (root->left == NULL) {
			root->left = new BinarySearchTreeNode(value);
		}
		//	如果左子树不空，将值添加到左孩子作为根节点的二叉搜索树树上，
		else {
			addNode(root->left, value);
		}
	}
	//	如果值大于根，在右子树上添加
	else if (root->data < value) {
		//	如果右子树为空树，直接添加节点。
		if (root->right == NULL) {
			root->right = new BinarySearchTreeNode(value);
		}
		//	如果右子树不空，将值添加到右孩子作为根节点的二叉搜索树树上，
		else {
			addNode(root->right, value);
		}
	}
}

int my_count = 0;

//	查找节点
bool searchBST(BinarySearchTreeNode* root, int value) {
	my_count++;
	if (root == NULL) {
		return false;
	}
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

//	找出最大值所在的节点
BinarySearchTreeNode* findMax(BinarySearchTreeNode* root) {
	while (root->right != NULL) root = root->right;
	return root;
}

//	找出最小值所在的节点
BinarySearchTreeNode* findMin(BinarySearchTreeNode* root) {
	while (root->left != NULL) root = root->left;
	return root;
}
//	找出最大值所在的节点
BinarySearchTreeNode* createBST(int a[], int len) {
	BinarySearchTreeNode* root = new BinarySearchTreeNode(a[0]);
	for (int i = 1; i < len; i++) {
		addNode(root, a[i]);
	}
	return root;
}

//	释放树占用的内存使用后续遍历
void deleteBST(BinarySearchTreeNode* root) {
	if (root == NULL) {
		return;
	}
	deleteBST(root->left);
	deleteBST(root->right);
	delete root;
}

//	删除二叉搜索树上包含value的节点

BinarySearchTreeNode* removeNode(BinarySearchTreeNode* root, int value) {
	if (root == NULL) {
		cout << "没找到要删除节点" << endl;
	}
	else if (root->data > value) {
		root->left = removeNode(root->left, value);
	}
	else if (root->data < value) {
		root->right = removeNode(root->right, value);
	}
	else
	{
		BinarySearchTreeNode* temp = NULL;
		//	删除操作
		if (root->left != NULL && root->right != NULL) //	既有左子树又有右子树
		{
			temp = findMax(root->left);
			root->data = temp->data;
			root->left = removeNode(root->left, root->data);
		}
		else //	要么是叶子，要么只有一个分支
		{
			temp = root;
			if (root->left == NULL) {
				root = root->right;
			}
			else if (root->right == NULL) {
				root = root->left;
			}
			delete temp;
		}
	}
	return root;
}

//	平衡二叉树
//	计算二叉树的高度
int calculateHeight(BinarySearchTreeNode* root) {
	if (root == NULL) return 0;
	return max(calculateHeight(root->left), calculateHeight(root->right)) + 1;
}

//	判断是否为平衡二叉树
bool isBalacned(BinarySearchTreeNode* root) {
	//	空树是平衡二叉树
	if (root == NULL) {
		return true;
	}
	//	左右两个子树的高度差的绝对值小于等于1是平衡二叉树，否则不是
	if (abs(calculateHeight(root->left) - calculateHeight(root->right)) > 1) {
		return false;
	}
	//	左右两个子树都是一颗平衡二叉树
	return isBalacned(root->left) && isBalacned(root->right);
}

void testBalance() {

	//int a[] = { 7,4,5,6,1,8,9 }; 是
	//	int a[] = { 1,2,3 }; // 不是
	int a[] = { 2,1,3 };	//	是
	int len = sizeof(a) / sizeof(int);
	//	创建二叉搜索树
	BinarySearchTreeNode* root = createBST(a, len);
	cout << isBalacned(root) << endl;
}

int main() {
	int a[] = { 7,4,5,6,1,8,9 };
	int len = sizeof(a) / sizeof(int);
	//	创建二叉搜索树
	BinarySearchTreeNode* root = createBST(a, len);
	//	中序遍历得到升序数组
	inOrder(root);

	my_count = 0;
	cout << endl << "searchBST(root, 7): " << searchBST(root, 7) << endl;
	cout << "my_count: " << my_count << endl;

	my_count = 0;
	cout << endl << "searchBST(root, 6): " << searchBST(root, 6) << endl;
	cout << "my_count: " << my_count << endl;

	my_count = 0;
	cout << endl << "searchBST(root, 10): " << searchBST(root, 10) << endl;
	cout << "my_count: " << my_count << endl;

	cout << "findMax(root)->data: " << findMax(root)->data << endl;
	cout << "findMin(root)->data: " << findMin(root)->data << endl;

	//removeNode(root, 5);
	removeNode(root, 4);
	inOrder(root);

	//	释放空间
	deleteBST(root);

	cout << endl;
	testBalance();
	return 0;
}