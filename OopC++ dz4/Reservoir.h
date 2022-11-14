#pragma once
#include "Header.h"

class Reservoid
{
private:
	char name[20];
	int leght;
	int width;
	int maxDepth;
	int area;
	char type[20];
public:
	// конструкторы
	Reservoid();
	Reservoid(char* name, int leght, int width, int maxDepth, int area, char* type);
	Reservoid(const Reservoid& reservoid);
	// деструктор
	~Reservoid();
	// селекторы
	char* getName();
	int getLeght();
	int getWidth();
	int getMaxDepth();
	int getArea();
	char* getType();
	// мутаторы
	void setName(char* name);
	void setLeght(int leght);
	void setWidth(int width);
	void setMaxDepth(int maxDepth);
	void setArea(int area);
	void setType(char* type);
	// метод приблизительного обьема
	int getVolume(int leght, int width, int maxDepth);
	// метод определения площади водной поверхности
	int getWaterArea(int leght, int width);
	// метод проверки относятся ли водоемы к одному типу ( море-море; бассейн-пруд;)
	bool isSameType(char* type1, char* type2);
	// метод копирования объектов
	void copy(Reservoid& reservoid);
	// метод вывода информации об объекте
	void print();
	// метод ввода информации об объекте
	void input();
};
