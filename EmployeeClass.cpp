#include <iostream>
using namespace std;
#define MAX 10
class Employee
{
	private:
		char id;
		char name;
		float salary;
	public:
		void getDetails(void);
		void putDetails(void);
		float paySocialInsurance();
};

void Employee::getDetails(void)
{
	cout << "Enter id: ";
	cin >> id;
	cout << "Enter name: ";
	cin >> id;
	cout << "Enter salary: ";
	cin >> salary;
}

float Employee::paySocialInsurance()
{
	float socialinsurance = 0;
	if(salary < 500000)
		socialinsurance = (salary*1.3)/100;
	else
		socialinsurance = (salary*1.5)/100;
	return socialinsurance;
}

void Employee::putDetails(void)
{
    cout << "ID: " << id << "\nName: " << name << "\nSalary: " << salary << "\nSocial insurance premium: " << paySocialInsurance() << endl;
}

int main()
{
	Employee employee [MAX];
	int n,loop;
	cout << "Enter total number of employee: ";
	cin >> n;
	for(loop = 0; loop < n; loop++){
		cout << "Enter details of employee: " << loop + 1 <<"\n";
		employee[loop].getDetails();
	}
	for(loop = 0; loop < n; loop ++){
		cout << endl << "Detail of employee " << (loop+1) << ":\n";
		employee[loop].putDetails();
	}
	return 0;
}



















