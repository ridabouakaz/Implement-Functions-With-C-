#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include <chrono>
#include<cmath>
using namespace std;
/*Description
The parse_string function processes an input string (words)
and transforms it by replacing specific characters. Here’s how it works:

Replaces all occurrences of '=' with ':'.
Replaces all occurrences of '&' with a newline ('\n').
Parameters
words (string): The input string to be processed.
Return Value
Returns a new string where the specified character replacements have been applied.*/
string parse_string(string words)
{
	string  result;
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] == '=')
		{
			result += ":";
			continue;
		}
		if (words[i] == '&')
		{
			result += "\n";
			continue;
		}
		result += words[i];
	}
	return result;
}
int main() {
	cout << parse_string("name=Osama&age=43&country=Egypt");
	return 0;
}