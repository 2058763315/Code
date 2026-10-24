#include <iostream>
using namespace std;

int main() {
	string s1 = "C++";
	string s2 = "C++";
	string s3 = "C++A";
	string s4 = "C++B";
	//  int compare(const string & s);
	cout << "s1.compare(s2): " << s1.compare(s2) << endl;  //  s1与s2等，返回0
	cout << "s1.compare(s2): " << s4.compare(s3) << endl;  //  s4比s3大，返回1
	cout << "s1.compare(s2): " << s2.compare(s3) << endl;  //  s2比s3小，返回-1

	cout << "s4.compare(\"C++C\"): " << s4.compare("C++C") << endl;
	
	return 0;
}