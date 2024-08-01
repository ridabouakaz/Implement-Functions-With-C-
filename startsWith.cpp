#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*startsWith Function
>>Purpose
The startsWith function checks whether a given string starts with a specified prefix.
It provides flexibility for case-sensitive or case-insensitive comparisons.

>>Signature
bool startsWith(string st, string prefix, bool caseSensitive = true);

>>Parameters
st: The input string to check.
prefix: The prefix to compare against the beginning of st.
caseSensitive (optional, default: true): A boolean flag indicating whether the comparison should be case-sensitive.
>>Behavior
If caseSensitive is true:
Compares characters in st and prefix directly (case-sensitive).
Returns true if st starts with prefix, otherwise false.
If caseSensitive is false:
Converts both st and prefix to uppercase using toupper.
Compares the uppercase versions of characters.
Returns true if case-insensitive match, otherwise false.*/
bool startsWith(string st, string prefix, bool caseSensitive = true)
{
	if (caseSensitive == false)
	{
		for (int i = 0; i < prefix.size(); i++)
		{
			if ((toupper(st[i]) != toupper(prefix[i])))
			{
				return  false;
			}
		}
	}
	else
	{
		for (int i = 0; i < prefix.length(); i++)
		{
			if ((st[i] != prefix[i]))
			{
				return false;
			}
		}
	}
	return true;
}
int main() {
	cout << startsWith("Elzero Web School", "elzero", true) << endl;
	return 0;
}