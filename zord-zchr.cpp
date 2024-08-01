#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*int zord(string st):
This function takes a single argument, which is a string (st).
It returns an integer (specifically, the ASCII value) corresponding to the first character of the input string.
For example, if you call zord("hello"), it will return the ASCII value of the letter ‘h’, which is 104.
Note that this function assumes that the input string is not empty; otherwise, it might lead to unexpected behavior.
char zchr(string st):
This function also takes a string argument (st).
It returns a single character (of type char), which is the first character of the input string.
For instance, if you call zchr("world"), it will return the character ‘w’.
Again, ensure that the input string is not empty to avoid issues.*/
int zord(string st)
{
	return st[0];
}
char zchr(string st)
{
	return st[0];
}
int main() {
	cout << zord("Hello, World") << endl;
	cout << zchr("Hello, World") << endl;
	return 0;
}