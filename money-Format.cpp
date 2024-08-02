#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
/*moneyFormat Function
Purpose
The moneyFormat function takes an integer n and returns a string
representation of that integer with thousands separators (commas).

>>Signature
string moneyFormat(int n);

>>Parameters
n: The integer value to format.
Behavior
Converts the integer n to a string representation using to_string.
Iterates through the characters of the string from right to left.
Adds each character to the result string.
Inserts a comma (,) after every three characters (thousands separator) except for the leftmost group.
Returns the formatted string.*/
string moneyFormat(int n)
{
	string numes = to_string(n);
	string result;
	int count = 0;
	for (int i = numes.size() - 1; i >= 0; i--)
	{
		result = numes[i] + result;
		count++;
		if (count % 3 == 0 && i != 0)
		{
			result = "," + result;
		}
	}
	return result;
}
int main() {
	cout << moneyFormat(100) << endl;
	cout << moneyFormat(1000) << endl;
	cout << moneyFormat(10000) << endl;
	cout << moneyFormat(100000) << endl;
	cout << moneyFormat(1000000) << endl;
	cout << moneyFormat(10000000) << endl;
	cout << moneyFormat(100000000) << endl;
	cout << moneyFormat(1000000000) << endl;
	return 0;
}