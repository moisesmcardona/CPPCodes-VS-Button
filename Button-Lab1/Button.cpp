#include <iostream>
#include <string>
#include "Button.h"
using namespace std;

Button::Button() //Default Constructor
{
	label = "Label";
	width = 1;
	height = 1;
}

Button::Button(string Label, int Width, int Height) //Constructor
{
	label = Label;
	width = Width;
	height = Height;
}

Button::Button(Button& button) //Copy Constructor
{
	label = button.label;
	width = button.width;
	height = button.height;
}

Button::~Button() //Destructor
{

}

void Button::setHeight(int Height) //heigth
{
	height = Height;
}

void Button::setWidth(int Width) //width
{
	width = Width;
}

void Button::setLabel(string Label) //label
{
	label = Label;
}

int Button::getHeight() //returns height
{
	return this->height;
}

int Button::getWidth() //returns width
{
	return this->width;
}

string Button::getLabel() //returns label
{
	return this->label;
}