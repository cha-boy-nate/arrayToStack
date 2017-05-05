#include <stack>
#pragma once

class arrayToStack {
private:
	//Array private members
	static const int MAX = 10;
	int myArray[MAX];
	
	//Stack declaration
	std::stack<int> myStack;

public:

	//Default Construtor sets all members to NULL.
	arrayToStack();

	//Function should move an element from the top of the stack to the first open position in the array.
	bool moveElementToArray(int location);
	
	//Function should move an element ffrom the location in the array and move it to the top of the stack.
	bool moveElementToStack(int location);

	//Function should take the location of a given element in an array and change the value to the desired value.
	bool changeArrayValue(int location, int value);
	
	//Function should take the value parameter and change to top member of the stack to the given value.
	bool changeStackValue(int value);

	//Function should print out data from both the stack and the array.
	void printData();

	//Function should return the position of the value given.
	int findArrayElement(int value);

	//Function will return the first open element in the array.
	int findOpenElement();

	//Mathematic Functions
	//Function will add the two array elements together from the desired position.
	int add(int a, int b);

	//Function will subtract the two array elements from one another in the desired positions.
	int subtract(int a, int b);

	//Function will multiply the two desired array elements together.
	int multiply(int a, int b);

	//Function will divide a by b both location elements in the array.
	int divide(int a, int b);

};
