#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Name;
	int Salary;
	int Sale;
	float CommissionPercent;
	cout  << "Enter Name : ";
	cin >>Name;
	cout << "Enter Salary : ";
	cin >>Salary;
	cout << "Enter Sale : ";
	cin >>Sale;
	cout << "Enter Commission Percent : ";
	cin >>CommissionPercent;
	cout << "--------output-------"<<endl;
	cout << "Your name = "<<Name <<endl;
	cout << "Total Revenue"<<Salary+(Sale*(CommissionPercent/100))<<"bath"<<endl;
	system("pause");
	return(0);
}