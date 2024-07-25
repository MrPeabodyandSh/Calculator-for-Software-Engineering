#pragma once
#include "wx/wx.h"
#include "Window.h"
#include <wx/event.h>
#include <wx/tokenzr.h>


class ButtonFactory
{
	
	static wxButton* CreateButton(wxButton* buttonToCreate,  wxWindow* Parent, int ID, std::string name, wxPoint position, wxSize size);

public:
	
	static wxButton* CreateZeroButton(wxWindow* parent);
	static wxButton* CreateOneButton(wxWindow* parent);
	static wxButton* CreateTwoButton( wxWindow* parent);
	static wxButton* CreateThreeButton( wxWindow* parent);
	static wxButton* CreateFourButton( wxWindow* parent);
	static wxButton* CreateFiveButton( wxWindow* parent);
	static wxButton* CreateSixButton( wxWindow* parent);
	static wxButton* CreateSevenButton( wxWindow* parent);
	static wxButton* CreateEightButton( wxWindow* parent);
	static wxButton* CreateNineButton( wxWindow* parent);
	static wxButton* CreateAddButton( wxWindow* parent);
	static wxButton* CreateSubtractButton( wxWindow* parent);
	static wxButton* CreateMultiplyButton( wxWindow* parent);
	static wxButton* CreateDivideButton( wxWindow* parent);
	static wxButton* CreateModuloButton( wxWindow* parent);
	static wxButton* CreateSinButton( wxWindow* parent);
	static wxButton* CreateCosButton( wxWindow* parent);
	static wxButton* CreateTanButton( wxWindow* parent);
	static wxButton* CreateBackspaceButton( wxWindow* parent);
	static wxButton* CreateDecimalButton( wxWindow* parent);
	static wxButton* CreateNegativeButton( wxWindow* parent);
	static wxButton* CreateEqualsButton( wxWindow* parent);
	static wxButton* CreateClearButton( wxWindow* parent);
};

