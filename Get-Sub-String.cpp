#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include <chrono>
#include<cmath>
using namespace std;
/* Description
The Get_Sub_String function extracts a substring from an input string (words) based on specified parameters.
You can customize the extraction behavior using the following arguments:

words (string): The input string from which to extract the substring.
start (int): The starting index (inclusive) of the desired substring.
end (int): The ending index (exclusive) of the desired substring.
inc_end (bool): Determines whether the ending index is inclusive (true) or exclusive (false).
count_space (bool): Determines whether spaces should be included in the substring (true) or skipped (false).
>>Behavior
The function initializes an empty string called result.
It iterates through the characters in the input string:
If inc_end is true, it includes the character at the end index.
If inc_end is false, it excludes the character at the end index.
If count_space is false and the character is a space, it adjusts the end index accordingly.
The function constructs the resulting substring based on the specified indices.*/
string Get_Sub_String(string words, int start, int end, bool inc_end, bool count_space)
{
	string  result;
	for (int i = start; inc_end ? i <= end : i < end; i++)
	{
		if (!count_space && words[i] == ' ')
		{
			end++;
		}
		result += words[i];
	}

	return result;
}
int main() {
	cout << Get_Sub_String("elzero w eb", 0, 7, true, true);
	return 0;
}