#include <iostream>
using namespace std;

class A {
private:
	int val;
public:
	A (int v) {
		val = v;
	}
	A (const A & a) {
		cout << "Const Copy constructor called" << endl;
	}
	A (A & a) {
		cout << "Copy constructor called" << endl;
	}
};

A Func (A a) {
	A aa(4);
	return aa;
}

int main() {
	A a(3);
	A aaa = Func(a);
	return 0;
}
