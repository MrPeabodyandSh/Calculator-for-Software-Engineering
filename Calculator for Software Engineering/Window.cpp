#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(500, 500))
{
	addButton = new wxButton(this, 1, "Add (+)", wxPoint(0, 360), wxSize(100, 100));
	subtractButton = new wxButton(this, 2, "Subtract (-)", wxPoint(100, 360), wxSize(100, 100));
}