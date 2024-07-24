#pragma once
#include "wx/wx.h"
#include <string>
#include <vector>
#include <list>


class CalculatorProcessing
{
public:

	static CalculatorProcessing* Instance();
    double Calculate(std::string equation);
	static CalculatorProcessing* GetInstance();

protected:

	CalculatorProcessing();

private:

	static CalculatorProcessing* _instance;
	std::vector<std::string> holding;
	std::vector<std::string> output;
	std::vector<std::string> solve;
	std::vector<std::string> solve2;
};

