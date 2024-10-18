#include <iostream>
using namespace std;

int main()
{
	float sum = 0;
	float num = 0;

	//Ask user how many numbers they want to average in total
	cout << "How many numbers do you want to average?" << endl;
	int totalNum;
	cin >> totalNum;

	//Add each inputted number to the sum variable 
	for (int i = 0; i < totalNum; i++) {
		cout << "Input a number" << endl;
		cin >> num;
		sum = sum + num;

	}

	//Divide sum variable by total number of inputs to produce average
	float avg = sum / totalNum;

	//Print average to console 
	cout << "Average is " << avg << endl;

}