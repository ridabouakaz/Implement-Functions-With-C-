#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Description
The createRange function generates a vector of integers containing a range of values from start to end (inclusive).
It constructs a sequence of consecutive integers.

>>Parameters
start (int): The starting value of the range.
end (int): The ending value of the range.
>>Behavior
The function calculates the size of the resulting vector as vecsize = end - start + 1.
It initializes a vector of integers called result with the specified size.
It assigns values to each element in the vector,
starting from start and incrementing by 1 for each subsequent element.
The function returns the resulting vector.*/
vector<int> createRange(int start, int end)
{
	int vecsize = end - start + 1;
	vector<int>result(vecsize);
	for (int i = 0; i < vecsize; i++)
	{
		result[i] = start + i;
	}
	return result;
}
int main() {
	vector<int>ss = createRange(5, 12);
	for (int i = 0; i < ss.size(); i++)
	{
		cout << ss[i] << endl;
	}
	return 0;
}