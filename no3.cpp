//programming challenge no.3
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float score1, score2, score3, score4, score5;
	float totalScore;
	float avgScore;
	
	cout << "Please input five test scores: ";
	cin >> score1 >> score2 >> score3 >> score4 >> score5;
	totalScore = score1 + score2 + score3 + score4 + score5;
	avgScore = totalScore / 5;
	
	cout << setprecision(1) << fixed << showpoint << right;
	cout << "The average score of the five test scores is: " << avgScore;
	
	return 0;
}
