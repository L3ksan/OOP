#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double  RectanglePerimetr(double length, double weidth) {
	if (length == 0) return weidth;
	if (weidth == 0) return length;
	return ((length + weidth) * 2.0);
}
double  RectangleArea(double length, double weidth) {
	return (length * weidth);
}
int     MathTask(int x) {
	if (x < 8) throw "Can not take sqrt of negative number";
	return ((12 * x) + sqrt(x - 8));
}
void    Format() {

	cout.width(15);
	cout.precision(5);
	cout.fill('#');
}

ofstream outfile("myfile.txt");

void    Format2() {

	outfile.width(15);
	outfile.precision(5);
	outfile.fill('#');
}
int     main() {
	double length, weidth;
	cout << "           Welcome to Lab 8"       << endl;
	cout << "                Part 1"            << endl << endl;
	cout << "You will be able to calculate the" << endl << "perimeter and area of the rectangle " << endl << endl;
	cout << "Enter rectangel value "            << endl;
	try {
		cout << "Length = ";
		cin  >> length;
		if (length < 0) throw "Can not take negative number";
		cout << "Weidth = ";
		cin  >> weidth;
		if (weidth < 0) throw "Can not take negative number";
		cout << "Perimetr = ";
		Format();
		cout << RectanglePerimetr(length, weidth);
		cout << endl << "Area = ";
		Format();
		cout << RectangleArea(length, weidth);
		
			outfile << "Perimetr = ";
			Format2();
			outfile << RectanglePerimetr(length, weidth);
			outfile << endl << "Area = ";
			Format2();
			outfile << RectangleArea(length, weidth);
	}
	catch (const char* exception) {	
		cerr << "Error: " << exception << '\n';
	}
	cin.get();

	cout << endl <<"                Part 2"            << endl << endl;
	int x;
	cout << "Finding value y = 12x + sqrt(x-8)" << endl;
	cout << "Enter x: ";
	cin >> x;
	try {
		cout << "y = "                               << MathTask(x)<< endl;
	}
	catch (const char* exception) {
		cerr << "Error: "                            << exception << '\n';
	}
	cin.get();
	cout << "Press Enter to close the program";
	cin.get();
}
