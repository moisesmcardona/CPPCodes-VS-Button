#include <iostream>
#include <string>
#include "Button.h"
using namespace std;

int main()
{
	string label;
	int height;
	int width;

	cout << "Enter the following details for button 1:" << endl;
	cout << "Enter a label: ";
	cin >> label;
	cout << "Enter Width: ";
	cin >> width;
	cout << "Enter Height: ";
	cin >> height;

	Button b1;
	b1.setLabel(label);
	b1.setWidth(width);
	b1.setHeight(height);

	cout << "Enter the following details for button 2:" << endl;
	cout << "Enter a label: ";
	cin >> label;
	cout << "Enter Width: ";
	cin >> width;
	cout << "Enter Height: ";
	cin >> height;

	Button b2(label, width, height);

	cout << "Details for button 1:" << endl;
	cout << "Label: " << b1.getLabel() << endl;
	cout << "Width: " << b1.getWidth() << endl;
	cout << "Height: " << b1.getHeight() << endl;
	cout << "Details for button 2:" << endl;
	cout << "Label: " << b2.getLabel() << endl;
	cout << "Width: " << b2.getWidth() << endl;
	cout << "Height: " << b2.getHeight() << endl;
	system("pause");
	return 0;
}