#pragma once
#include <string>

class CalculatorProcessing
{
public:

	static CalculatorProcessing* Instance();
	double Calculate(std::string equation);

protected:

	CalculatorProcessing();

private:

	static CalculatorProcessing* _instance;
};

