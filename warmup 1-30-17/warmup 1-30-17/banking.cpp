#include <iostream>
using namespace std;
int main() {
	int money;
	int charge;
	int total;
	cout << "how mush would you like to widthdraw?" << endl;
		cin >> charge;
		money = 1000.00;
		total = money - charge;
		cout << "your new total is $" << total << endl;
		cout << "have a nice day!" << endl;

}