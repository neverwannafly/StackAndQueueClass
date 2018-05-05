#include "StacksQueues/StacksQueues.hpp"
#include <cmath>
using namespace std;

// This is an application of Stack ADT.
// Post-Fix Calculator.
// Symbols supported are as follows :
// 	-> Multiply     *
//  -> Add          +
//  -> Subtract     -
//  -> Divide		/
//  -> Exponent		^
//
// NOTE -> This program is just a demonstration of how Stacks can be 
// implemented to solve real life problems. Feel free to use these
// classes to solve other problems involving use of stacks and 
// queues. 

bool isCharacterNumber(string character) {
	bool condition = false;
	char numberArray[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	 
	//This function is written assuming that user is not
	//fukin Autistic. If user is indeed autistic, I am in
	//no fukin mood to write a 0(N^2) routine to confirm that
	//input string is indeed a number. PEACE !

	char firstDigit = character[0];

	for(int i=0; i<=9; i++) {
		condition |= firstDigit==numberArray[i];
	}

	 return condition;
}

int main() {

	Stack<float> calculator;
	string tempStr;
	float tempInt;

	while(cin >> tempStr) {
		if(isCharacterNumber(tempStr)) {
			calculator.push(stof(tempStr));
		}
		else {
			float num1, num2;
			try {
				num1 = calculator.popAndReturnData();
				num2 = calculator.popAndReturnData();
			} catch(...) {
				cerr << "Invalid Postfix Notation\n";
			}
			float result;

			try {
				if(tempStr=="*") {
					result = num1*num2;
					cout << calculator.pushAndReturnData(result) << endl;
				} 
				else if(tempStr=="+") {
					result = num1+num2;
					cout << calculator.pushAndReturnData(result) << endl;
				}
				else if(tempStr=="-") {
					result = num1-num2;
					cout << calculator.pushAndReturnData(result) << endl;
				}
				else if(tempStr=="/") {
					if(num2!=0) {
						result = num1/num2;
						cout << calculator.pushAndReturnData(result) << endl;
					}
					else {
						calculator.push(num1);
						calculator.push(num2);
						throw "Division by Zero!\n";
					}
				}
				else if(tempStr=="^") {
					result = pow(num1, num2);
					cout << calculator.pushAndReturnData(result) << endl;
				}
				else {
					calculator.push(num1);
					calculator.push(num2);
					throw "Illegal Postfix Notation\n";
				}
			}
			catch(const char* &e) {
				cerr << e;
			}
		}
	}

	return 0;
}