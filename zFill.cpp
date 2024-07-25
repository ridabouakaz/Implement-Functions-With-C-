#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*Parameters
st (string): The input string that needs to be padded.
width (int): The desired width of the resulting string.
word (string): The padding word to be added to the left of st.*/
string zFill(string st, int width, string word) {
	string result = "";
	int len = st.length();
	if (len < width)
	{
		for (int i = 0; i < width - len; i++)
		{
			result += word;
		}
		result += st;
		return result;
	}
	return result;
}
int main() {
	cout << zFill("150", 7, "@") << endl;
	cout << zFill("6550", 7, "@") << endl;
	cout << zFill("11650", 7, "@") << endl;
	cout << zFill("155650", 7, "@") << endl;
	return 0;
}