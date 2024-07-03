#include "Window.h"
#include "Math.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(1, Window::AddClicked)
EVT_BUTTON(2, Window::SubtractClicked)
EVT_BUTTON(3, Window::MultiplyClicked)
EVT_BUTTON(4, Window::DivideClicked)
EVT_BUTTON(5, Window::EqualsClicked)
EVT_BUTTON(6, Window::ClearClicked)
wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(500, 500))
{
	addButton = new wxButton(this, 1, "Add (+)", wxPoint(0, 360), wxSize(100, 100));
	subtractButton = new wxButton(this, 2, "Subtract (-)", wxPoint(100, 360), wxSize(100, 100));
	multiplyButton = new wxButton(this, 3, "Multiply (*)", wxPoint(200, 360), wxSize(100, 100));
	divideButton = new wxButton(this, 4, "Divide (/)", wxPoint(300, 360), wxSize(100, 100));
	equalsButton = new wxButton(this, 5, "=", wxPoint(230, 50), wxSize(50, 50));
	clearButton = new wxButton(this, 6, "Clear", wxPoint(400, 360), wxSize(100, 100));

	firstNumber = new wxTextCtrl(this, 7, "0", wxPoint(0, 50), wxSize(100, 20));
	secondNumber = new wxTextCtrl(this, 8, "0", wxPoint(100, 50), wxSize(100, 20));
	answer = new wxTextCtrl(this, 9, "0", wxPoint(300, 50), wxSize(100, 20), wxTE_READONLY);




}

void Window::AddClicked(wxCommandEvent& add)
{
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

	Answer = first + second;
	addClick = true;
}

void Window::SubtractClicked(wxCommandEvent& subtract)
{

}

void Window::MultiplyClicked(wxCommandEvent& multiply)
{

}

void Window::DivideClicked(wxCommandEvent& divide)
{

}

void Window::EqualsClicked(wxCommandEvent& equals)
{
	if (addClick)
	{
		wxString addition;

		addition = std::to_string(Answer);
		answer->SetLabel(addition);
	}
}

void Window::ClearClicked(wxCommandEvent& clear)
{

}