/*
	1) create pig class
	--default constructor
	--custom constructor
	--displayweight fuction
		weight
	--protected weight
	2) create farm class
	--default constructor
	--custom constructor
	--displayweight fuction
		weight * quantity
	--private quantity
	3)intialize with default constructors
	4) display inital values
	5) update values by assigning anonymous object
	5) display updated values.


	Last updated on 04-13-2021 by GEB
*/
#include <iostream>
using namespace std;

//define pig class
class Pig {
public:
	Pig();
	Pig(double _weight);
	void displayWeight();
protected:
	double weight;
};

//define farm class
class Farm : public Pig {
public:
	Farm();
	Farm(double _weight, int _quantity);
	void displayWeight();
private:
	int quantity;
};

int main()
{
	//initializing objects
	Pig p1;
	Farm f1;
	//displaying the default constructors values
	p1.displayWeight();
	f1.displayWeight();
	cout << "\n";
	//reassigning new value
	p1 = Pig(75);
	f1 = Farm(810, 10);
	//displaying the new values
	p1.displayWeight();
	f1.displayWeight();

	return 0;
}

//default constructor for pig class
Pig::Pig()
	:weight(100)
{
}
//custom constructor for pig class
Pig::Pig(double _weight)
	:weight(_weight)
{}
//display weight function for pig class
void Pig::displayWeight()
{
	cout << "The weight of one pig is " << weight << " Pounds.\n" ;
}
//default constructor for farm class
Farm::Farm()
	:Pig(), quantity(50)
{
}
//custom constructor for farm class
Farm::Farm(double _weight, int _quantity)
	:Pig(_weight), quantity(_quantity)
{

}
//display weight function for farm class
void Farm::displayWeight()
{
	cout << "The combined weight of " << quantity << " pigs is " << weight * quantity << " Pounds.\n";
}
