#include <iostream>
#include <stdio.h>
using namespace std;
class Person
{
	string id;
	public:
	Person(){
		id = "000";
	}
	Person (string id){
		this->id = id;
	}
	Person(const Person &t)
	{
		cout<<"Copy constructor called "<< endl;
	}
	
	Person& operator = (const Person &t)
	{
		cout<<"Assigment operator called "<<endl;
		return *this;
	}
};

int main()
{
	Person person1;
	Person t1, t2;
	t2 = t1;
	Person t3 = t1;
	getchar();
	return 0;
}
