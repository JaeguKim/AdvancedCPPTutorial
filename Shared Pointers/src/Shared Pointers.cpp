//============================================================================
// Name        : Shared.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
public :
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destoryed" << endl;
	}
};

int main() {

	shared_ptr<Test> pTest2(nullptr);

	{
		shared_ptr<Test> pTest1 = make_shared<Test>();

		pTest2 = pTest1;

		auto pTest3 = pTest2;
	}

	cout << "Finished" << endl;
	return 0;
}
