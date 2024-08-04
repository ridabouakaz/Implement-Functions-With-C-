#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Description
The Trim_String function trims (removes) specified characters from the beginning and/or end of an input string (words).
You can customize the trimming behavior using the following parameters:
words (string): The input string to be trimmed.
decriton (string, optional): Determines the trimming direction. Possible values:
"all" (default): Trims characters from both ends.
"left": Trims characters from the left (beginning) only.
"right": Trims characters from the right (end) only.
no (char, optional): The character to be trimmed. Defaults to a space (’ ').
>>Behavior
The function initializes two counters: countfirst (for leading characters) and countlast (for trailing characters).
It scans the input string:
From the beginning, it counts consecutive occurrences of the specified no character.
From the end, it counts consecutive occurrences of the specified no character.
Based on the decriton parameter:
If "all", it constructs a new string by excluding the leading and trailing no characters.
If "left", it constructs a new string by excluding the leading no characters.
If "right", it constructs a new string by excluding the trailing no characters.*/
string Trim_String(string words, string decriton = "all", char no = ' ') {
	string  result = "";
	int countfirst = 0;
	int countlast = 0;
	for (int i = 0; i < words.length(); i++)
	{
		if (words[i] == no)
		{
			countfirst++;
		}
		else
		{
			break;
		}
	}
	for (int i = words.size() - 1; i >= 0; i--)
	{
		if (words[i] == no)
		{
			countlast++;
		}
		else
		{
			break;
		}
	}
	if (decriton == "all")
	{
		for (int i = countfirst; i < words.length() - countlast; i++)
		{
			result += words[i];
		}
	}
	else if (decriton == "left")
	{
		for (int i = countfirst; i < words.length(); i++)
		{
			result += words[i];
		}
	}
	else
	{
		for (int i = 0; i < words.length() - countlast; i++)
		{
			result += words[i];
		}
	}
	return result;
}
int main() {
	cout << Trim_String("###rida####", "right", '#');
	return 0;
}
