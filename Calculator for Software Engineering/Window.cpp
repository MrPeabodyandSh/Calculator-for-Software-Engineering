#include "Window.h"
#include "Math.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(11, Window::AddClicked)
EVT_BUTTON(12, Window::SubtractClicked)
EVT_BUTTON(13, Window::MultiplyClicked)
EVT_BUTTON(14, Window::DivideClicked)
EVT_BUTTON(15, Window::EqualsClicked)
EVT_BUTTON(16, Window::ClearClicked)
wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(500, 500))
{
	zeroButton = new wxButton(this, 1, "0", wxPoint(218, 403), wxSize(50, 50));
	oneButton = new wxButton(this, 2, "1", wxPoint(167, 352), wxSize(50, 50));
	twoButton = new wxButton(this, 3, "2", wxPoint(218, 352), wxSize(50, 50));
	threeButton = new wxButton(this, 4, "3", wxPoint(269, 352), wxSize(50, 50));
	fourButton = new wxButton(this, 5, "4", wxPoint(167, 301), wxSize(50, 50));
	fiveButton = new wxButton(this, 6, "5", wxPoint(218, 301), wxSize(50, 50));
	sixButton = new wxButton(this, 7, "6", wxPoint(269, 301), wxSize(50, 50));
	sevenButton = new wxButton(this, 8, "7", wxPoint(167, 250), wxSize(50, 50));
	eightButton = new wxButton(this, 9, "8", wxPoint(218, 250), wxSize(50, 50));
	nineButton = new wxButton(this, 10, "9", wxPoint(269, 250), wxSize(50, 50));

	addButton = new wxButton(this, 11, "+", wxPoint(320, 250), wxSize(50, 50));
	subtractButton = new wxButton(this, 12, "-", wxPoint(320, 301), wxSize(50, 50));
	multiplyButton = new wxButton(this, 13, "*", wxPoint(320, 352), wxSize(50, 50));
	divideButton = new wxButton(this, 14, "/", wxPoint(320, 403), wxSize(50, 50));
	equalsButton = new wxButton(this, 15, "=", wxPoint(371, 403), wxSize(50, 50));
	clearButton = new wxButton(this, 16, "Clear", wxPoint(269, 199), wxSize(50, 50));
	moduloButton = new wxButton(this, 17, "%", wxPoint(116, 250), wxSize(50, 50));
	sinButton = new wxButton(this, 18, "sin", wxPoint(218, 199), wxSize(50, 50));
	cosButton = new wxButton(this, 19, "cos", wxPoint(167, 199), wxSize(50, 50));
	tanButton = new wxButton(this, 20, "tan", wxPoint(116, 199), wxSize(50, 50));
	backspaceButton = new wxButton(this, 21, "Back", wxPoint(320, 199), wxSize(50, 50));
	decimalButton = new wxButton(this, 22, ".", wxPoint(269, 403), wxSize(50, 50));
	negativeButton = new wxButton(this, 23, "+/-", wxPoint(167, 403), wxSize(50, 50));

	firstNumber = new wxTextCtrl(this, 24, "", wxPoint(0, 50), wxSize(100, 20));
	secondNumber = new wxTextCtrl(this, 25, "", wxPoint(100, 50), wxSize(100, 20));
	answer = new wxTextCtrl(this, 26, "", wxPoint(300, 50), wxSize(100, 20), wxTE_READONLY);




}

void Window::ZeroClicked(wxCommandEvent& zero)
{

}

void Window::OneClicked(wxCommandEvent& one)
{

}

void Window::TwoClicked(wxCommandEvent& two)
{

}

void Window::ThreeClicked(wxCommandEvent& three)
{

}

void Window::FourClicked(wxCommandEvent& four)
{

}

void Window::FiveClicked(wxCommandEvent& five)
{

}

void Window::SixClicked(wxCommandEvent& six)
{

}

void Window::SevenClicked(wxCommandEvent& seven)
{

}

void Window::EightClicked(wxCommandEvent& eight)
{

}

void Window::NineClicked(wxCommandEvent& nine)
{

}

void Window::AddClicked(wxCommandEvent& add)
{
	addClick = true;
	subtractClick = false;
	multiplyClick = false;
	divideClick = false;
}

void Window::SubtractClicked(wxCommandEvent& subtract)
{
	addClick = false;
	subtractClick = true;
	multiplyClick = false;
	divideClick = false;
}

void Window::MultiplyClicked(wxCommandEvent& multiply)
{
	addClick = false;
	subtractClick = false;
	multiplyClick = true;
	divideClick = false;
}

void Window::DivideClicked(wxCommandEvent& divide)
{
	addClick = false;
	subtractClick = false;
	multiplyClick = false;
	divideClick = true;
}

void Window::EqualsClicked(wxCommandEvent& equals)
{
	if (addClick)
	{
		wxString addition;
		std::string Firstnumber;
		std::string Secondnumber;
		float first = 0;
		float second = 0;

		FirstNumber = firstNumber->GetValue(); //Gets the value typed into the first text box
		SecondNumber = secondNumber->GetValue();
		Firstnumber = FirstNumber.c_str(); //Makes the number in the text box turn into a normal string
		Secondnumber = SecondNumber.c_str();

		first = std::stof(Firstnumber); //Turns the string into a float
		second = std::stof(Secondnumber);

		Answer = first + second;
		addition = std::to_string(Answer);
		answer->SetLabel(addition);
		
	}

	if (subtractClick)
	{
		wxString subtraction;
		std::string Firstnumber;
		std::string Secondnumber;
		float first = 0;
		float second = 0;

		FirstNumber = firstNumber->GetValue(); 
		SecondNumber = secondNumber->GetValue();
		Firstnumber = FirstNumber.c_str(); 
		Secondnumber = SecondNumber.c_str();

		first = std::stof(Firstnumber); 
		second = std::stof(Secondnumber);

		Answer = first - second;
		subtraction = std::to_string(Answer);
		answer->SetLabel(subtraction);
	}

	if (multiplyClick)
	{
		wxString multiplication;
		std::string Firstnumber;
		std::string Secondnumber;
		float first = 0;
		float second = 0;

		FirstNumber = firstNumber->GetValue();
		SecondNumber = secondNumber->GetValue();
		Firstnumber = FirstNumber.c_str();
		Secondnumber = SecondNumber.c_str();

		first = std::stof(Firstnumber);
		second = std::stof(Secondnumber);

		Answer = first * second;
		multiplication = std::to_string(Answer);
		answer->SetLabel(multiplication);
	}

	if (divideClick)
	{
		wxString division;
		std::string Firstnumber;
		std::string Secondnumber;
		float first = 0;
		float second = 0;

		FirstNumber = firstNumber->GetValue();
		SecondNumber = secondNumber->GetValue();
		Firstnumber = FirstNumber.c_str();
		Secondnumber = SecondNumber.c_str();

		first = std::stof(Firstnumber);
		second = std::stof(Secondnumber);

		Answer = first / second;
		division = std::to_string(Answer);
		answer->SetLabel(division);
	}
}

void Window::ClearClicked(wxCommandEvent& clear)
{
	firstNumber->SetLabel("0");
	secondNumber->SetLabel("0");
	answer->SetLabel("0");
}
