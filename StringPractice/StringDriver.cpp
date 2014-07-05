#include<iostream>
#include<assert.h>

using namespace std;

void reverse(char* aString);
int getSize(char* aString);

int main(int argc, char** argv) {

char string1[] = {'b', 'u', 'n', 'n', 'y', '\0'};

cout << "Before: " << string1 << endl;

assert(getSize(string1) == 5);

reverse(string1);

cout << "After: " << string1 << endl;

}

void reverse(char* aString) {
	
	int end = getSize(aString);
	end = end - 1;

	int half = end / 2;

	int i = 0;
	char temp;
	while(i < half) {
		temp = aString[i];
		aString[i] = aString[end];
		aString[end] = temp;
		i++;
		end--;
	}
}

int getSize(char* aString) {
	
	int size = 0;
	while(aString[size] != '\0') {
		size++;
	}

	return size;	
}

