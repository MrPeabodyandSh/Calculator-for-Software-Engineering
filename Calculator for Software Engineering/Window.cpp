#include "Window.h"
#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
#include "ButtonFactory.h"
#include "CalculatorProcessing.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(1, Window::ZeroClicked)
EVT_BUTTON(2, Window::OneClicked)
EVT_BUTTON(3, Window::TwoClicked)
EVT_BUTTON(4, Window::ThreeClicked)
EVT_BUTTON(5, Window::FourClicked)
EVT_BUTTON(6, Window::FiveClicked)
EVT_BUTTON(7, Window::SixClicked)
EVT_BUTTON(8, Window::SevenClicked)
EVT_BUTTON(9, Window::EightClicked)
EVT_BUTTON(10, Window::NineClicked)
EVT_BUTTON(11, Window::AddClicked)
EVT_BUTTON(12, Window::SubtractClicked)
EVT_BUTTON(13, Window::MultiplyClicked)
EVT_BUTTON(14, Window::DivideClicked)
EVT_BUTTON(15, Window::EqualsClicked)
EVT_BUTTON(16, Window::ClearClicked)
EVT_BUTTON(17, Window::ModuloClicked)
EVT_BUTTON(17, Window::ModuloClicked)
EVT_BUTTON(18, Window::SinClicked)
EVT_BUTTON(19, Window::CosClicked)
EVT_BUTTON(20, Window::TanClicked)
EVT_BUTTON(21, Window::BackspaceClicked)
EVT_BUTTON(22, Window::DecimalClicked)
EVT_BUTTON(23, Window::NegativeClicked)
wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(500, 500))
{
	zeroButton = ButtonFactory::CreateZeroButton(this); //new wxButton(this, 1, "0", wxPoint(218, 403), wxSize(50, 50));
	oneButton = ButtonFactory::CreateOneButton(this);
	twoButton = ButtonFactory::CreateTwoButton(this);
	threeButton = ButtonFactory::CreateThreeButton(this);
	fourButton = ButtonFactory::CreateFourButton(this);
	fiveButton = ButtonFactory::CreateFiveButton(this);
	sixButton = ButtonFactory::CreateSixButton(this);
	sevenButton = ButtonFactory::CreateSevenButton(this);
	eightButton = ButtonFactory::CreateEightButton(this);
	nineButton = ButtonFactory::CreateNineButton(this);

	addButton = ButtonFactory::CreateAddButton(this);
	subtractButton = ButtonFactory::CreateSubtractButton(this);
	multiplyButton = ButtonFactory::CreateMultiplyButton(this);
	divideButton = ButtonFactory::CreateDivideButton(this);
	equalsButton = ButtonFactory::CreateEqualsButton(this);
	clearButton = ButtonFactory::CreateClearButton(this);
	moduloButton = ButtonFactory::CreateModuloButton(this);
	sinButton = ButtonFactory::CreateSinButton(this);
	cosButton = ButtonFactory::CreateCosButton(this);
	tanButton = ButtonFactory::CreateTanButton(this);
	backspaceButton = ButtonFactory::CreateBackspaceButton(this);
	decimalButton = ButtonFactory::CreateDecimalButton(this);
	negativeButton = ButtonFactory::CreateNegativeButton(this);

	equation = new wxTextCtrl(this, 24, "", wxPoint(0, 50), wxSize(200, 20), wxTE_READONLY);
	answer = new wxTextCtrl(this, 25, "", wxPoint(300, 50), wxSize(100, 20), wxTE_READONLY);

}

void Window::ZeroClicked(wxCommandEvent& zero)
{
	wxString number = "0";

	equation->WriteText(number);
}

void Window::OneClicked(wxCommandEvent& one)
{
	wxString number = "1";

	equation->WriteText(number);
}

void Window::TwoClicked(wxCommandEvent& two)
{
	wxString number = "2";

	equation->WriteText(number);
}

void Window::ThreeClicked(wxCommandEvent& three)
{
	wxString number = "3";

	equation->WriteText(number);
}
//
void Window::FourClicked(wxCommandEvent& four)
{
	wxString number = "4";

	equation->WriteText(number);
}

void Window::FiveClicked(wxCommandEvent& five)
{
	wxString number = "5";

	equation->WriteText(number);
}

void Window::SixClicked(wxCommandEvent& six)
{
	wxString number = "6";

	equation->WriteText(number);
}

void Window::SevenClicked(wxCommandEvent& seven)
{
	wxString number = "7";

	equation->WriteText(number);
}

void Window::EightClicked(wxCommandEvent& eight)
{
	wxString number = "8";

	equation->WriteText(number);
}

void Window::NineClicked(wxCommandEvent& nine)
{
	wxString number = "9";

	equation->WriteText(number);
}

void Window::AddClicked(wxCommandEvent& add)
{
	wxString operation = " + ";

	equation->WriteText(operation);

	addClick = true;
	subtractClick = false;
	multiplyClick = false;
	divideClick = false;
	moduloClick = false;
}

void Window::SubtractClicked(wxCommandEvent& subtract)
{
	wxString operation = " - ";

	equation->WriteText(operation);

	addClick = false;
	subtractClick = true;
	multiplyClick = false;
	divideClick = false;
	moduloClick = false;
}

void Window::MultiplyClicked(wxCommandEvent& multiply)
{
	wxString operation = " * ";

	equation->WriteText(operation);

	addClick = false;
	subtractClick = false;
	multiplyClick = true;
	divideClick = false;
	moduloClick = false;
}

void Window::DivideClicked(wxCommandEvent& divide)
{
	wxString operation = " / ";

	equation->WriteText(operation);

	addClick = false;
	subtractClick = false;
	multiplyClick = false;
	divideClick = true;
	moduloClick = false;
}

void Window::ModuloClicked(wxCommandEvent& modulo)
{
	wxString operation = " % ";

	equation->WriteText(operation);

	addClick = false;
	subtractClick = false;
	multiplyClick = false;
	divideClick = false;
	moduloClick = true;
}

void Window::SinClicked(wxCommandEvent& Sin)
{
	wxString operation = " sin ";

	//cmath header has stuff for sin, cos, and tan so use it
	equation->WriteText(operation);

	sinClick = true;
}

void Window::CosClicked(wxCommandEvent& Cos)
{
	wxString operation = " cos ";

	equation->WriteText(operation);

	cosClick = true;
}

void Window::TanClicked(wxCommandEvent& Tan)
{
	wxString operation = " tan ";

	equation->WriteText(operation);

	tanClick = true;
}

void Window::BackspaceClicked(wxCommandEvent& backspace)
{
	if (equation->GetValue() == "") //For making sure it doesn't crash if backspace is pressed on an empty textbox
	{
		return;
	}

	wxString Backspace;
	std::string toBackspace;

	Backspace = equation->GetValue();
	toBackspace = Backspace;
	toBackspace.pop_back();
	Backspace = toBackspace;
	equation->SetLabel(Backspace);

}

void Window::DecimalClicked(wxCommandEvent& decimal)
{
	wxString Decimal = ".";

	equation->WriteText(Decimal);
}

void Window::NegativeClicked(wxCommandEvent& negative)
{
	std::string delims = "+-*/";
	wxStringTokenizer equationParse(equation->GetValue(), delims);
	std::string negativeSign = "-";
	std::string negativeNumber;
	std::string negativeNumber2;
	long int positionForSign = 0;
	long int positionForSignOffset = 0;

	negativeNumber = equation->GetValue();
	negativeNumber2 = equation->GetValue();

	while (equationParse.HasMoreTokens())
	{
		negativeNumber = equationParse.GetNextToken();
		++positionForSignOffset;
	}

	if (negativeNumber.length() > 2)
	{
		for (int i = 0; i < negativeNumber.length(); ++i)
		{
			++positionForSignOffset;
		}

		positionForSignOffset = positionForSignOffset - 2;
	}

	negativeNumber = negativeSign + negativeNumber;

	if (negativeNumber.length() == 2)
	{
		--positionForSignOffset;
	}

	for (int i = 0; i < positionForSignOffset; ++i)
	{
		negativeNumber2.pop_back();
	}

	if (negativeNumber2.length() == 1) //if else here in case user wants to make the first number negative
	{
		negativeNumber2 = negativeNumber;
	}

	else
	{
		negativeNumber2 = negativeNumber2 + negativeNumber;
	}
	

	equation->Clear();
	equation->AppendText(negativeNumber2);
}

void Window::EqualsClicked(wxCommandEvent& equals)
{
	std::string answerString;
	wxString answerWx;
	answerString = equation->GetValue();
	Answer = CalculatorProcessing::Instance()->Calculate(answerString);
	answerWx = std::to_string(Answer);
	answer->SetLabel(answerWx);
}

void Window::ClearClicked(wxCommandEvent& clear)
{
	equation->SetLabel("");
	answer->SetLabel("");

	addClick = false;
	subtractClick = false;
	multiplyClick = false;
	divideClick = false;
	moduloClick = false;
}
