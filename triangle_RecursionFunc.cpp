#include <iostream>

using namespace std;

void pattern(int height, char symbol, int swtch) {

	if (swtch == 1 && height>0) {
		pattern(height - 1, symbol, 1);
	}


	if (height > 0) {

		pattern(height - 1, symbol, 0);
		cout << symbol;
	}
	else {
		cout << "\n";
	}


}

int main() {
	int height;
	char symbol;

	cout << "Height : ";
	cin >> height;

	cout << "symbol : ";
	cin >> symbol;


	pattern(height , symbol, 1);

	cout << endl;

	return 0;
}
