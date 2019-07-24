/*
A simple calculator of sorts.

© D. Green 2019
*/

#include"D:\Visual_Studio_Projects_Cpp_book\std_lib_facilities.h"
#include<iostream>

using namespace std;

int main()
{
	cout << "Please enter a mathmatical operator, either by symbol or by name, followed by two numbers that will then be processed using the given operator:> \n";
	cout << "Here are the known operators:\n"
		<< "For addition		- '+' or 'plus'\n"
		<< "For subtraction		- '-' or 'minus'\n"
		<< "For multiplication	- '*' or 'multiply'\n"
		<< "For division		- '/' or 'divide'\n";

	string operation = " ";
	double num_1 = 0;
	double num_2 = 0;
	double result = 0;

	while (cin >> operation >> num_1 >> num_2)
	{
		if (operation == "+" || operation == "plus")
		{
			result = num_1 + num_2;
		}
		else if (operation == "-" || operation == "minus")
		{
			result = num_1 - num_2;
		}
		else if (operation == "*" || operation == "multiply")
		{
			result = num_1 * num_2;
		}
		else if (operation == "/" || operation == "divide")
		{
			result = num_1 / num_2;
		}

		cout << "The answer is " << result << ".\n";

		cout << "Please type 'quit program' to quit:> \n";

		cout << "Alternatively please enter another operator followed by two more numbers:> \n";
	}

	cout << "Program exit.\n";


	return 0;
}