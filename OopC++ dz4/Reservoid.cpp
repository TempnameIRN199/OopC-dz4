#include "Header.h"
#include "Reservoir.h"

Reservoid::Reservoid()
{
	strcpy(name, " ");
	leght = 0;
	width = 0;
	maxDepth = 0;
	area = 0;
	strcpy(type, " ");
}
Reservoid::Reservoid(char* name, int leght, int width, int maxDepth, int area, char* type)
{
	strcpy(this->name, name);
	this->leght = leght;
	this->width = width;
	this->maxDepth = maxDepth;
	this->area = area;
	strcpy(this->type, type);
}
Reservoid::Reservoid(const Reservoid& reservoid)
{
	strcpy(this->name, reservoid.name);
	this->leght = reservoid.leght;
	this->width = reservoid.width;
	this->maxDepth = reservoid.maxDepth;
	this->area = reservoid.area;
	strcpy(this->type, reservoid.type);
}
Reservoid::~Reservoid()
{
	delete[] name;
	delete[] type;
}
char* Reservoid::getName()
{
	return name;
}
int Reservoid::getLeght()
{
	return leght;
}
int Reservoid::getWidth()
{
	return width;
}
int Reservoid::getMaxDepth()
{
	return maxDepth;
}
int Reservoid::getArea()
{
	return area;
}
char* Reservoid::getType()
{
	return type;
}
void Reservoid::setName(char* name)
{
	strcpy(this->name, name);
}
void Reservoid::setLeght(int leght)
{
	this->leght = leght;
}
void Reservoid::setWidth(int width)
{
	this->width = width;
}
void Reservoid::setMaxDepth(int maxDepth)
{
	this->maxDepth = maxDepth;
}
void Reservoid::setArea(int area)
{
	this->area = area;
}
void Reservoid::setType(char* type)
{
	strcpy(this->type, type);
}
int Reservoid::getVolume(int leght, int width, int maxDepth)
{
	return leght * width * maxDepth;
}
void Reservoid::print()
{
	cout << "Name: " << name << endl;
	cout << "Leght: " << leght << endl;
	cout << "Width: " << width << endl;
	cout << "Max depth: " << maxDepth << endl;
	cout << "Area: " << area << endl;
	cout << "Type: " << type << endl;
}
void Reservoid::input()
{
	cout << "Name: ";
	cin >> name;
	cout << "Leght: ";
	cin >> leght;
	cout << "Width: ";
	cin >> width;
	cout << "Max depth: ";
	cin >> maxDepth;
	cout << "Area: ";
	cin >> area;
	cout << "Type: ";
	cin >> type;
}
