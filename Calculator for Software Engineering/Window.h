#pragma once
#include "wx/wx.h"
#include <wx/tokenzr.h>
#include <algorithm>


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
	wxButton* cosButton = nullptr;
	wxButton* tanButton = nullptr;
	wxButton* backspaceButton = nullptr;
	wxButton* decimalButton = nullptr;
	wxButton* negativeButton = nullptr;
	wxButton* equalsButton = nullptr;
	wxButton* clearButton = nullptr;

	wxTextCtrl* equation = nullptr;
	wxTextCtrl* answer = nullptr;

	wxString FirstNumber;
	wxString SecondNumber;

	double Answer = 0;
	bool addClick = false;
	bool subtractClick = false;
	bool multiplyClick = false;
	bool divideClick = false;
	bool moduloClick = false;
	bool sinClick = false;
	bool cosClick = false;
	bool tanClick = false;

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
	void ModuloClicked(wxCommandEvent& modulo);
	void SinClicked(wxCommandEvent& Sin);
	void CosClicked(wxCommandEvent& Cos);
	void TanClicked(wxCommandEvent& Tan);
	void BackspaceClicked(wxCommandEvent& backspace);
	void DecimalClicked(wxCommandEvent& decimal);
	void NegativeClicked(wxCommandEvent& negative);
	void EqualsClicked(wxCommandEvent& equals);
	void ClearClicked(wxCommandEvent& clear);

	//wxButton* CreateZeroButton(wxCommandEvent& creation);

	wxDECLARE_EVENT_TABLE();
};

