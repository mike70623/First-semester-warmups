#include <iostream>
using namespace std;

int main() {
	int gasoline;
	int size;
	int cost;
	cost = gasoline*size;
	cout << "what is the price of gasoline?" << endl;
	cin >> gasoline;
	cout << "what is the approximate size of you tank" << endl;
	cin >> size;
	cout << "your estimate is $" << cost << endl;
}