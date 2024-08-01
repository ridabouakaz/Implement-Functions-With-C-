#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Description
The String_slice function extracts a substring from an input string (st) based on specified indices and step size.
You can customize the slicing behavior using the following parameters:

st (string): The input string to be sliced.
start (int): The starting index (inclusive) of the desired substring.
end (int): The ending index (exclusive) of the desired substring.
step (int, optional): The step size for selecting elements. Defaults to 1 (select consecutive elements).
rev (bool, optional): Determines whether the slicing direction is reversed (from end to start). Defaults to false.
>>Behavior
The function initializes an empty string called result.
Depending on the value of rev:
If rev is false, it iterates through the input string from start to end-1 (inclusive) with the specified step size.
It appends the selected characters to result.
If rev is true, it iterates through the input string from end-1 to start (inclusive) with the specified step size.
It appends the selected characters to result.
The function returns the resulting sliced substring.*/
string String_slice(string st, int start, int end, int step = 1, bool rev = false)
{
	string result = "";
	if (rev == false)
	{
		for (int i = start; i < end; i = i + step)
		{
			result += st[i];
		}
	}
	else
	{
		for (int i = end - 1; i >= start; i = i - step)
		{
			result += st[i];
		}
	}
	return result;
}
int main() {
	cout << String_slice("Hello, World", 0, 6) << endl;
	return 0;
}