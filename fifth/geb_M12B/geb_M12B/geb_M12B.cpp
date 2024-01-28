/*
	1) create rectangle base class
		-default and custom constructors
		-findarea function
		-print function
		-2 private variables 
	2) create derived class cuboid
		--default and custom constructors
		-findVolume function
		-print function
		-1 private variable
	3)define functions and constructors
	4)test as shown in test case

	Last updated on 04-15-2021 by GEB
*/
#include <iostream>
#include <cmath>
using namespace std;

//creating rectangle base class
class Rectangle {
public:
	Rectangle();
	Rectangle(int _length, int _width);
	int findArea();
	void printLW();
private:
	int length;
	int width;
};
//creating cuboid derived class
class Cuboid : public Rectangle {
private:
	int height;
public:
	Cuboid();
	Cuboid(int _length, int _width, int _height);
	void printLWH();
	int findVol();
};
int main()
{
	//creating rectangle object 1
	cout << "Rectangle object 1: " << endl;
	Rectangle r1;
	r1.printLW();
	cout << "Area: " << r1.findArea() << endl; 

	//creating rectangle object 2
	cout << "Rectangle object 2: " << endl;
	Rectangle r2(5, 4);
	r2.printLW();
	cout << "Area: " << r2.findArea() << endl;
	cout << "\n";

	//creating cuboid object 1
	cout << "Cuboid object 1: " << endl;
	Cuboid c1;
	c1.printLWH();
	cout << "Volume: " << c1.findVol() << endl;
	//creating cuboid object 2
	cout << "Cuboid object 2: " << endl;
	Cuboid c2(5,4,8);
	c2.printLWH();
	cout << "Volume: " << c2.findVol() << endl;

	return 0;
}

//default rectangle constructor
Rectangle::Rectangle()
	:length(0), width(0)
{
}

//custom rectangle constructor
Rectangle::Rectangle(int _length, int _width)
	: length(_length), width(_width)
{
}
//findarea member function
int Rectangle::findArea()
{
	return length * width;
}
//print member function
void Rectangle::printLW()
{
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;

}
//cuboid default constructor
Cuboid::Cuboid()
	: Rectangle(), height(0)
{
}
//cuboid custom constructor
Cuboid::Cuboid(int _length, int _width, int _height)
	: Rectangle(_length, _width), height(_height)
{
}
//cuboid print member function
void Cuboid::printLWH()
{
	printLW();
	cout << "Height: " << height << endl;
}
//find volume member function
int Cuboid::findVol()
{
	return findArea() * height;
}
