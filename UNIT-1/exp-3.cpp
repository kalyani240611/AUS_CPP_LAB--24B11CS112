#include<iostream>
using namespace std;
int x = 100;
 namespace myNamespace
{
	int value = 50;
	void show()
	{
		cout<<"Inside My Namespace,value="<<value<<endl;
	}
}
int main()
{
	int x = 10;
	cout<<"local x="<<x<<endl;
	cout<<"Global x="<<::x<<endl;
	cout<<"My Namespacevalue="<< myNamespace::value<<endl;
	myNamespace::show();
	return 0;
}