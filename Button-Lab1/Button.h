#ifndef BUTTON_H
#define BUTTON_H
#include <iostream>
using namespace std;

class Button{
private:
	string label;
	int width;
	int height;
public:
	Button();
	Button(string Label, int Width, int Height);
	Button(Button& button);
	~Button();
	void setHeight(int Height);
	void setWidth(int Width);
	void setLabel(string Label);
	int getWidth();
	int getHeight();
	string getLabel();
};
#endif