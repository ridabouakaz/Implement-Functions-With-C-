#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
/*replaceSt Function
>>Purpose
The replaceSt function replaces occurrences of a specified string with a new string in a vector of strings.
It allows limiting the replacement to a certain count.

>>Signature
vector<string> replaceSt(vector<string> sts, string ol, string ne, int count = 1);

>>Parameters
sts: The original vector of strings.
ol: The old string to search for and replace.
ne: The new string to replace occurrences of ol.
count (optional, default: 1): The maximum number of replacements to perform (useful for limiting replacements).
>>Behavior
Creates a new vector called result.
Iterates through each element in the original vector sts.
If the current element matches ol and the replacement count (counttemp) is less than count,
it adds ne to the result vector.
Otherwise, it adds the original element from sts to the result vector.
Returns the modified vector result*/
vector<string> replaceSt(vector<string> sts, string ol, string ne, int count = 1) {
	vector<string>result;
	int counttemp = 0;
	for (int i = 0; i < sts.size(); i++)
	{
		if (sts[i] == ol && counttemp < count)
		{
			result.push_back(ne);
			counttemp++;
		}
		else
		{
			result.push_back(sts[i]);
		}
	}
	return result;
}
int main() {
	vector<string> words = { "Hello", "World", "Hello", "World", "Hello", "World" };
	words = replaceSt(words, "Hello", "Hi");
	for (int i = 0; i < words.size(); i++)
	{
		cout << words[i] << endl;
	}
	return 0;
}