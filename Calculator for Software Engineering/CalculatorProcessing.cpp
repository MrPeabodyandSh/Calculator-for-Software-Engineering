#include "CalculatorProcessing.h"


CalculatorProcessing::CalculatorProcessing()
{

}

CalculatorProcessing* CalculatorProcessing::_instance = 0;


CalculatorProcessing* CalculatorProcessing::Instance()
{
	if (_instance == 0)
	{
		_instance = new CalculatorProcessing();
	}

	return _instance;
}

double CalculatorProcessing::Calculate(std::string equation)
{

}