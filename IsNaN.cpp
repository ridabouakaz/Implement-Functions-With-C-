#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*
 *Description
 The IsNaN function checks whether an input string (words) represents a valid integer.
It examines each character in the string and determines if it consists solely of numeric
digits (0-9).

>>Parameters
words (string): The input string to be evaluated.
>>Behavior
The function initializes a variable called result (although it’s not used in the logic).
It iterates through each character in the input string.
If any character is not a digit (i.e., outside the range ‘0’ to ‘9’), the function immediately returns false.
Otherwise, if all characters are digits, it returns true.*/
bool IsNaN(string words) {
	int  result = 0;
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] < '0' || words[i] >'9')
		{
			return false;
		}
	}
	return true;
}


int main() {
	cout << IsNaN("126hh");
	return 0;
}