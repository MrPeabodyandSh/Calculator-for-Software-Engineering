#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{

	wxButton* addButton = nullptr;
	wxButton* subtractButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* equalsButton = nullptr;
	wxButton* clearButton = nullptr;

	wxTextCtrl* firstNumber = nullptr;
	wxTextCtrl* secondNumber = nullptr;
	wxTextCtrl* answer = nullptr;

	wxString FirstNumber;
	wxString SecondNumber;

public:


	Window();
	void AddClicked(wxCommandEvent& add);
	void SubtractClicked(wxCommandEvent& subtract);
	void MultiplyClicked(wxCommandEvent& multiply);
	void DivideClicked(wxCommandEvent& divide);
	void EqualsClicked(wxCommandEvent& equals);
	void ClearClicked(wxCommandEvent& clear);
	
	
	wxDECLARE_EVENT_TABLE();
};

