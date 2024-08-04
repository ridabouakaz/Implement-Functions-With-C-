#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*
  *Description
The ParseInteger function extracts an integer value from an input string (words).
It scans the string for consecutive digits (0-9) and constructs the corresponding integer.

>>Parameters
words (string): The input string containing numeric characters.
>>Behavior
The function initializes a variable called result to 0.
It iterates through each character in the input string.
If the character is a digit (ASCII value between 48 and 57),
it converts the character to its numeric value and accumulates it in result.
The function returns the final accumulated integer value.*/
int ParseInteger(string words) {
	int  result = 0;
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] >= 48 && words[i] <= 57)
		{
			result = result * 10 + (words[i] - '0');
		}
	}
	return result;
}


int main() {
	cout << ParseInteger("-10heloo0");
	return 0;
}
