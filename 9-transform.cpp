#include <iostream>
using namespace std;
class CBase
{
protected:
	int n;

public:
	CBase(int i) : n(i) {}
	void Print() { cout << "CBase:n=" << n << endl; }
};
class CDerived : public CBase
{
public:
	int v;
	CDerived(int i) : CBase(i), v(2 * i) {}
	void Func(){};
	void Print()
	{
		cout << "CDerived:n=" << n << endl;
		cout << "CDerived:v=" << v << endl;
	}
};
int main()
{
	CDerived objDerived(3);
	CBase objBase(5);
	CBase *pBase = &objDerived;
	pBase->Print();
	cout << "1)------------" << endl;
	CDerived *pDerived = (CDerived *)(&objBase);
	pDerived->Print();
	cout << "2)------------" << endl;
	objDerived.Print();
	cout << "3)------------" << endl;
	pDerived->v = 128;
	objDerived.Print();
	return 0;
}
