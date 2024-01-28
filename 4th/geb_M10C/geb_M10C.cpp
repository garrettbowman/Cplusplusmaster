/*
	1) include string database
	2) create vocabulary class
	--2 private variables
		--1 array of words string objects
		--1 for size of array
	--default and custom constructor
	--print function
	--search function
	--alphabetize function
	3)create words array 20 max 
	4)create and display default constructor object
	5)create and display custom constructor object
	6)prompt user for search term
	7)search word array and display if it is in array
	8)sort / alphabetize array and display final array

	Last updated on 03-30-2021 by GEB
*/
#include <iostream>
#include <string>
using namespace std;
//create vocabulary class
class Vocabulary {
private:
	//creating words array with 20 maximum
	string words[20];
	int size;
public:
	//default and custom constructor
	Vocabulary();
	Vocabulary(string _words[], int _size);
	//print search and alphabetize functions
	void print();
	bool inVocab(string _word);
	void alphabet();

};


int main()
{
	//creating array to assign into myVocabulary object
	const int MAX_CAP = 5;
	string words[MAX_CAP] = {"americano", "expresso", "cappuccino", "macchiato", "latte" };
	cout << "Default Vocab output: " << endl;
	//creating and displaying default object
	Vocabulary def = Vocabulary();
	def.print();

	//creating and displaying custom object
	cout << "Custom Vocab output: " << endl;
	Vocabulary myVocab = Vocabulary(words, 5);
	myVocab.print();

	//prompting user for search term
	string userSearch;
	cout << "Enter a term to search for in myVocab: ";
	cin >> userSearch;
	
	//when inVocab returns true/false displaying result to user
	if (myVocab.inVocab(userSearch) == true) {
		cout << userSearch << " is in myVocab." << endl;
	}
	else {
		cout << userSearch << " is not in myVocab." <<endl ;
	}

	//alphabetically sorting list
	cout << "Sorting MyVocab..." << endl;
	myVocab.alphabet();
	//outputting alphabetized list
	cout << "Custom Vocab output after sorting: " << endl;
	myVocab.print();
	return 0;
}

//default constructor			
Vocabulary::Vocabulary()
	:words(), size(0)
{}

//custom constructor
Vocabulary::Vocabulary(string _words[], int _size)
{
	for (int i = 0; i < _size; i++) {
		words[i] = _words[i];

	}
	size = _size;
}

//print funtion with specific line for if array is empty
void Vocabulary::print()
{
	if (size == 0) {
		cout << "no words to print!" <<endl;
	}
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ". " << words[i] << endl;
	}
	cout << "\n";
}
//search function returns true if exact string is in array words
bool Vocabulary::inVocab(string _word)
{
	for (int i = 0; i < size; i++) {
		if (words[i] == _word) {
			return true;
		}
	}
	return false;

}

//alphabetizes list 
void Vocabulary::alphabet()
{
	string temp;
	for (int i = 0; i < 2; i++) {
		//sorting algorithm nested for loop
		for (int j = 0; j < size-1; j++) {
			
			if (words[j] > words[j + 1]) {
				temp = words[j];
				words[j] = words[j + 1];
				words[j + 1] = temp;
			}
		}
	}
}
