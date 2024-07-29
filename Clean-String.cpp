#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include <chrono>
#include<cmath>
using namespace std;
/*Description
The Clean_String function removes unwanted characters from an input string (words).
You can customize the cleaning behavior using the following parameters:
words (string): The input string to be cleaned.
keepnum (bool): Determines whether numeric characters (0-9) should be retained (true) or removed (false).
>>Behavior
The function initializes an empty string called result.
It iterates through each character in the input string:
If keepnum is true, it retains alphanumeric characters (uppercase letters, lowercase letters, and digits).
If keepnum is false, it retains only alphabetic characters (uppercase and lowercase letters).
The function constructs the resulting cleaned string based on the specified behavior.*/
string Clean_String(string words, bool keepnum)
{
	string  result;
	for (int i = 0; i <= words.length(); i++)
	{
		if (keepnum == true)
		{
			if (words[i] >= 65 && words[i] <= 90 || words[i] >= 97 && words[i] <= 122 || words[i] >= 48 && words[i] <= 57)
			{
				result += words[i];
			}
		}
		else
		{
			if (words[i] >= 65 && words[i] <= 90 || words[i] >= 97 && words[i] <= 122)
			{
				result += words[i];
			}
		}
	}

	return result;
}
int main() {
	cout << Clean_String("Elzero//''00Web@#$School__--", true);
	return 0;
}