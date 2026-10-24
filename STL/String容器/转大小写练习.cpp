#include <iostream>
using namespace std;
int main() {
	//  µ¥¸ö×Ö·û×ª»»
	cout << "toupper('a'): " << (char)toupper('a') << endl;

	string s = "Hello";
	string s1 = "aAa#@";
	string s2 = "AaA#@";
	for (int i = 0; i < s1.size(); i++) {
		s1[i] = toupper(s1[i]);
	}
	cout << "s: " << s1 << endl;
	for (int i = 0; i < s2.size(); i++) {
		s2[i] = tolower(s2[i]);
	}
	cout << "s: " << s2 << endl;
	return 0;
}