#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*1. UpperCase Function
>>Description
The UpperCase function converts all lowercase letters in the input string (words) to uppercase.
It leaves non-letter characters unchanged.

>>Parameters
words (string): The input string to be converted.
Return Value
Returns a new string where all lowercase letters are replaced with their uppercase equivalents.
Example Usage
string originalString = "Hello, World!";
string upperCaseString = UpperCase(originalString);
// Result: "HELLO, WORLD!"

2. LowerCase Function
>>Description
The LowerCase function converts all uppercase letters in the input string (words) to lowercase.
It leaves non-letter characters unchanged.

>>Parameters
words (string): The input string to be converted.
Return Value
Returns a new string where all uppercase letters are replaced with their lowercase equivalents.
Example Usage
string originalString = "Hello, World!";
string lowerCaseString = LowerCase(originalString);
// Result: "hello, world!"

3. SwapCase Function
>>Description
The SwapCase function toggles the case of each letter in the input string (words).
Uppercase letters become lowercase, and vice versa. Non-letter characters remain unchanged.

>>Parameters
words (string): The input string to be transformed.
Return Value
Returns a new string where the case of each letter is swapped.
Example Usage
string originalString = "HeLLo, WoRLd!";
string swappedCaseString = SwapCase(originalString);
// Result: "hEllO, wOrlD!"*/
string  UpperCase(string words) {
	string result = "";
	for (int i = 0; i < words.size(); i++)
	{
		words[i] >= 97 && words[i] <= 122 ? result += char(words[i] - 32) : "please change words";
	}
	return result;
}
string  LowerCase(string words) {
	string result = "";
	for (int i = 0; i < words.size(); i++)
	{
		words[i] >= 65 && words[i] <= 90 ? result += char(words[i] + 32) : "please change words";
	}
	return result;
}
string  SwapCase(string words) {
	string result = "";

	for (int i = 0; i < words.size(); i++)
	{
		words[i] >= 65 && words[i] <= 90 ? result += char(words[i] + 32) : words[i] >= 97 && words[i] <= 122 ? result += char(words[i] - 32) : "please change words";
	}
	return result;
}

int main() {
	cout << SwapCase("10");
	return 0;
}