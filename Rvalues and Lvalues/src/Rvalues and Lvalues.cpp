
#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int * _pBuffer;

public:
	Test() {
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE]{};
	}

	Test(int i) {
		cout << "parameterized constructor" << endl;
		_pBuffer = new int[SIZE]{};

		for (int i=0; i < SIZE; i++) {
			_pBuffer[i] = 7*i;
		}
	}

	Test(const Test &other) {
		cout << "copy constructor" << endl;

		_pBuffer = new int[SIZE]{};

		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
	}

	Test &operator=(const Test &other) {
		cout << "assignment" << endl;

		_pBuffer = new int[SIZE]{};

		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
		return *this;
	}

	~Test() {
		cout << "destructor" << endl;

		delete [] _pBuffer;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

int main() {

	Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	int value1 = 7;

	/* @ &연산자는 Lvalue에 대해서만 가능 */
	int *pValue1 = &value1; //value1 은 Lvalue
	//int *pValue2 = &7; //7은 Rvalue

	Test *pTest1 = &test1; //test1 은 Lvalue
	//Test *pTest2 = &getTest(); //getTest()는 Rvalue

	int * pValue3 = &++value1; //++value1은 Lvalue
	cout << *pValue3 << endl;

	//int *pValue4 = &value1++; //value1++은 Rvalue

	//int * s = &(7 + value1); // 7 + value은 Rvalue
	return 0;
}
