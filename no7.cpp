//programming challenge no.7
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	const float adultPrice = 10.00;
	const float childPrice = 6.00;
	int adultTicket, childTicket;
	string moviename;
	float gross, net, distributor;
	
	cout << "Movie name:" << "\t\t\t";
	getline(cin, moviename);
	cout << "Adult tickets sold:" << "\t\t";
	cin >> adultTicket;
	cout << "Child tickets sold:" << "\t\t";
	cin >> childTicket;
	
	float adultTotal = adultPrice * adultTicket;
	float childTotal = childPrice * childTicket;
	gross = adultTotal + childTotal;
	net = 0.2 * gross;
	distributor = gross - net;
	
	cout << setprecision(2) << fixed;
	cout << "Gross Box Office Profit:" << setw(8) << "$ " << gross << endl;
	cout << "Net Box Office Profit:" << setw(10) << "$ " << net << endl;
	cout << "Amount Paid to Distributor:" << setw(5) << "$ " << distributor << endl;
	
	return 0;
}
