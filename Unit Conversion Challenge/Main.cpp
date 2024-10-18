#include <iostream>
using namespace std;

int main()
{
	cout << "Input length in inches" << endl;
	float numIn;
	cin >> numIn;

	float numFt = numIn / 12.0f;
	cout << numIn << " in = " << numFt << " ft" << endl;

	cout << "Convert length to meters? (Y) for Yes, (N) for No" << endl;
	string ans;
	cin >> ans;
	if (ans == "Y") {
		float numM = numIn * 0.0254f;
		cout << numIn << " in = " << numM << " m";
	}

}