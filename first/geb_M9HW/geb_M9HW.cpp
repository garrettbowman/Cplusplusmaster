/*
	1)create rational class
	--default and custom constructors
		--1 var and 2 var custom
	--2 private variables for numerator and denominator.
	--overloading cout and cin functions
	--overloading operators as friend functions
	2)Define all functions including constructors.
	-- putting normalizing code in custom constructor 
	so we can just return an answer as custom constructed object.
	3)Test constructors
	4)prompt user for input of 3 fractions that will be used to test operators.
	5)display normalized versions of user input
	6) Test operators in way outlined by test case.

	Last updated on 03-31-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//creating rational class
class Rational {
public:
	//creating constructors: default 1 var 2 var
	Rational();
	Rational(int _numer);
	Rational(int _numer, int _denom);
	//overloading cout and cin functions
	friend ostream& operator << (ostream& output, const Rational& r1);
	friend istream& operator >> (istream& input, Rational& r1);
	//overloading operators as friend functions
	friend const Rational operator +(const Rational& r1, const Rational& r2);
	friend const Rational operator -(const Rational& r1, const Rational& r2);
	friend const Rational operator *(const Rational& r1, const Rational& r2);
	friend const Rational operator /(const Rational& r1, const Rational& r2);
	friend bool operator ==(const Rational& r1, const Rational& r2);
	friend bool operator <(const Rational& r1, const Rational& r2);
	friend bool operator <=(const Rational& r1, const Rational& r2);
	friend bool operator >(const Rational& r1, const Rational& r2);
	friend bool operator >=(const Rational& r1, const Rational& r2);
	//2 private variables for numerator and denominator.
private:
	int numer;
	int denom;
};
int main()
{
	//testing default constructor and custom constructors and cout overload
	cout << "Testing the constructors and the overloaded << operator for a Rational object...\n4 Rational objects, x, y(2), z(-5,-6), w(1,-3) are declared!" << endl;
	Rational x;
	Rational y = Rational(2, 1);
	Rational z = Rational(-5, -6);
	Rational w = Rational(-1, 3);
	cout << "x = " << x << ", y =" << y << ", z = " << z << ", w = " << w << endl;
	cout << "\n";
	
	cout << "Testing the custom constructor with two arguments and normalization routines:" << endl;

	y = Rational(-128, -48);
	cout << "y = Rational(-128, -48) outputs as " << y << endl;
	y = Rational(-128, 48);
	cout << "y = Rational(-128, 48) outputs as " << y << endl;
	y = Rational(128, -48);
	cout << "y = Rational(128, -48) outputs as " << y << endl;
	Rational a(1, 1);
	cout << "Rational a(1, 1) outputs as: " << a << endl;
	cout << "y * a = -8/3 * 1/1 = " << y * a << endl;

	//prompting user for input of 3 fractions that will be used to test operators then displaying normalized
	cout << "\n";
	cout << "Enter a fraction in the format integer_numerator/integer_denominator: "<< endl;
	Rational user1;
	cin >> user1;
	cout << "You entered the equivalent of: " << user1;
	cout << "\n";

	cout << "Enter a fraction in the format integer_numerator/integer_denominator: "<< endl;
	Rational user2;
	cin >> user2;
	cout << "You entered the equivalent of: " << user2;
	cout << "\n";

	cout << "Enter a fraction in the format integer_numerator/integer_denominator: "<<endl ;
	Rational user3;
	cin >> user3;
	cout << "You entered the equivalent of: " << user3 <<endl;
	cout << "\n";

	cout << "Testing the overloaded arithmetic and relational operators... " << endl;
	//testing all operations with numbers 1 and 2
	cout << "25/9 + 3/5 = " << user1 + user2 << endl;
	cout << "25/9 - 3/5 = " << user1 - user2 << endl;
	cout << "25/9 * 3/5 = " << user1 * user2 << endl;
	cout << "25/9 / 3/5 = " << user1 / user2 << endl;
	bool soln1 = user1 == user1;
	bool soln2 = user1 == user2;
	bool soln3 = user2 == user2;
	cout << "25/9 == 25/9 = " << soln1 << endl;
	cout << "25/9 == 3/5 = " << soln2 << endl;
	cout << "3/5 == 3/5 = " << soln3 << endl;
	bool soln4 = user1 < user1;
	bool soln5 = user1 < user2;
	bool soln6 = user2 < user2;
	cout << "25/9 < 25/9 = " << soln4 << endl;
	cout << "25/9 < 3/5 = " << soln5 << endl;
	cout << "3/5 < 3/5 = " << soln6 << endl;
	bool soln7 = user1 <= user1;
	bool soln8 = user1 <= user2;
	bool soln9 = user2 <= user2;
	cout << "25/9 <= 25/9 = " << soln7 << endl;
	cout << "25/9 <= 3/5 = " << soln8 << endl;
	cout << "3/5 <= 3/5 = " << soln9 << endl;
	bool soln10 = user1 > user1;
	bool soln11 = user1 > user2;
	bool soln12 = user2 > user2;
	cout << "25/9 > 25/9 = " << soln10 << endl;
	cout << "25/9 > 3/5 = " << soln11 << endl;
	cout << "3/5 > 3/5 = " << soln12 << endl;
	bool soln13 = user1 >= user1;
	bool soln14 = user1 >= user2;
	bool soln15 = user2 >= user2;
	cout << "25/9 >= 25/9 = " << soln13 << endl;
	cout << "25/9 >= 3/5 = " << soln14 << endl;
	cout << "3/5 >= 3/5 = " << soln15 << endl;
	cout << "\n";
	//testing all operations with numbers 2 and 3
	cout << "3/5 + -7/3 = " << user2 + user3 << endl;
	cout << "3/5 - -7/3 = " << user2 - user3 << endl;
	cout << "3/5 * -7/3 = " << user2 * user3 << endl;
	cout << "3/5 / -7/3 = " << user2 / user3 << endl;
	bool soln16 = user2 == user2;
	bool soln17 = user2 == user3;
	bool soln18 = user3 == user3;
	cout << "3/5 == 3/5 = " << soln16 << endl;
	cout << "3/5 == -7/3 = " << soln17 << endl;
	cout << "-7/3 == -7/3 = " << soln18 << endl;
	bool soln19 = user2 < user2;
	bool soln20 = user2 < user3;
	bool soln21 = user3 < user3;
	cout << "3/5 < 3/5 = " << soln19 << endl;
	cout << "3/5 < -7/3 = " << soln20 << endl;
	cout << "-7/3 < -7/3 = " << soln21 << endl;
	bool soln22 = user2 <= user2;
	bool soln23 = user2 <= user3;
	bool soln24 = user3 <= user3;
	cout << "3/5 <= 3/5 = " << soln22 << endl;
	cout << "3/5 <= -7/3 = " << soln23 << endl;
	cout << "-7/3 <= -7/3 = " << soln24 << endl;
	bool soln25 = user2 > user2;
	bool soln26 = user2 > user3;
	bool soln27 = user3 > user3;
	cout << "3/5 > 3/5 = " << soln25 << endl;
	cout << "3/5 > -7/3 = " << soln26 << endl;
	cout << "-7/3 > -7/3 = " << soln27 << endl;
	bool soln28 = user2 >= user2;
	bool soln29 = user2 >= user3;
	bool soln30 = user3 >= user3;
	cout << "3/5 >= 3/5 = " << soln28 << endl;
	cout << "3/5 >= -7/3 = " << soln29 << endl;
	cout << "-7/3 >= -7/3 = " << soln30 << endl;
	return 0;
}

//default constructor
Rational::Rational()
	:numer(0), denom(1)
{
}
//overloading for 1 variable.
Rational::Rational(int _numer)
	:numer(_numer), denom(1)
{
}
//putting normalizing code in custom constructor so we can just return an answer as custom constructed object.
Rational::Rational(int _numer, int _denom)
{
	//we have to consider each case of negative an positive values when creating this function.
	for (int i = _denom * _numer; i > 1; i--) {
		if ((_denom % i == 0) && (_numer % i == 0)) {
			_denom /= i;
			_numer /= i;
		}
	}
	if (_numer < 0 && _denom > 0) {
		for (int i = _denom * _numer; i < -1; i++) {
			if ((_denom % i == 0) && (_numer % i == 0)) {
				_denom /= i;
				_numer /= i;
			}
		}

	}
	if (_numer > 0 && _denom < 0) {
		for (int i = _denom * _numer; i < -1; i++) {
			if ((_denom % i == 0) && (_numer % i == 0)) {
				_denom /= i;
				_numer /= i;
			}
		}

	}
	if (_numer < 0 && _denom < 0) {
		_numer *= -1;
		_denom *= -1;
	}
	if (_denom < 0 && _numer > 0) {
		_numer *= -1;
		_denom *= -1;
	}
	
	denom = _denom;
	numer = _numer;
}


//overloading << and >> operators so we can output rational class objects easily
ostream& operator<<(ostream& output, const Rational& r1)
{
	output << r1.numer << "/" << r1.denom;
	return output;
}
//we have to create character to absorb / in user input
istream& operator>>(istream& input, Rational& r1)
{
	char c;
	input >> r1.numer >> c >>  r1.denom;
	r1 = Rational(r1.numer, r1.denom);
	return input;
}
//overloading each operator so we can use them with our rational class
const Rational operator+(const Rational& r1, const Rational& r2)
{
	int newDenom = r1.denom * r2.denom;
	int newR1num = r1.numer * r2.denom;
	int newR2num = r2.numer * r1.denom;
	int newNumer = newR1num + newR2num;
	return Rational(newNumer, newDenom);
}

const Rational operator-(const Rational& r1, const Rational& r2)
{
	int newDenom = r1.denom * r2.denom;
	int newR1num = r1.numer * r2.denom;
	int newR2num = r2.numer * r1.denom;
	int newNumer = newR1num - newR2num;
	return Rational(newNumer, newDenom);
}

const Rational operator*(const Rational& r1, const Rational& r2)
{
	int newDenom = r1.denom * r2.denom;
	int newNumer = r2.numer * r1.numer;
	return Rational(newNumer, newDenom);
}

const Rational operator/(const Rational& r1, const Rational& r2)
{
	int newDenom = r1.denom * r2.numer;
	int newNumer = r1.numer * r2.denom;
	return Rational(newNumer, newDenom);
}

bool operator==(const Rational& r1, const Rational& r2)
{
	if (r1.numer * r2.denom == r2.numer * r1.denom) {
		return true;
	}
	else{ return false; }
	
}

bool operator<(const Rational& r1, const Rational& r2)
{
	if (r1.numer / r1.denom < r2.numer / r2.denom) {
		return true;
	}
	return false;
}

bool operator<=(const Rational& r1, const Rational& r2)
{
	if (r1.numer / r1.denom <= r2.numer / r2.denom) {
		return true;
	}
	return false;
}

bool operator>(const Rational& r1, const Rational& r2)
{
	if (r1.numer / r1.denom > r2.numer / r2.denom) {
		return true;
	}
	return false;
}

bool operator>=(const Rational& r1, const Rational& r2)
{
	if (r1.numer / r1.denom >= r2.numer / r2.denom) {
		return true;
	}
	return false;
}
