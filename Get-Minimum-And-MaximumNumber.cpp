#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Description
The GetMinimumAndMaximumNumber function takes a vector of integers (numbers)
as input and returns the minimum value from that vector.

>>Parameters
numbers (vector<int>): A collection of integers.
>>Behavior
The function initializes a variable called result with the value of the first element in the numbers vector.
It then iterates through the entire vector, comparing each element with the current value of result.
If an element is smaller than the current result, it updates result to that smaller value.
Finally, it returns the minimum value found in the vector.*/
int GetMinimumNumber(vector<int>numbers) {
	int result = numbers.front();
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] < result)
		{
			result = numbers[i];
		}

	}
	return result;
}
int GetMaximumNumber(vector<int>numbers) {
	int result = numbers.front();
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] > result)
		{
			result = numbers[i];
		}

	}
	return result;
}
int main() {
	cout << GetMinimumNumber({ 100, 90, 10, 500 });
	cout << GetMaximumNumber({ 100, 90, 10, 500 });
	return 0;
}