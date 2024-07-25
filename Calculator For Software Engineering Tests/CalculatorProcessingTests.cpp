#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\apple\source\repos\Calculator for Software Engineering\Calculator for Software Engineering/CalculatorProcessing.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorForSoftwareEngineeringTests
{
	TEST_CLASS(CalculatorForSoftwareEngineeringTests)
	{
	public:

		TEST_METHOD(TestingAdditon)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("5 + 5");
			Assert::AreEqual(number, 10);
		}

		TEST_METHOD(TestingMultipleAdd)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("5 + 5 + 5");
			Assert::AreEqual(number, 15);
		}

		TEST_METHOD(TestingSubtraction)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("5 - 3");
			Assert::AreEqual(number, 2);
		}

		TEST_METHOD(TestingMultiplication)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("2 * 4");
			Assert::AreEqual(number, 8);
		}

		TEST_METHOD(TestingDivision)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("9 / 3");
			Assert::AreEqual(number, 3);
		}

		TEST_METHOD(TestingMod)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("9 %");
			Assert::AreEqual(number, 9 / 100);
		}

		TEST_METHOD(TestingSin)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("sin 5");
			Assert::AreEqual(number, 0);
		}

		TEST_METHOD(TestingCos)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("cos 2");
			Assert::AreEqual(number, -0);
		}

		TEST_METHOD(TestingTan)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("tan 52");
			Assert::AreEqual(number, -6);
		}

		TEST_METHOD(TestingNegatives)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("-25 + 5");
			Assert::AreEqual(number, -20);

		}

		TEST_METHOD(TestingNegativesMult)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("-25 * 2");
			Assert::AreEqual(number, -50);
		}

		TEST_METHOD(TestingNegativesSubtract)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("-1 - 2");
			Assert::AreEqual(number, -3);
		}

		TEST_METHOD(TestingNegativesDivide)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("-25 / 5");
			Assert::AreEqual(number, -5);
		}

		TEST_METHOD(TestingNegativesMod)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("-9 %");
			Assert::AreEqual(number, -9 / 100);
		}

		TEST_METHOD(TestingOrderOfOperations)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("100 + 200 * 2");
			Assert::AreEqual(number, 500);
		}

		TEST_METHOD(TestingMultipleTrig)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("sin 5 * cos 9 / tan 15");
			Assert::AreEqual(number, -1);
		}

		TEST_METHOD(TestingTrigAndNotTrig)
		{
			CalculatorProcessing process;
			int number = 0;
			number = process.Calculate("2 + 2.5 / sin 5");
			Assert::AreEqual(number, 0);
		}
	};
}