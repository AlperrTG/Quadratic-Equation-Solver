#include <iostream>

using namespace std;


int main() {
	double a, b, c, disc, root1, root2;
	string i = "i";
	
	cout << "Quadratic Equation Solver" << endl << "Equation Task : ax^2 + bx + c " << endl;
	cout << "Please input a,b,c using space" << endl;
	cin >> a >> b >> c;
	cout << endl;
	disc = pow(b, 2) - (4 * a * c);
	cout << "Discriminant = " << disc<<endl;
	if (disc >= 0) {
		cout << "Roots Are Going to Real Number" << endl;
		root1 = (-b + sqrt(disc)) / 2;
		root2 = (-b - sqrt(disc)) / 2;
		cout << "First Root = " << root1 << endl << "Second Root = " << root2 << endl;
	}
	else {
		disc = -disc;
		cout << "Roots Are Going to Complex Number" << endl;
		cout << "First Complex Root = " << -b / (2 * a) << " + " << sqrt(disc) / (2 * a) << "i" <<endl;
		cout << "First Complex Root = " << -b / (2 * a) << " - " << sqrt(disc) / (2 * a) << "i" << endl;
	}
	
	return 0;
}