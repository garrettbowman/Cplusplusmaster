/*
	1)create scores base class
		-getscores function to get inputs from user
		- print function
		-2 protected variables
			pointer to array
			int num inputted from user
	2)percentage class derived from scores
		-calpercentage funtion
		-print function
		-protected variable percentage
	3)grade class derived from percentage
		-calgrade function
		-print function
		-private grade variable
	4)define classes and member functions
	5)test with test case
	Last updated on 04-13-2021 by GEB
*/
#include <iostream>
#include <string>
using namespace std;

//creating scores class
class Scores {
public:
	void getScores();
	void print();
protected:
	int num;
	double* array;
};

//creating percentage class
class Percentage : public Scores {
public:
	void calcPecentage();
	void print();
protected:
	double percentage;
};
//creating grade class
class Grade : public Percentage {
public:
	void calcGrade();
	void print();
private:
	string grade;
	
};

int main()
{
	//initializng objects
	Grade g1;

	//prompting user for inputs
	g1.getScores();

	//printing the data
	g1.print();
	return 0;
}

//prompting user for inputs then creating array and rounding entered data
void Scores::getScores()
{
	cout << "How many scores would you like to enter? ";
	cin >> num;
	array = new double[num];
	cout << "Enter " << num << " scores seperated by a space: ";
	for (int i = 0; i < num; i++) {
		cin >> array[i];
		array[i] = round(array[i] * 10) / 10;
	}
}
//print scores function
void Scores::print()
{
	cout << "Assignment scores: " << endl;
	for (int i = 0; i < num; i++) {
		cout << "Assignment " << i + 1 << ": " << array[i] << endl;
	}
}

void Percentage::calcPecentage()
{
	for (int i = 0; i < num; i++) {
		percentage += array[i];
	}
	percentage = percentage / (double)num;
	percentage = round(percentage * 10) / 10;

}
//print function for percentage objects
void Percentage::print()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << "\nTotal Percentage: " << percentage << "%" << endl;
}
//calculating the grade and assigning to string
void Grade::calcGrade()
{
	if (percentage >= 90.0)
		grade = "A";
	else if (percentage >= 87.0)
		grade = "A-";
	else if (percentage >= 84.0)
		grade = "B+";
	else if (percentage >= 80.0)
		grade = "B";
	else if (percentage >= 77.0)
		grade = "B-";
	else if (percentage >= 74.0)
		grade = "C+";
	else if (percentage >= 70.0)
		grade = "C";
	else if (percentage >= 67.0)
		grade = "C-";
	else if (percentage >= 64.0)
		grade = "D+";
	else if (percentage >= 60.0)
		grade = "D";
	else if (percentage >= 57.0)
		grade = "D-";
	else
		grade = "E";
}
//print function for grade objects
void Grade::print()
{
	Scores::print();
	calcPecentage();
	calcGrade();
	Percentage::print();
	cout << "Final Grade: " << grade;

}
