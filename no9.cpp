//programming challenge no.9
#include <iostream>
using namespace std;

int main(){
	int noOfCookies;
	int cookies = 30;
	int servings = 10;
	int calories = 300;
	
	cout << "How many cookies did you eat today? ";
	cin >> noOfCookies;
	
	int cookiesPerServing = cookies / servings;
	int initialCalorie = calories / cookiesPerServing;
	int totalCalories = noOfCookies * initialCalorie;
	
	cout << "You have consumed a total of " << totalCalories << " calories";
	
	return 0;
}
