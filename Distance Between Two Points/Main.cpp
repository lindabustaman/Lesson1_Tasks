#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float pts[4];
	for (int i = 0; i < 2; i ++) {
		cout << "Input x" << i + 1 << endl;
		cin >> pts[i];
		
	}
	for (int i = 0; i < 2; i++) {
		cout << "Input y" << i + 1 << endl;
		cin >> pts[i+2];
		
	}

	float distance = sqrt(pow(pts[1] - pts[0], 2) + pow(pts[3] - pts[2], 2));

	cout << "Distance is " << distance << endl;
	
}


