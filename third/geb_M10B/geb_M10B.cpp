/*
	1) initialize cstrings and string objects
	2) get user to input two first last names seperated by space
	3) Set the first letters of each name to capital. 
	--toupper function.
	4) set name1 to be 1 char long followed by period and space.
	5) concatinate name1 and name2
	6) simply add period and space followed by string 4 to string 3
	7) output the transformed names.

	Last updated on 03-31-2021 by GEB
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	//initializing ctrings and strings
	char name1[20];
	char name2[20];
	string name3, name4;
	//prompt user for inputs
	cout << "Enter a first and last name: ";
	cin >> name1 >> name2;

	cout << "Enter a second first and last name: ";
	cin >> name3 >> name4;

	//capitalizing the first letter of each name
	name1[0] = toupper(name1[0]);
	name2[0] = toupper(name2[0]);
	name3[0] = toupper(name3[0]);
	name4[0] = toupper(name4[0]);

	//copying the 1st character of name1 to overwrite name1
	strncpy_s(name1, name1, 1);
	//setting name3 to be only 1st char 
	name3 = name3[0];
	//concatinating a period and space and then name2 to the name1 cstring.
	strcat_s(name1, ". ");
	strcat_s(name1, name2);
	//because this is a string object we can simply use this format.
	name3 += ". " + name4;

	//outputting the formatted names.
	cout << "Formatted CString name: " << name1 << endl;
	cout << "Formatted String name: " << name3 << endl;
	return 0;
}