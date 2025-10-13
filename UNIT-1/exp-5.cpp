#include <iostream>

using namespace std;
class classA
{
	private: 
	  int sno;
	public:
		int pincode;
	protected:
		int mobno;
};
class classB:public classA
{
	public:
		void disp()
		{
			cout<<"Pincode"<<pincode;
		}
};
int main()
{
	classA ob;
	ob.pincode=112;
	cout<<ob.pincode;
	classB obb;
	obb.disp();
	
	return 0;
}