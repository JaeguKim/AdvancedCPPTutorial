//============================================================================
// Name        : Object.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent {
private:
	int one;
public:

	Parent(): one(0) {

	}

	Parent(const Parent &other): one(0) {
		one = other.one;
		cout << "copy parent" << endl;
	}

	virtual void print() {
		cout << "parent" << endl;
	}

	virtual ~Parent() {

	}
};

class Child: public Parent {
private:
	int two;

public :
	Child(): two(0){

	}

	void print() {
		cout << "child" << endl;
	}
};

int main() {

	Child c1;
	//p1 is dynamic type, polymorphism only works when using pointer, reference
	//actual type is determined in runtime
	Parent &p1 = c1;
	p1.print();

	//p2 is static type, compiler already determined p2 is Parent type
	Parent p2 = Child();
	p2.print();

	return 0;
}
