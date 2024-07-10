#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
	wxButton* zeroButton = nullptr;
	wxButton* oneButton = nullptr;
	wxButton* twoButton = nullptr;
	wxButton* threeButton = nullptr;
	wxButton* fourButton = nullptr;
	wxButton* fiveButton = nullptr;
	wxButton* sixButton = nullptr;
	wxButton* sevenButton = nullptr;
	wxButton* eightButton = nullptr;
	wxButton* nineButton = nullptr;
	wxButton* addButton = nullptr;
	wxButton* subtractButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* divideButton = nullptr;

	wxButton* moduloButton = nullptr;
	wxButton* sinButton = nullptr;
	wxButton* cosButton = nullptr;             //Implement
	wxButton* tanButton = nullptr;            //Implement
	wxButton* backspaceButton = nullptr;         //Implement
	wxButton* decimalButton = nullptr;
	wxButton* negativeButton = nullptr;

	wxButton* equalsButton = nullptr;
	wxButton* clearButton = nullptr;

	wxTextCtrl* firstNumber = nullptr;
	wxTextCtrl* secondNumber = nullptr;
	wxTextCtrl* answer = nullptr;

	wxString FirstNumber;
	wxString SecondNumber;

	float Answer = 0;
	bool addClick = false;
	bool subtractClick = false;
	bool multiplyClick = false;
	bool divideClick = false;

public:


	Window();
	void ZeroClicked(wxCommandEvent& zero);
	void OneClicked(wxCommandEvent& one);
	void TwoClicked(wxCommandEvent& two);
	void ThreeClicked(wxCommandEvent& three);
	void FourClicked(wxCommandEvent& four);
	void FiveClicked(wxCommandEvent& five);
	void SixClicked(wxCommandEvent& six);
	void SevenClicked(wxCommandEvent& seven);
	void EightClicked(wxCommandEvent& eight);
	void NineClicked(wxCommandEvent& nine);
	void AddClicked(wxCommandEvent& add);
	void SubtractClicked(wxCommandEvent& subtract);
	void MultiplyClicked(wxCommandEvent& multiply);
	void DivideClicked(wxCommandEvent& divide);







	void EqualsClicked(wxCommandEvent& equals);
	void ClearClicked(wxCommandEvent& clear);
	
	
	wxDECLARE_EVENT_TABLE();
};

