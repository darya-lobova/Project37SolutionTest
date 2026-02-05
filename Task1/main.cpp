#include "logic.h"

int main() {

	int x1, y1;
	int x2, y2;

	do {
		cout << "**************************************" << endl;
		cout << "Input coordinates of the first field: ";
		cin >> x1 >> y1;

		cout << "Input coordinates of the second field: ";
		cin >> x2 >> y2;
	} while (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8
		|| x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8);

	bool result = is_color_the_same(x1, y1, x2, y2);

	string msg = result ? "Yes, these fields have the same color."
		: "No, these fields are different.";

	cout << msg << endl;

	return 0;
}