#include<iostream>
#include<assert.h>

using namespace std;

bool isPrime(int number);

const int nineteen = 19;
const int twenty = 20;

int main(int argc, char** argv) {

bool result = isPrime(nineteen);

assert(result); //19 is prime

result = isPrime(twenty);

assert(!result); //20 is not prime

return 0;
}

bool isPrime(int number) {

	int half = number / 2;
	
	int i = 2;
	while(i <= half) {
		
		if(0 == number % i) {
			return false;
		}
		i++;
	}
	return true;
}
