#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
/*generateChars Function
>>Purpose
The generateChars function creates a string containing specific sets of characters based on the provided flags:

Capital letters (A-Z) if caps is true.
Lowercase letters (a-z) if lows is true.
Numerals (0-9) if nums is true.
>>Signature
string generateChars(bool caps = true, bool lows = false, bool nums = false);

>>Parameters
caps: A boolean flag indicating whether to include capital letters (default: true).
lows: A boolean flag indicating whether to include lowercase letters (default: false).
nums: A boolean flag indicating whether to include numerals (default: false).
>>Behavior
Initializes an empty string called result.
If caps is true, adds capital letters (ASCII values 65 to 90) to result.
If lows is true, adds lowercase letters (ASCII values 97 to 122) to result.
If nums is true, adds numerals (ASCII values 48 to 57) to result.
Returns the concatenated string.*/
string generateChars(bool caps = true, bool lows = false, bool nums = false)
{
	string result;
	if (caps == true)
	{
		for (int i = 65; i < 91; i++)
		{
			result += char(i);
		}
	}
	if (lows == true)
	{
		for (int i = 97; i < 123; i++)
		{
			result += char(i);
		}
	}
	if (nums == true)
	{
		for (int i = 48; i < 58; i++)
		{
			result += char(i);
		}
	}
	return result;
}
int main() {
	string chars = generateChars();
	cout << chars << endl;
	return 0;
}