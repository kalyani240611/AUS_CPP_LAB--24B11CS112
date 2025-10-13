#include<iostream>
using namespace std;

class student
{
	int id;
	public:Student(int i)
	{ 
	  id = i;
	  cout<<"Constructor called\n";
	}
	Student(const student &s) //Copy constructor
	{
		id = s.id;
		cout<<"Copy constructor called\n";
	}
	void display()
	{
		cout<<"ID:"<<id<<endl;
	}
};
int main() {
student s1(10);  //constructor
student s2=s1;    //copy constructor
s1.display();
s2.display();
return 0;
}