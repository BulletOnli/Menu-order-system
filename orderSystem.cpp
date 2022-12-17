#include <iostream>
using namespace	std;

int main() {
    string menu[5] = {"Hotdog", "Siomai", "Coke", "Buko", "Adobo"};
	int menuPrice[5] = {20, 15, 10, 5, 30};
	int total = 0;

    cout << "Menu:" << endl;
    cout << "0: " << menu[0] << " - P" << menuPrice[0] << endl;
    cout << "1: " << menu[1] << " - P" << menuPrice[1] << endl;
    cout << "2: " << menu[2] << " - P" << menuPrice[2] << endl;
    cout << "3: " << menu[3] << " - P" << menuPrice[3] << endl;
    cout << "4: " << menu[4] << " - P" << menuPrice[4] << endl;

	cout << "******************************" << endl;

	int x;

	cout << "How many orders: ";
	cin >> x;

    int *orders = new int[x];

	// Input order
	for (int i = 0; i < x; i++) {
		cout << "Enter your order: ";
		cin >> orders[i];
	}

	cout << "******************************" << endl;

	// Final orders
	cout << "Your Order:" << endl;
	for (int i = 0; i < x; i++) {
		cout << "Order #" << i << ": " << menu[orders[i]] << " - P" << menuPrice[orders[i]] << endl;
		total += menuPrice[orders[i]];
	}

	cout << endl; // space / breakline

	// Total
	cout << "Total: P" << total;

	return 0;
}