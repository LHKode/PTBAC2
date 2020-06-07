//Upcoder ----> Mã: MINIGAME16.1:PTBAC2
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	float a, b, c, d, x1, x2, x;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0)cout << "-1";
			else cout << "0";
		}
		else {
			if (c == 0) {
				cout << "1" << endl;
				printf("%.10f", -(c / b));
			}
			else {
				cout << "1" << endl;
				printf("%.10f", -(c / b));
			}
		}
	}
	else {
		d = b * b - 4 * a*c;
		if (d < 0) cout << "0";
		else if (d == 0) {
			cout << "1" << endl;
			if (b == 0) cout << "0.0000000000";
			else {
				x = -b / (2 * a);
				printf("%.10f", x);
			}
		}
		else {
			cout << "2" << endl;

			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			if (x1 == 0 || x2 == 0) {

				if (x1 == 0 && x2 > 0) { cout << "0.0000000000" << endl; printf("%.10f", x2); }
				if (x1 == 0 && x2 < 0) { printf("%.10f\n", x2); cout << "0.0000000000"; }
				if (x2 == 0 && x1 > 0) { cout << "0.0000000000" << endl; printf("%.10f", x1); }

				if (x2 == 0 && x1 < 0) { printf("%.10f\n", x1); cout << "0.0000000000"; }
			}
			else {
				if (x1 > x2) {
					printf("%.10f\n", x2);
					printf("%.10f", x1);
				}
				if (x1 < x2) {
					printf("%.10f\n", x1);
					printf("%.10f", x2);
				}
			}
		}

	}
	system("pause");
	return 0;
}