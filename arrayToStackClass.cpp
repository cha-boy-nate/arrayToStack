#include "arrayToStackClass.h"
#include <assert.h>
#include <iostream>

arrayToStack::arrayToStack() {
	for (int i = 0; i < MAX; i++) {
		myArray[i] = NULL;
	}
}

int arrayToStack::findOpenElement() {
	int i = 0;
	while (myArray[i] != NULL) {
		i++;
	}
	return i;
}

bool arrayToStack::moveElementToArray(int location) {
	if (location > MAX || location < 0) {
		return false;
	} else {
		int dataMember = myStack.top(), openPos = findOpenElement();
		myStack.pop();
		changeArrayValue(openPos, dataMember);
		return true;
	}
}

bool arrayToStack::moveElementToStack(int location) {
	int dataMember = myArray[location];
	myStack.push(dataMember);
	return true;
}

bool arrayToStack::changeArrayValue(int location, int value) {
	myArray[location] = value;
	return true;
}

bool arrayToStack::changeStackValue(int value) {
	myStack.pop();
	myStack.push(value);
	return true;
}

void arrayToStack::printData() {
	std::cout << "Array: " << std::endl;
	for (int i = 0; i < MAX; i++) {
		if (i == 5) {
			std::cout << std::endl;
		}
		std::cout << myArray[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Stack: " << std::endl;
	while (!myStack.empty()) {
		std::cout << myStack.top() << std::endl;
		myStack.pop();
	}
	std::cout << std::endl;
}

int arrayToStack::findArrayElement(int value) {
	int location = 0;
	while (myArray[location] != value) {
		location++;
		if (location > MAX) {
			return 0;
		}
	}
	return location;
}

int arrayToStack::add(int a, int b) {
	int result = 0, valueOne = myArray[a], valueTwo = myArray[b];
	result = valueOne + valueTwo;
	return result;
}

int arrayToStack::subtract(int a, int b) {
	int result = 0, valueOne = myArray[a], valueTwo = myArray[b];
	result = valueOne - valueTwo;
	return result;
}

int arrayToStack::multiply(int a, int b) {
	int result = 0, valueOne = myArray[a], valueTwo = myArray[b];
	result = valueOne * valueTwo;
	return result;
}

int arrayToStack::divide(int a, int b) {
	int result = 0, valueOne = myArray[a], valueTwo = myArray[b];
	result = valueOne / valueTwo;
	return result;
}

