#include<iostream>
#include<list>	
using namespace std;

int main() {
	//	list<T> ls(n, element) 构造ls时，将n个element拷贝给ls
	list<int> ls1(3, 10);

	//	list& operator=(const list& ls)
	list<int> ls2;	 //	默认构造创建ls2，长度为0
	cout << "ls2.size(): " << ls2.size() << endl;
	ls2 = ls1;	//	使用=赋值，长度和ls1相同，为3
	cout << "ls2.size(): " << ls2.size() << endl;

	//	assign(ls.beg(), ls.end()) 将参数ls[begin(), end())区间中的元赋值给动态数组
	//	list的位置指针不允许使用+1操作,ls1.begin()+1会报错。
	ls2.assign(ls1.begin(), ls1.end());	//	第一个参数为 ls1的起始，第二个参数为ls1的结尾，区间共有两个元素，长度为3
	cout << "ls2.size(): " << ls2.size() << endl;

	//	assign(n, element) 将n个element赋值给动态数组
	ls2.assign(100, 9); //	100个9赋值给ls2，ls2长度为100
	cout << "ls2.size(): " << ls2.size() << endl;

	return 0;
}