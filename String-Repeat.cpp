#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// function Repeats word By an amount number repeat
string String_Repeat(string word,int repeat) {
	string result = "";
	for (int i =0; i<repeat;i++)
	{
		result += word+" ";
	}
	return result;
}
int main() {
	cout << String_Repeat("hi me name is rida ", 20);
	return 0;
}
