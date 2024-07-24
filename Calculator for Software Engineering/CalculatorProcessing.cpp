#include "CalculatorProcessing.h"
#include <algorithm>
#include <cmath>
#include <wx/tokenzr.h>




CalculatorProcessing::CalculatorProcessing()
{
	_instance = 0;
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

CalculatorProcessing* CalculatorProcessing::GetInstance()
{
	return _instance;
}

double CalculatorProcessing::Calculate(std::string equation)
{
	std::string stringCatch;
	double check2 = 0;
	double answer = 0;
	double number1 = 0;
	double number2 = 0;
	int offset1 = 0;
	int offset2 = 0;
	int offset3 = 0;
	int offset4 = 0;
	int offset5 = 0;
	int opOrder = 0;
	int opOrderOffset = 1;
	int preOpOrderOffset = 0;
	int count2 = 0;
	wxString tokenizeCatch;
	std::string number1String;
	std::string number2String;
	wxString solveCatch;
	wxString equationWx = equation;
	wxStringTokenizer tokenize(equationWx);
	bool breakCheck1 = false;


	for (int i = 0; i < equation.size(); ++i)
	{
		tokenizeCatch = tokenize.GetNextToken();

		if (tokenizeCatch == "")
		{
			tokenizeCatch.clear();
			continue;
		}

		if (tokenizeCatch.ToDouble(&check2) == false)
		{
			if (!holding.empty() && tokenizeCatch == "-" || !holding.empty() && holding[0] == "sin" && tokenizeCatch != "sin" || !holding.empty() && holding[0] == "sin" && tokenizeCatch != "cos" || !holding.empty() && holding[0] == "sin" && tokenizeCatch != "tan" || !holding.empty() && holding[0] == "cos" && tokenizeCatch != "sin" || !holding.empty() && holding[0] == "cos" && tokenizeCatch != "cos" || !holding.empty() && holding[0] == "cos" && tokenizeCatch != "tan" || !holding.empty() && holding[0] == "tan" && tokenizeCatch != "sin" || !holding.empty() && holding[0] == "tan" && tokenizeCatch != "cos" || !holding.empty() && holding[0] == "tan" && tokenizeCatch != "tan")
			{
				if (holding.size() == 1)
				{
					for (auto& character : holding)
					{
						output.push_back(character);
					}
				}

				else
				{
					std::vector<std::string>::iterator order = holding.end() - 1;

					for (int i = 0; i < holding.size(); ++i)
					{
						output.push_back(*order);
						++opOrderOffset;

						if (opOrderOffset > holding.size())
						{
							break;
						}

						order = holding.end() - opOrderOffset;
					}
				}

				holding.clear();
			}
		}


		preOpOrderOffset = holding.size() - 1;

		if (!holding.empty() && tokenizeCatch == "*" && holding[preOpOrderOffset] == "sin" || !holding.empty() && tokenizeCatch == "*" && holding[preOpOrderOffset] == "cos" || !holding.empty() && tokenizeCatch == "*" && holding[preOpOrderOffset] == "tan")
		{
			if (holding.size() == 1)
			{
				for (auto& character : holding)
				{
					output.push_back(character);
				}
			}

			else
			{
				std::vector<std::string>::iterator order = holding.end() - 1;


				for (int i = 0; i < holding.size(); ++i)
				{
					++count2;

					if (count2 > 0 && *order == "-" || count2 > 0 && *order == "+")
					{
						breakCheck1 = true;
						break;
					}

					output.push_back(*order);
					++opOrderOffset;


					if (opOrderOffset > holding.size())
					{
						break;
					}

					order = holding.end() - opOrderOffset;
				}
			}

			if (breakCheck1)
			{
				stringCatch = tokenizeCatch;
				holding.pop_back();
			}

			else
			{
				holding.clear();

			}

		}

		if (!holding.empty() && tokenizeCatch == "/" && holding[preOpOrderOffset] == "sin" || !holding.empty() && tokenizeCatch == "/" && holding[preOpOrderOffset] == "cos" || !holding.empty() && tokenizeCatch == "/" && holding[preOpOrderOffset] == "tan")
		{
			if (holding.size() == 1)
			{
				for (auto& character : holding)
				{
					output.push_back(character);
				}
			}

			else
			{
				std::vector<std::string>::iterator order = holding.end() - 1;

				for (int i = 0; i < holding.size(); ++i)
				{
					if (*order == "-" || *order == "+")
					{
						break;
					}

					output.push_back(*order);
					++opOrderOffset;

					if (opOrderOffset > holding.size())
					{
						break;
					}

					order = holding.end() - opOrderOffset;
				}
			}

			holding.clear();
		}

		if (!holding.empty() && tokenizeCatch == "+" && holding[preOpOrderOffset] == "*" || !holding.empty() && tokenizeCatch == "+" && holding[preOpOrderOffset] == "/" || !holding.empty() && tokenizeCatch == "+" && holding[preOpOrderOffset] == "%")
		{
			if (holding.size() == 1)
			{
				for (auto& character : holding)
				{
					output.push_back(character);
				}
			}

			else
			{
				std::vector<std::string>::iterator order = holding.end() - 1;

				for (int i = 0; i < holding.size(); ++i)
				{
					if (*order == "-")
					{
						break;
					}

					output.push_back(*order);
					++opOrderOffset;

					if (opOrderOffset > holding.size())
					{
						break;
					}

					order = holding.end() - opOrderOffset;
				}
			}

			holding.clear();
		}

		if (!holding.empty() && tokenizeCatch == "%" && holding[preOpOrderOffset] == "*" || !holding.empty() && tokenizeCatch == "%" && holding[preOpOrderOffset] == "/" || !holding.empty() && tokenizeCatch == "%" && holding[preOpOrderOffset] == "sin" || !holding.empty() && tokenizeCatch == "%" && holding[preOpOrderOffset] == "cos" || !holding.empty() && tokenizeCatch == "%" && holding[preOpOrderOffset] == "tan")
		{
			if (holding.size() == 1)
			{
				for (auto& character : holding)
				{
					output.push_back(character);
				}
			}

			else
			{
				std::vector<std::string>::iterator order = holding.end() - 1;

				for (int i = 0; i < holding.size(); ++i)
				{
					if (*order == "-" || *order == "+")
					{
						break;
					}

					output.push_back(*order);
					++opOrderOffset;

					if (opOrderOffset > holding.size())
					{
						break;
					}

					order = holding.end() - opOrderOffset;
				}
			}

			holding.clear();
		}

		if (tokenizeCatch.ToDouble(&check2) == true)
		{
			stringCatch = tokenizeCatch;
			output.push_back(stringCatch);
			tokenizeCatch.clear();
		}

		else
		{
			stringCatch = tokenizeCatch;
			holding.push_back(stringCatch);
			tokenizeCatch.clear();
		}
	}

	std::vector<std::string>::iterator order = holding.begin() + holding.size() - 1;
	opOrderOffset = holding.size() - 1;

	if (!holding.empty())
	{
		for (int i = 0; i < holding.size(); ++i)
		{
			output.push_back(*order);
			--opOrderOffset;

			if (opOrderOffset > holding.size())
			{
				break;
			}

			order = holding.begin() + opOrderOffset;
		}
	}

	for (auto& character : output)
	{
		solve.push_back(character);
	}

	while (solve.size() != 1)
	{
		for (int i = 0; i < solve.size(); ++i)
		{
			offset3 = i + 1;
			offset4 = i - 1;
			offset5 = i - 2;
			solveCatch = solve[i];

			if (solveCatch.ToDouble(&check2) == false)
			{

				if (solveCatch == "sin")
				{
					number1String = solve[offset4];
					number1 = std::stod(number1String);
					number1 = sin(number1);
					number1String = std::to_string(number1);
					solve.erase(solve.begin() + offset4, solve.begin() + offset3);
					solve.emplace(solve.begin() + offset4, number1String);
					i = 0;

					if (solve.size() == 1)
					{
						answer = number1;
					}

					continue;
				}

				if (solveCatch == "cos")
				{
					number1String = solve[offset4];
					number1 = std::stod(number1String);
					number1 = cos(number1);
					number1String = std::to_string(number1);
					solve.erase(solve.begin() + offset4, solve.begin() + offset3);
					solve.emplace(solve.begin() + offset4, number1String);
					i = 0;

					if (solve.size() == 1)
					{
						answer = number1;
					}

					continue;
				}

				if (solveCatch == "tan")
				{
					number1String = solve[offset4];
					number1 = std::stod(number1String);
					number1 = tan(number1);
					number1String = std::to_string(number1);
					solve.erase(solve.begin() + offset4, solve.begin() + offset3);
					solve.emplace(solve.begin() + offset4, number1String);
					i = 0;

					if (solve.size() == 1)
					{
						answer = number1;
					}

					continue;
				}

			}

			if (solveCatch == "*")
			{
				number1String = solve[offset5];
				number2String = solve[offset4];
				number1 = std::stod(number1String);
				number2 = std::stod(number2String);
				answer = number1 * number2;
				solve.erase(solve.begin() + offset5, solve.begin() + offset3);
				stringCatch = std::to_string(answer);

				if (solve.size() == 0)
				{
					solve.push_back(stringCatch);
				}


				else
				{
					if (solve[0] == "%")
					{
						solve.emplace(solve.begin(), stringCatch);
					}
					
					else
					{
						solve.emplace(solve.begin() + 1, stringCatch);
					}

					
				}

			}

			if (solveCatch == "/")
			{
				number1String = solve[offset5];
				number2String = solve[offset4];
				number1 = std::stod(number1String);
				number2 = std::stod(number2String);
				answer = number1 / number2;
				solve.erase(solve.begin() + offset5, solve.begin() + offset3);
				stringCatch = std::to_string(answer);

				if (solve.size() == 0)
				{
					solve.push_back(stringCatch);
				}

				else
				{
					solve.emplace(solve.begin() + 1, stringCatch);
				}

			}

			if (solveCatch == "%")
			{
				number1String = solve[offset4];
				number1 = std::stod(number1String);
				number1 = number1 / 100;
				number1String = std::to_string(number1);
				solve.erase(solve.begin() + offset4, solve.begin() + offset3);
				solve.emplace(solve.begin() + offset4, number1String);

				if (solve.size() == 0)
				{
					solve.push_back(stringCatch);
				}

				if (solve.size() == 1)
				{
					answer = number1;
					continue;
				}
			}

			if (solveCatch == "+")
			{
				number1String = solve[offset5];
				number2String = solve[offset4];
				number1 = std::stod(number1String);
				number2 = std::stod(number2String);
				answer = number1 + number2;
				solve.erase(solve.begin() + offset5, solve.begin() + offset3);
				stringCatch = std::to_string(answer);

				if (solve.size() == 0)
				{
					solve.push_back(stringCatch);
				}

				else
				{
					solve.emplace(solve.begin() + 1, stringCatch);
				}

			}

			if (solveCatch == "-")
			{
				number1String = solve[offset5];
				number2String = solve[offset4];
				number1 = std::stod(number1String);
				number2 = std::stod(number2String);
				answer = number1 - number2;
				solve.erase(solve.begin() + offset5, solve.begin() + offset3);
				stringCatch = std::to_string(answer);

				if (solve.size() == 0)
				{
					solve.push_back(stringCatch);
				}

				else
				{
					solve.emplace(solve.begin() + 1, stringCatch);
				}
			}

		}


	}

	offset3 = 0;
	offset4 = 0;
	offset5 = 0;
	number1 = 0;
	number2 = 0;
	opOrderOffset = 0;
	preOpOrderOffset = 0;
	output.clear();
	holding.clear();
	solve.clear();
	return answer;
}



