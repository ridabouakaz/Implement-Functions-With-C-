#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include <chrono>
#include<cmath>
using namespace std;
/*Description
The word_count function calculates the number of words in an input string (st).
It considers words separated by a specified character (defaulting to a space ' ').

>>Parameters
st (string): The input string to be analyzed.
sep (char, optional): The separator character used to identify word boundaries. Defaults to a space (' ').
>>Behavior
The function initializes a variable called result to 0 and a boolean flag called falge (I assume you meant “flag” here).
It iterates through each character in the input string:
If the character is equal to the specified separator (sep), it increments result and sets falge to false.
Otherwise (if the character is not the separator), it sets falge to true.
After the loop, it checks the value of falge:
If it’s true, it increments result once more (to account for the last word).
The function returns the total word count.*/
int word_count(string st, char sep = ' ')
{
	int  result = 0;
	bool falge = false;
	for (int i = 0; i < st.length(); i++)
	{
		if (st[i] == sep)
		{
			result++;
			falge = false;
		}
		else
		{
			falge = true;
		}
	}
	if (falge)
	{
		result++;
	}
	return result;
}
int main() {
	cout << word_count("Hello Elzero Web School", ' ');
	return 0;
}