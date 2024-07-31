#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include <chrono>
#include<cmath>
using namespace std;
/*
 *imp_round Function
Description
The imp_round function rounds a floating-point
number to the nearest integer using the “round half up”
method (commonly known as “bankers’ rounding”).
It adds 0.5 to the number and then truncates the decimal part.

>>Parameters
num (double): The input floating-point number to be rounded.
Return Value
Returns the rounded integer value.
2.>> imp_floor Function
Description
The imp_floor function returns the integer part of a floating-point number
(i.e., it truncates the decimal part without rounding).

>>Parameters
num (double): The input floating-point number.
Return Value
Returns the floor (integer part) of the input number.
3.>> imp_ceil Function
Description
The imp_ceil function computes the ceiling of a floating-point number.
It rounds up to the nearest integer,
even if the decimal part is very close to the next integer.

>>Parameters
num (double): The input floating-point number.
Return Value
Returns the ceiling (smallest integer greater than or equal to the input number).*/
int imp_round(double num)
{
	return num + 0.5;
}
int imp_floor(double num)
{
	return num;
}
int imp_ceil(double num)
{
	double inum = num;
	if (inum == num)	return inum;
	return num + 1;
}
int main() {
	cout << imp_ceil(5.00);
	return 0;
}