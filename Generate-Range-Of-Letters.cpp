#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Description
The GenerateRangeOfLetters function prints a range of characters along with their corresponding ASCII values
It iterates from the starting character (star) to the ending character (end), inclusively.
>>Parameters
star (char): The starting character (represented by its ASCII value).
end (char): The ending character (also represented by its ASCII value).*/
void GenerateRangeOfLetters(char star, char end) {
	for (int i = star; i <= end; i++)
	{
		cout << char(i) << " =>> " << i << "\n";
	}
}
int main() {
	GenerateRangeOfLetters('a', 'c');
	return 0;
}