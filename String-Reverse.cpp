#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Description
The String_Reverse function takes an input string(word) andreturns a new string that is the reverse of the original.
It effectively flips the order of characters in the input string.

>>Parameters
word (string): The input string to be reversed.
>>Return Value
Returns a new string where the characters of the input word are arranged in reverse order.*/

string String_Reverse(string word) {
	string result = "";
	for (int i = word.size() - 1; i >= 0; i--) {
		result.push_back(word[i]);
	}
	return result;
}
int main() {
	cout << String_Reverse("Elzero Web");
	return 0;
}