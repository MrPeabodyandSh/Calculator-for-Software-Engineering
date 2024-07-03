#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{

	wxButton* addButton = nullptr;
	wxButton* subtractButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* divideButton = nullptr;

public:

	Window();
};

