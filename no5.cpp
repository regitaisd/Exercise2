//programming challenge no.5
#include <iostream>
using namespace std;

int main(){
	float male, female;
	
	cout << "Enter the number of male students in the class: ";
	cin >> male;
	cout << "Enter the number of female students in the class: ";
	cin >> female;
	
	float total = male + female;
	float fractionMale = male / total;
	float fractionFemale = female / total;
	float percentageMale = fractionMale * 100;
	float percentageFemale = fractionFemale * 100;
	
	cout << "The total number of students is: " << total << endl;
	cout << "The percentage of males in a class of " << total << " is: " << percentageMale << "%" << endl;
	cout << "The percentage of females in a class of " << total << " is: " << percentageFemale << "%" << endl;
	
	return 0;
}
