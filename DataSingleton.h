#include<iostream>

using namespace std;

class Singleton {

public:
	static Singleton* getInstance();
	void addData(int newData);
	int getData();
	
private:
	static Singleton* thisInstance;
	int data[10];
	static int size;
	static int totalCapacity;
	Singleton();
};


