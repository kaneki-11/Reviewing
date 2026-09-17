#include <iostream>
using namespace std;

class A1
{
public:
	void f1() {};
private:
	int _a;
};

class A2
{
public:
	void f1() {};
};

class A3
{
};


void size()
{
	cout << "sizeof(class A1) = " << sizeof(A1) << endl;
	cout << "sizeof(class A2) = " << sizeof(A2) << endl;
	cout << "sizeof(class A3) = " << sizeof(A3) << endl;
}

void order()
{
	unsigned int a = 0x01020304;
	// 0x010FFDF0  04 03 02 01
}


int main()
{
	//size();
	//sizeof(class A1) = 4
	//sizeof(class A2) = 1
	//sizeof(class A3) = 1

	order();

	return 0;
}