#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*
 >>Description
The getSumOfNumbers function calculates the result of a mathematical operation on a vector of integers (nums).
The operation can be addition (+), subtraction (-), or multiplication (*). By default,
the function performs addition if no specific operation is provided.

>>Parameters
nums (vector<int>): A collection of integers.
operation (char, optional): The mathematical operation to apply. Defaults to addition (+). Possible values: +, -, or *.
>>Behavior
The function initializes a variable called result.
Depending on the specified operation:
If operation is +, it adds up all the integers in the nums vector.
If operation is -, it subtracts each integer in the nums vector from the initial result.
If operation is *, it multiplies each integer in the nums vector with the initial result.
The final result is returned.*/

int getSumOfNumbers(vector<int> nums, char operation = '+') {
	int result = 0;
	if (operation == '+')
	{
		for (int i = 0; i < nums.size(); i++)
		{
			result += nums[i];

		}
	}
	if (operation == '-')
	{
		for (int i = 0; i < nums.size(); i++)
		{
			result -= nums[i];

		}
	}
	if (operation == '*')
	{
		result = 1;
		for (int i = 0; i < nums.size(); i++)
		{

			result *= nums[i];

		}
	}
	return result;
}

int main() {
	cout << getSumOfNumbers({ 10,20,40 }, '/');
	return 0;
}