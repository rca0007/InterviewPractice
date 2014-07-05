#include<iostream>
#include<assert.h>
#include"DataSingleton.h"

using namespace std;

int main(int argc, char** argv) {

int test = 5;

Singleton* db1 = Singleton::getInstance();
Singleton* db2 = Singleton::getInstance();

db1->addData(test);
int data = db1->getData();

assert(5 == data);

db1->addData(6);
db1->addData(7);
db1->addData(8);

data = db1->getData();
assert(8 == data);

data = db1->getData();
assert(7 == data);

data = db1->getData();
assert(6 == data);

return 0;
}
