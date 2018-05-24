//============================================================================
// Name        : Initialization.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int value{5};

	cout << value << endl;

	string text{"Hello"};
	cout << text << endl;

	int numbers[]{1,2,4};
	cout << numbers[1] << endl;

	int *pInts = new int[3]{1,2,3};
	cout << pInts[1] << endl;
	delete pInts;

	int value1{};
	cout << value1 << endl;

	int *pSomething{}; // equivalent to int *pSomerthing = nullptr;
	cout << pSomething << endl;

	int numbers1[5]{};
	cout << numbers1[1] << endl;

	struct {
		int value;
		string text;
	} s1{5, "Hi"};

	vector<string> strings{"one", "two", "three"};

	cout << strings[2] << endl;

	cout << s1.text << endl;
	return 0;
}
