#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include <chrono>
#include<cmath>
using namespace std;
/*Description
The firstCapital function checks whether an input string (st) adheres to a specific capitalization rule:

The first character must be an uppercase letter.
If there are spaces in the string, the character immediately following each space must also be an uppercase letter.
Parameters
st (string): The input string to be evaluated.
Behavior
The function initializes a boolean variable called result to true.
It iterates through each character in the input string:
If the current character is the first character (index 0) and it is not an uppercase letter, it sets result to false.
If the current character is a space and the character immediately following it (at index i+1) is not an uppercase letter, it also sets result to false.
If result becomes false, the function immediately returns false.
Otherwise, it returns true*/
bool firstCapital(string st)
{
	bool result = true;
	for (int i = 0; i < st.length(); i++)
	{
		if (i == 0 && !(st[i] >= 'A' && st[i] <= 'Z'))
		{
			result = false;
		}
		else if (i == ' ' && !(st[i + 1] >= 'A' && st[i + 1] <= 'Z'))
		{
			result = false;
		}
		if (!result)
		{
			return false;
		}
	}
	return result;
}
int main() {
	cout << firstCapital("Hello Elzero Web School");
	return 0;
}