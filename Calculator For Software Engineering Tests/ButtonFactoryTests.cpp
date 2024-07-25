#include "pch.h"
#include "CppUnitTest.h"
#include "wx/wx.h"
#include "C:\Users\apple\source\repos\Calculator for Software Engineering\Calculator for Software Engineering/ButtonFactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorForSoftwareEngineeringTests
{
	TEST_CLASS(CalculatorForSoftwareEngineeringTests)
	{
	public:

		TEST_METHOD(TestCreate0)
		{
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateZeroButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "0");
			Assert::AreEqual(tester->GetId(), 1);
			Assert::AreEqual(tester->GetPosition().x, 218);
			Assert::AreEqual(tester->GetPosition().y, 403);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);

		}

		TEST_METHOD(TestCreate1)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateOneButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "1");
			Assert::AreEqual(tester->GetId(), 2);
			Assert::AreEqual(tester->GetPosition().x, 167);
			Assert::AreEqual(tester->GetPosition().y, 352);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate2)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateTwoButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "2");
			Assert::AreEqual(tester->GetId(), 3);
			Assert::AreEqual(tester->GetPosition().x, 218);
			Assert::AreEqual(tester->GetPosition().y, 352);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate3)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateThreeButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "3");
			Assert::AreEqual(tester->GetId(), 4);
			Assert::AreEqual(tester->GetPosition().x, 269);
			Assert::AreEqual(tester->GetPosition().y, 352);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate4)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateFourButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "4");
			Assert::AreEqual(tester->GetId(), 5);
			Assert::AreEqual(tester->GetPosition().x, 167);
			Assert::AreEqual(tester->GetPosition().y, 301);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate5)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateFiveButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "5");
			Assert::AreEqual(tester->GetId(), 6);
			Assert::AreEqual(tester->GetPosition().x, 218);
			Assert::AreEqual(tester->GetPosition().y, 301);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate6)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateSixButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "6");
			Assert::AreEqual(tester->GetId(), 7);
			Assert::AreEqual(tester->GetPosition().x, 269);
			Assert::AreEqual(tester->GetPosition().y, 301);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate7)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateSevenButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "7");
			Assert::AreEqual(tester->GetId(), 8);
			Assert::AreEqual(tester->GetPosition().x, 167);
			Assert::AreEqual(tester->GetPosition().y, 250);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate8)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateEightButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "8");
			Assert::AreEqual(tester->GetId(), 9);
			Assert::AreEqual(tester->GetPosition().x, 218);
			Assert::AreEqual(tester->GetPosition().y, 250);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreate9)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateNineButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "9");
			Assert::AreEqual(tester->GetId(), 10);
			Assert::AreEqual(tester->GetPosition().x, 269);
			Assert::AreEqual(tester->GetPosition().y, 250);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateAdd)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateAddButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "+");
			Assert::AreEqual(tester->GetId(), 11);
			Assert::AreEqual(tester->GetPosition().x, 320);
			Assert::AreEqual(tester->GetPosition().y, 250);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateSubtract)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateSubtractButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "-");
			Assert::AreEqual(tester->GetId(), 12);
			Assert::AreEqual(tester->GetPosition().x, 320);
			Assert::AreEqual(tester->GetPosition().y, 301);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateMultiply)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateMultiplyButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "*");
			Assert::AreEqual(tester->GetId(), 13);
			Assert::AreEqual(tester->GetPosition().x, 320);
			Assert::AreEqual(tester->GetPosition().y, 352);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateDivide)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateDivideButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "/");
			Assert::AreEqual(tester->GetId(), 14);
			Assert::AreEqual(tester->GetPosition().x, 320);
			Assert::AreEqual(tester->GetPosition().y, 403);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateEquals)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateEqualsButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "=");
			Assert::AreEqual(tester->GetId(), 15);
			Assert::AreEqual(tester->GetPosition().x, 371);
			Assert::AreEqual(tester->GetPosition().y, 403);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateClear)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateClearButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "Clear");
			Assert::AreEqual(tester->GetId(), 16);
			Assert::AreEqual(tester->GetPosition().x, 269);
			Assert::AreEqual(tester->GetPosition().y, 199);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}
		TEST_METHOD(TestCreateMod)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateModuloButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "%");
			Assert::AreEqual(tester->GetId(), 17);
			Assert::AreEqual(tester->GetPosition().x, 116);
			Assert::AreEqual(tester->GetPosition().y, 250);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}


		TEST_METHOD(TestCreateSin)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateSinButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "sin");
			Assert::AreEqual(tester->GetId(), 18);
			Assert::AreEqual(tester->GetPosition().x, 218);
			Assert::AreEqual(tester->GetPosition().y, 199);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateCos)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateCosButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "cos");
			Assert::AreEqual(tester->GetId(), 19);
			Assert::AreEqual(tester->GetPosition().x, 167);
			Assert::AreEqual(tester->GetPosition().y, 199);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateTan)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateTanButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "tan");
			Assert::AreEqual(tester->GetId(), 20);
			Assert::AreEqual(tester->GetPosition().x, 116);
			Assert::AreEqual(tester->GetPosition().y, 199);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateBackspace)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateBackspaceButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "Back");
			Assert::AreEqual(tester->GetId(), 21);
			Assert::AreEqual(tester->GetPosition().x, 320);
			Assert::AreEqual(tester->GetPosition().y, 199);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateDecimal)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateDecimalButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), ".");
			Assert::AreEqual(tester->GetId(), 22);
			Assert::AreEqual(tester->GetPosition().x, 269);
			Assert::AreEqual(tester->GetPosition().y, 403);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}

		TEST_METHOD(TestCreateNegative)
		{
			
			wxButton* tester = nullptr;
			wxFrame tempWindow(nullptr, wxID_ANY, "Temp Window", wxPoint(200, 200), wxSize(500, 500));
			tester = ButtonFactory::CreateNegativeButton(&tempWindow);
			Assert::IsNotNull(tester);
			Assert::AreEqual(tester->GetLabel(), "+/-");
			Assert::AreEqual(tester->GetId(), 23);
			Assert::AreEqual(tester->GetPosition().x, 167);
			Assert::AreEqual(tester->GetPosition().y, 403);
			Assert::AreEqual(tester->GetSize().x, 50);
			Assert::AreEqual(tester->GetSize().y, 50);


		}
	};
}