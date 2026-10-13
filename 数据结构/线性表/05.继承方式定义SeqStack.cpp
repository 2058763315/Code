#include<iostream>
#include "SeqStack.h"
using namespace std;

int main() {
	SeqStack seqStak;
	for(int i = 0; i < 10; i++) seqStak.push(i);	
	cout << "seqStak.getSize():" << seqStak.getSize() << endl;
	cout << "seqStak.top():" << seqStak.top() << endl;
	cout << "seqStak.top():" << seqStak.top() << endl;
	seqStak.pop();
	cout << "seqStak.top():" << seqStak.top() << endl;
	cout <<	"seqStak.empty(): " << seqStak.empty() << endl;
	seqStak.clear();
	cout << "seqStak.empty(): " << seqStak.empty() << endl;

	seqStak.push(100);
	cout << "seqStak.getSize():" << seqStak.getSize() << endl;
	cout << "seqStak.top():" << seqStak.top() << endl;
	cout << "seqStak.empty(): " << seqStak.empty() << endl;

	return 0;
}