#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Description
The Join_Elements function combines a vector of strings (names)
into a single string by joining them with a specified separator (sep).
It constructs a comma-separated list of elements (or any other separator provided).

>>Parameters
names (vector<string>): The input vector of strings to be joined.
sep (string, optional): The separator used to join the elements. Defaults to a comma (,).
>>Behavior
The function initializes an empty string called result.
It iterates through each element in the input vector:
If the current element is not the last one, it appends the element followed by the specified separator.
If the current element is the last one, it appends the element without the separator.
The function returns the resulting joined string.*/
string Join_Elements(vector<string> names, string sep = ",")
{
	string result;
	for (int i = 0; i < names.size(); i++)
	{
		!(names[i] == names.at(names.size() - 1)) ? result += names[i] + sep : result += names[i];
	}
	return result;
}

int main() {
	cout << Join_Elements({ "Elzero", "Web", "School" }, " | ") << endl;
	return 0;
}