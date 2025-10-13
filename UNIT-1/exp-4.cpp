#include<iostream>

using namespace std;

void great(string name = "Guest",int times=1)
{
	for (int i=0; i<times;i++){
		cout<<"Hello," <<name<< "!"<<endl;
	}
}
int main()
{
	great();
	great("Kalyani");
	great("Mahitha",3);
	return 0;
}