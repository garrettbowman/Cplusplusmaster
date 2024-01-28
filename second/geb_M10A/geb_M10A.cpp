/*
	1)include cstring library
	2)declare ctring w 501 capacity (500+1 null)
	3)get user input paragraph with getline function
	4)display user paragraph
	5)calculate and display how many words are in user input
	6)calculate and display how many words
	-can use spaces to determine word count.

	Last updated on 03-30-2021 by GEB
*/
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	//declaring cstring w 501 capacity
	const int CAPACITY = 501;
	char cstring1[CAPACITY];
	//display user prompt
	cout << "Enter a paragraph below:" << endl;
	//get user input
	cin.getline(cstring1,CAPACITY);

	//display user input
	cout << "Entered Paragraph: \n";
	cout << cstring1 << endl;

	//calculate and display how many words are in user input
	int length = strlen(cstring1);
	cout << length << '/' << CAPACITY - 1 << " characters used.\n";

	//calculate how many words 
	strcat_s(cstring1, " ");
	int wCount = 0;
	for (int i = 0; i < length + 1; i++) {
		if (cstring1[i] == ' ') {
			wCount++;
		}
	}
	cout << "Word Count: " << wCount << endl;
	return 0;
}