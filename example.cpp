#include "StacksQueues/StacksQueues.hpp"
#include <cmath>

// This is an application of Stack ADT.
// Post-Fix Calculator.
// Symbols supported are as follows :
// 	-> Multiply		*
//  -> Add			+
//  -> Subtract		-
//  -> Divide		/
//  -> Exponent		^
//
// NOTE -> This program is just a demonstration of how Stacks can be 
// implemented to solve real life problems. Feel free to use these
// classes to solve other problems involving use of stacks and 
// queues. 

bool isCharacterNumber(std::string character) {
	bool condition = false;
	char numberArray[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	for (int i=0; i<character.size(); i++) {
		for(int j=0; j<=9; j++) {
			condition &= character[i]==numberArray[j];
		}
	}

	 return condition;
}

int main() {

	Stack<float> calculator;
	std::string tempStr;
	float tempInt;

	while(std::cin >> tempStr) {
		if(isCharacterNumber(tempStr)) {
			calculator.push(std::stof(tempStr));
		}
		else {
			float num1, num2;
			try {
				num1 = calculator.popAndReturnData();
				num2 = calculator.popAndReturnData();
			} catch(...) {
				std::cerr << "Invalid Postfix Notation\n";
			}
			float result;

			try {
				if(tempStr=="*") {
					result = num1*num2;
					std::cout << calculator.pushAndReturnData(result) << std::endl;
				} 
				else if(tempStr=="+") {
					result = num1+num2;
					std::cout << calculator.pushAndReturnData(result) << std::endl;
				}
				else if(tempStr=="-") {
					result = num1-num2;
					std::cout << calculator.pushAndReturnData(result) << std::endl;
				}
				else if(tempStr=="/") {
					if(num2!=0) {
						result = num1/num2;
						std::cout << calculator.pushAndReturnData(result) << std::endl;
					}
					else {
						calculator.push(num1);
						calculator.push(num2);
						throw "Division by Zero!\n";
					}
				}
				else if(tempStr=="^") {
					result = pow(num1, num2);
					std::cout << calculator.pushAndReturnData(result) << std::endl;
				}
				else {
					calculator.push(num1);
					calculator.push(num2);
					throw "Illegal Postfix Notation\n";
				}
			}
			catch(const char* &e) {
				std::cerr << e;
			}
		}
	}

	return 0;
}