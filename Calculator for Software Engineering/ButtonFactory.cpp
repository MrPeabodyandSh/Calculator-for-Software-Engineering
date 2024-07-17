#include "ButtonFactory.h"

void ButtonFactory::CreateButton(wxButton* buttonToCreate, Window* Parent, int ID, std::string name, wxPoint position, wxSize size)
{
	buttonToCreate = new wxButton(Parent, ID, name, position, size);
}

wxButton* ButtonFactory::CreateZeroButton(Window* parent)
{
	wxButton* zero = nullptr;

	CreateButton(zero, parent, 1, "0", wxPoint(218, 403), wxSize(50, 50));
	return zero;
}

wxButton* ButtonFactory::CreateOneButton(typename Window* parent)
{
	wxButton* one = nullptr;

	CreateButton(one, parent, 2, "1", wxPoint(167, 352), wxSize(50, 50));
	return one;
}

wxButton* ButtonFactory::CreateTwoButton(typename Window* parent)
{
	wxButton* two = nullptr;

	CreateButton(two, parent, 3, "2", wxPoint(218, 352), wxSize(50, 50));
	return two;
}

wxButton* ButtonFactory::CreateThreeButton(typename Window* parent)
{
	wxButton* three = nullptr;

	CreateButton(three, parent, 4, "3", wxPoint(269, 352), wxSize(50, 50));
	return three;
}

wxButton* ButtonFactory::CreateFourButton(typename Window* parent)
{
	wxButton* four = nullptr;

	CreateButton(four, parent, 5, "4", wxPoint(167, 301), wxSize(50, 50));
	return four;
}

wxButton* ButtonFactory::CreateFiveButton(typename Window* parent)
{
	wxButton* five = nullptr;

	CreateButton(five, parent, 6, "5", wxPoint(218, 301), wxSize(50, 50));
	return five;
}

wxButton* ButtonFactory::CreateSixButton(typename Window* parent)
{
	wxButton* six = nullptr;

	CreateButton(six, parent, 7, "6", wxPoint(269, 301), wxSize(50, 50));
	return six;
}

wxButton* ButtonFactory::CreateSevenButton(typename Window* parent)
{
	wxButton* seven = nullptr;

	CreateButton(seven, parent, 8, "7", wxPoint(167, 250), wxSize(50, 50));
	return seven;
}

wxButton* ButtonFactory::CreateEightButton(typename Window* parent)
{
	wxButton* eight = nullptr;

	CreateButton(eight, parent, 9, "8", wxPoint(218, 250), wxSize(50, 50));
	return eight;
}

wxButton* ButtonFactory::CreateNineButton(typename Window* parent)
{
	wxButton* nine = nullptr;

	CreateButton(nine, parent, 10, "9", wxPoint(269, 250), wxSize(50, 50));
	return nine;
}

wxButton* ButtonFactory::CreateAddButton(typename Window* parent)
{
	wxButton* add = nullptr;

	CreateButton(add, parent, 11, "+", wxPoint(320, 250), wxSize(50, 50));
	return add;
}

wxButton* ButtonFactory::CreateSubtractButton(typename Window* parent)
{
	wxButton* subtract = nullptr;

	CreateButton(subtract, parent, 12, "-", wxPoint(320, 301), wxSize(50, 50));
	return subtract;
}

wxButton* ButtonFactory::CreateMultiplyButton(typename Window* parent)
{
	wxButton* multiply = nullptr;

	CreateButton(multiply, parent, 13, "*", wxPoint(320, 352), wxSize(50, 50));
	return multiply;
}

wxButton* ButtonFactory::CreateDivideButton(typename Window* parent)
{
	wxButton* divide = nullptr;

	CreateButton(divide, parent, 14, "/", wxPoint(320, 403), wxSize(50, 50));
	return divide;
}


wxButton* ButtonFactory::CreateEqualsButton(typename Window* parent)
{
	wxButton* equals = nullptr;

	CreateButton(equals, parent, 15, "=", wxPoint(371, 403), wxSize(50, 50));
	return equals;
}

wxButton* ButtonFactory::CreateClearButton(typename Window* parent)
{
	wxButton* clear = nullptr;

	CreateButton(clear, parent, 16, "Clear", wxPoint(269, 199), wxSize(50, 50));
	return clear;
}

wxButton* ButtonFactory::CreateModuloButton(typename Window* parent)
{
	wxButton* modulo = nullptr;

	CreateButton(modulo, parent, 17, "%", wxPoint(116, 250), wxSize(50, 50));
	return modulo;
}

wxButton* ButtonFactory::CreateSinButton(typename Window* parent)
{
	wxButton* sin = nullptr;

	CreateButton(sin, parent, 18, "sin", wxPoint(218, 199), wxSize(50, 50));
	return sin;
}

wxButton* ButtonFactory::CreateCosButton(typename Window* parent)
{
	wxButton* cos = nullptr;

	CreateButton(cos, parent, 19, "cos", wxPoint(167, 199), wxSize(50, 50));
	return cos;
}

wxButton* ButtonFactory::CreateTanButton(typename Window* parent)
{
	wxButton* tan = nullptr;

	CreateButton(tan, parent, 20, "tan", wxPoint(116, 199), wxSize(50, 50));
	return tan;
}

wxButton* ButtonFactory::CreateBackspaceButton(typename Window* parent)
{
	wxButton* back = nullptr;

	CreateButton(back, parent, 21, "Back", wxPoint(320, 199), wxSize(50, 50));
	return back;
}

wxButton* ButtonFactory::CreateDecimalButton(typename Window* parent)
{
	wxButton* decimal = nullptr;

	CreateButton(decimal, parent, 22, ".", wxPoint(269, 403), wxSize(50, 50));
	return decimal;
}

wxButton* ButtonFactory::CreateNegativeButton(typename Window* parent)
{
	wxButton* negative = nullptr;

	CreateButton(negative, parent, 23, "+/-", wxPoint(167, 403), wxSize(50, 50));
	return negative;
}







