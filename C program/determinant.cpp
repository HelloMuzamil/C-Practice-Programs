#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
	cin >> c;
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
	 {double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct.\n";
        cout << "Root 1: " << root1 << "\n";
        cout << "Root 2: " << root2 << "\n"; }
	    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal.\n";
        cout << "Root: " << root << "\n";}
	    else
	  { double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and conjugate.\n";
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";}
return 0;}

