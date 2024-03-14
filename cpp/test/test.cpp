// main.cpp
#include <iostream>
#include "../include/grad.hpp"
#include <cassert>

void testAddition() {
	
	int i = 4;
	Value<int> myvalue = Value<int>(&i);
	int j = 2;
	Value<int> myvalue2 = Value<int>(&j);
	Value<int> myvalue3 = myvalue + myvalue2;
	
	assert(*myvalue3.val==6);

}

void testSubtraction() {
	
	int i = 4;
	Value<int> myvalue = Value<int>(&i);
	int j = 2;
	Value<int> myvalue2 = Value<int>(&j);
	Value<int> myvalue3 = myvalue - myvalue2;
	
	assert(*myvalue3.val==2);

}

void testMultiplication() {
	
	int i = 4;
	Value<int> myvalue = Value<int>(&i);
	int j = 2;
	Value<int> myvalue2 = Value<int>(&j);
	Value<int> myvalue3 = myvalue*myvalue2;
	
	assert(*myvalue3.val==8);

}

void testDivision() {
	
	int i = 4;
	Value<int> myvalue = Value<int>(&i);
	int j = 2;
	Value<int> myvalue2 = Value<int>(&j);
	Value<int> myvalue3 = myvalue/myvalue2;
	
	assert(*myvalue3.val==8);

}


int main() {

	testAddition();
	testSubtraction();
	testMultiplication();
	testDivision();
	return 0;
}

