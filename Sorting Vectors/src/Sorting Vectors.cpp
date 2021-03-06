//============================================================================
// Name        : Sorting.cpp
// Author      : JK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class Test {
	int id;
	string name;

public:
	Test(int id, string name) : id(id), name(name) {}

	void print() {
		cout << id << ": " << name << endl;
	}

	bool operator<(const Test &other) const {
		return name < other.name;
	}

	//이 프로토타입과 같으면 private멤버에 접근
	friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b) {
	return a.name < b.name;
}

int main() {

	vector<Test> tests;

	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));
	tests.push_back(Test(3, "Vicky"));

	//sort(tests.begin(), tests.end(), comp);
	//sort(tests.begin(), tests.begin() + 3, comp);
	sort(tests.begin(), tests.end());

	for (int i=0; i < tests.size(); i++) {
		tests[i].print();
	}

	return 0;
}
