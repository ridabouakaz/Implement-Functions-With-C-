#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include <chrono>
#include<cmath>
using namespace std;
/*Description
The in_array function checks whether a given integer (target) exists within a vector of integers (arr). It scans through the vector and returns true if the target value is found; otherwise, it returns false.

>>Parameters
arr (vector<int>): The input vector of integers.
target (int): The value to search for within the vector.
>>Behavior
The function initializes a boolean variable called result to false.
It iterates through each element in the input vector:
If an element matches the specified target, it sets result to true.
The function returns the final value of result.*/
bool in_array(vector<int> arr, int target)
{
	bool result = false;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == target)
		{
			result = true;
		}

	}
	return result;
}
int main() {
	cout << in_array({ 1, 2, 3, 4, 6 }, 5);
	return 0;
}