#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*
 *pushItem Function
>>Purpose
The pushItem function extends an existing vector of
strings by adding a new item (string) to the end.

>>Signature
vector<string> pushItem(vector<string> v, string item);

>>Parameters
v: The original vector of strings.
item: The string to add to the vector.
>>Behavior
Creates a new vector called result with a size one greater than the original vector (v).
Copies all elements from the original vector v into the new vector result.
Adds the specified item to the last position in result.
Returns the modified vector result*/
vector<string> pushItem(vector<string> v, string item)
{
	vector<string>result(v.size() + 1);
	for (int i = 0; i < v.size(); i++)
	{
		result[i] = v[i];
	}
	result[v.size()] = item;
	return result;
}
int main() {
	vector<string> names = { "Osama", "Ahmed", "Sayed", "Ali" };
	names = pushItem(names, "Mahmoud");
	names = pushItem(names, "Gamal");
	for (string name : names)
	{
		cout << name << endl;
	}
	return 0;
}