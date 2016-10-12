//programming challenge no.1
#include <iostream>
using namespace std;

int main(){
	double gas;
	double distance;
	double gasPerMile;
	
	cout << "enter the amount of gas the car can hold: ";
	cin >> gas;
	cout << "enter the distance you are about to travel: ";
	cin >> distance;
	
	gasPerMile = distance / gas;
	
	cout << "The distance that can be driven per gallon of gas is: " << gasPerMile << " miles";
	return 0;
}

