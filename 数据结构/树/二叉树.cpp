#include <iostream>
#include "BinaryTree.h"
using namespace std;


int main() {
	BinaryTreeNode* root = createBinaryTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout << "calculateLeafNum(root): " << calculateLeafNum(root) << endl;

	cout << "test(root): " << test(root) << endl;
	cout << "calculateHeight(root): " << calculateHeight(root) << endl;



	deleteTree(root);

	return 0;
}