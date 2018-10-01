//============================================================================
// Name        : Hello_World.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

class MyClass{
private:
	int myInt;

public:

	MyClass(int myInt):myInt(myInt){}

	int getMyInt() const {
		return myInt;
	}

	void setMyInt(int myInt) {
		this->myInt = myInt;
	}
};

int main() {
	MyClass myClass(1);

	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	std::cout << myClass.getMyInt() << std::endl;

	//Change 2//
	return 0;
}
