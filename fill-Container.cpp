#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*
 *>>Description
The fillContainer function generates a vector of strings with a specified length (num).
Each element in the vector is set to the provided string value (val).

>>Parameters
num (int): The desired length of the output vector.
val (string): The value to fill each element of the vector with.
>>Behavior
The function initializes a vector of strings called result with the specified length (num).
It assigns the value of val to each element in the vector.
The function returns the resulting vector*/
vector<string> fillContainer(int num, string val)
{
	vector<string>result(num);
	for (int i = 0; i < num; i++)
	{
		result[i] = val;
	}
	return result;
}

int main() {
	vector<string>ss = fillContainer(5, "rida");
	for (int i = 0; i < ss.size(); i++)
	{
		cout << ss[i] << endl;
	}
	return 0;
}