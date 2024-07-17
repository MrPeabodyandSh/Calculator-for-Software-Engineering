#pragma once
#include "wx/wx.h"
#include "Window.h"
#include <wx/event.h>
#include <wx/tokenzr.h>


class ButtonFactory
{
	
	static void CreateButton(wxButton* buttonToCreate, typename Window* Parent, int ID, std::string name, wxPoint position, wxSize size);

public:
	
	static wxButton* CreateZeroButton(typename Window* parent);
	static wxButton* CreateOneButton(typename Window* parent);
	static wxButton* CreateTwoButton(typename Window* parent);
	static wxButton* CreateThreeButton(typename Window* parent);
	static wxButton* CreateFourButton(typename Window* parent);
	static wxButton* CreateFiveButton(typename Window* parent);
	static wxButton* CreateSixButton(typename Window* parent);
	static wxButton* CreateSevenButton(typename Window* parent);
	static wxButton* CreateEightButton(typename Window* parent);
	static wxButton* CreateNineButton(typename Window* parent);
	static wxButton* CreateAddButton(typename Window* parent);
	static wxButton* CreateSubtractButton(typename Window* parent);
	static wxButton* CreateMultiplyButton(typename Window* parent);
	static wxButton* CreateDivideButton(typename Window* parent);
	static wxButton* CreateModuloButton(typename Window* parent);
	static wxButton* CreateSinButton(typename Window* parent);
	static wxButton* CreateCosButton(typename Window* parent);
	static wxButton* CreateTanButton(typename Window* parent);
	static wxButton* CreateBackspaceButton(typename Window* parent);
	static wxButton* CreateDecimalButton(typename Window* parent);
	static wxButton* CreateNegativeButton(typename Window* parent);
	static wxButton* CreateEqualsButton(typename Window* parent);
	static wxButton* CreateClearButton(typename Window* parent);
};

