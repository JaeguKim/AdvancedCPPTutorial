//============================================================================
// Name        : Function.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test(int value) {
	cout << "Hello: " << value << endl;
}

int main() {

	void (*pTest)(int) = test;

	pTest = &test;

	pTest(8);
	//(*pTest)(8);

	return 0;
}
