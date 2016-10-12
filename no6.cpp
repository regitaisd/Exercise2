//programming challenge no.6
#include <iostream>
using namespace std;

int main(){
	float cookies;
	float sugar = 1.5 / 48;
	float butter = 1;
	float flour = 2.75 / 48;
	float amountOfCookies;
	
	float butterNew = butter / 48;
	
	cout << "Insert the amount of cookies that you want to make: ";
	cin >> amountOfCookies;
	
	float newSugar = sugar * amountOfCookies;
	float newButter = butterNew * amountOfCookies;
	float newFlour = flour * amountOfCookies;
	
	cout << "The amount of sugar that you need is: " << newSugar << " cups" << endl;
	cout << "The amount of butter that you need is: " << newButter << " cups" << endl;
	cout << "The amount of flour that you need is: " << newFlour << " cups" << endl;
}
