#include "DataSingleton.h"

//this is a singleton

Singleton* Singleton::thisInstance = NULL;
int Singleton::size = 0;
int Singleton::totalCapacity = 10;

Singleton::Singleton() { }

Singleton* Singleton::getInstance() {

	if(thisInstance == NULL) {
		Singleton newInstance = Singleton();
		thisInstance = &newInstance; 
	}

	return thisInstance;
}

void Singleton::addData(int newData) {
	
	if(size == totalCapacity) {
		cout << "Too much data!";
	}
	else {
		data[size] = newData;
		size = size + 1;
	}
}

int Singleton::getData() {
	
	if(0 == size) {
		cout << "No data available";
	}
	else {
		int tempData = data[size - 1];
		size = size - 1;
		return tempData;
	}
}
