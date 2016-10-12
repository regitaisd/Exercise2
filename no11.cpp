//programming challenge no.11
#include <iostream>
using namespace std;

int main(){
	float loanPayment;
	float insurance;
	float oil;
	float tires;
	float maintenance;
	
	cout << "Please input the amount you spent on loan payment:";
	cin >> loanPayment;
	cout << "Please input the amount you spent on insurance:";
	cin >> insurance;
	cout << "Please input the amount you spent on oil:";
	cin >> oil;
	cout << "Please input the amount you spent on tires:";
	cin >> tires;
	cout << "Please input the amount you spent on maintenance:";
	cin >> maintenance;
	
	float monthlySum = loanPayment + insurance + oil + tires + maintenance;
	float annualPay = monthlySum * 12;
	
	cout << "The total monthly cost of these expenses is: $ " << monthlySum << endl;
	cout << "The annual cost is: $ " << annualPay << endl;
	
	return 0;
}
