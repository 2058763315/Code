#include <iostream>
using namespace std;

/*
04.链式栈
	所有的编译器都有检测括号是否匹配的能力，
	那么如何实现编译器中的括号成对检测？如下的字符串
	1+3+5（std))4*3;
	算法思路：
	1. 从第一个字符开始扫描
	2. 当遇见普通字符时忽略
	3. 当遇见左括号时压入栈中
	4. 当遇见右括号时从栈中弹出栈顶符号，并进行匹配
*/

class LinkStackNode {
public:
	char ch;
	LinkStackNode* next;

	LinkStackNode(int value = 0) {
		this->ch = value;
		next = nullptr;
	}
};

class LinkStack {
private:
	int size;
	LinkStackNode* head;
public:
	LinkStack() {
		size = 0;
		head = new LinkStackNode();
	}
	~LinkStack() {
		LinkStackNode* cur = head;
		while (cur != nullptr) {
			LinkStackNode* tmp = cur;
			cur = cur->next;
			delete tmp;
		}
	}

	void push(int value) {
		LinkStackNode* cur = head;
		LinkStackNode* node = new LinkStackNode(value);
		node->next = cur->next;
		cur->next = node;
		size++;
	}

	void pop() {
		if (size == 0) throw "栈为空";
		LinkStackNode* cur = head;
		LinkStackNode* tmp = head->next;
		head->next = tmp->next;
		delete tmp;
		size--;
	}

	char top() {
		return head->next->ch;
	}

	int getSize() {
		return size;
	}

	bool empty() {
		return size == 0;
	}
};

bool isTrue(string& s) {
	LinkStack lk;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			lk.push(s[i]);
		}
		else if (s[i] == ')' && lk.top() == '(') {
			if (lk.empty()) {
				return false;
			}
			else {
				lk.pop();
			}
		}
		else if (s[i] == ']' && lk.top() == '[') {
			if (lk.empty()) {
				return false;
			}
			else {
				lk.pop();
			}
		}
		else if (s[i] == '}' && lk.top() == '{') {
			if (lk.empty()) {
				return false;
			}
			else {
				lk.pop();
			}
		}
	}
	return lk.empty();
}

int main() {
	string s = "1+3{+[5(std)4}]*3;";
	cout << isTrue(s) << endl;
	return 0;
}