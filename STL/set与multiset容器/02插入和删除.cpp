#include <iostream>
#include <set>

using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	set<int> s;
	cout << "s.size(): " << s.size() << endl;
	int num[] = { 10, 20,3,0,5,4,6,11,7,23, 23, 10, 3, 4, 11, 18 };
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		s.insert(num[i]);
	}
	printSet(s);

	set<int> s1(s);
	set<int>::iterator it = s1.erase(s1.begin());
	printSet(s1);
	cout << "*it: " << *it << endl;
	s1.erase(++s1.begin(), --s1.end());
	printSet(s1);
	cout << "s.size(): " << s1.size() << endl;

}