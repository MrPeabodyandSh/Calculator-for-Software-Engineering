#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateButton(wxButton* buttonToCreate, wxWindow* Parent, int ID, std::string name, wxPoint position, wxSize size)
{
	buttonToCreate = new wxButton(Parent, ID, name, position, size);
	return buttonToCreate;
}

wxButton* ButtonFactory::CreateZeroButton(wxWindow* parent)
{
	wxButton* zero = nullptr;

	zero = CreateButton(zero, parent, 1, "0", wxPoint(218, 403), wxSize(50, 50));
	return zero;
}

wxButton* ButtonFactory::CreateOneButton(wxWindow* parent)
{
	wxButton* one = nullptr;

	one = CreateButton(one, parent, 2, "1", wxPoint(167, 352), wxSize(50, 50));
	return one;
}

wxButton* ButtonFactory::CreateTwoButton(wxWindow* parent)
{
	wxButton* two = nullptr;

	two = CreateButton(two, parent, 3, "2", wxPoint(218, 352), wxSize(50, 50));
	return two;
}

wxButton* ButtonFactory::CreateThreeButton(wxWindow* parent)
{
	wxButton* three = nullptr;

	three = CreateButton(three, parent, 4, "3", wxPoint(269, 352), wxSize(50, 50));
	return three;
}

wxButton* ButtonFactory::CreateFourButton(wxWindow* parent)
{
	wxButton* four = nullptr;

	four = CreateButton(four, parent, 5, "4", wxPoint(167, 301), wxSize(50, 50));
	return four;
}

wxButton* ButtonFactory::CreateFiveButton(wxWindow* parent)
{
	wxButton* five = nullptr;

	five = CreateButton(five, parent, 6, "5", wxPoint(218, 301), wxSize(50, 50));
	return five;
}

wxButton* ButtonFactory::CreateSixButton(wxWindow* parent)
{
	wxButton* six = nullptr;

	six = CreateButton(six, parent, 7, "6", wxPoint(269, 301), wxSize(50, 50));
	return six;
}

wxButton* ButtonFactory::CreateSevenButton(wxWindow* parent)
{
	wxButton* seven = nullptr;

	seven = CreateButton(seven, parent, 8, "7", wxPoint(167, 250), wxSize(50, 50));
	return seven;
}

wxButton* ButtonFactory::CreateEightButton(wxWindow* parent)
{
	wxButton* eight = nullptr;

	eight = CreateButton(eight, parent, 9, "8", wxPoint(218, 250), wxSize(50, 50));
	return eight;
}

wxButton* ButtonFactory::CreateNineButton(wxWindow* parent)
{
	wxButton* nine = nullptr;

	nine = CreateButton(nine, parent, 10, "9", wxPoint(269, 250), wxSize(50, 50));
	return nine;
}

wxButton* ButtonFactory::CreateAddButton(wxWindow* parent)
{
	wxButton* add = nullptr;

	add = CreateButton(add, parent, 11, "+", wxPoint(320, 250), wxSize(50, 50));
	return add;
}

wxButton* ButtonFactory::CreateSubtractButton(wxWindow* parent)
{
	wxButton* subtract = nullptr;

	subtract = CreateButton(subtract, parent, 12, "-", wxPoint(320, 301), wxSize(50, 50));
	return subtract;
}

wxButton* ButtonFactory::CreateMultiplyButton(wxWindow* parent)
{
	wxButton* multiply = nullptr;

	multiply = CreateButton(multiply, parent, 13, "*", wxPoint(320, 352), wxSize(50, 50));
	return multiply;
}

wxButton* ButtonFactory::CreateDivideButton(wxWindow* parent)
{
	wxButton* divide = nullptr;

	divide = CreateButton(divide, parent, 14, "/", wxPoint(320, 403), wxSize(50, 50));
	return divide;
}


wxButton* ButtonFactory::CreateEqualsButton(wxWindow* parent)
{
	wxButton* equals = nullptr;

	equals = CreateButton(equals, parent, 15, "=", wxPoint(371, 403), wxSize(50, 50));
	return equals;
}

wxButton* ButtonFactory::CreateClearButton(wxWindow* parent)
{
	wxButton* clear = nullptr;

	clear = CreateButton(clear, parent, 16, "Clear", wxPoint(269, 199), wxSize(50, 50));
	return clear;
}

wxButton* ButtonFactory::CreateModuloButton(wxWindow* parent)
{
	wxButton* modulo = nullptr;

	modulo = CreateButton(modulo, parent, 17, "%", wxPoint(116, 250), wxSize(50, 50));
	return modulo;
}

wxButton* ButtonFactory::CreateSinButton(wxWindow* parent)
{
	wxButton* sin = nullptr;

	sin = CreateButton(sin, parent, 18, "sin", wxPoint(218, 199), wxSize(50, 50));
	return sin;
}

wxButton* ButtonFactory::CreateCosButton(wxWindow* parent)
{
	wxButton* cos = nullptr;

	cos = CreateButton(cos, parent, 19, "cos", wxPoint(167, 199), wxSize(50, 50));
	return cos;
}

wxButton* ButtonFactory::CreateTanButton(wxWindow* parent)
{
	wxButton* tan = nullptr;

	tan = CreateButton(tan, parent, 20, "tan", wxPoint(116, 199), wxSize(50, 50));
	return tan;
}

wxButton* ButtonFactory::CreateBackspaceButton(wxWindow* parent)
{
	wxButton* back = nullptr;

	back = CreateButton(back, parent, 21, "Back", wxPoint(320, 199), wxSize(50, 50));
	return back;
}

wxButton* ButtonFactory::CreateDecimalButton(wxWindow* parent)
{
	wxButton* decimal = nullptr;

	decimal = CreateButton(decimal, parent, 22, ".", wxPoint(269, 403), wxSize(50, 50));
	return decimal;
}

wxButton* ButtonFactory::CreateNegativeButton(wxWindow* parent)
{
	wxButton* negative = nullptr;

	negative = CreateButton(negative, parent, 23, "+/-", wxPoint(167, 403), wxSize(50, 50));
	return negative;
}







