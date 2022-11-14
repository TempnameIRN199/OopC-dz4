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
	// ������������
	Reservoid();
	Reservoid(char* name, int leght, int width, int maxDepth, int area, char* type);
	Reservoid(const Reservoid& reservoid);
	// ����������
	~Reservoid();
	// ���������
	char* getName();
	int getLeght();
	int getWidth();
	int getMaxDepth();
	int getArea();
	char* getType();
	// ��������
	void setName(char* name);
	void setLeght(int leght);
	void setWidth(int width);
	void setMaxDepth(int maxDepth);
	void setArea(int area);
	void setType(char* type);
	// ����� ���������������� ������
	int getVolume(int leght, int width, int maxDepth);
	// ����� ����������� ������� ������ �����������
	int getWaterArea(int leght, int width);
	// ����� �������� ��������� �� ������� � ������ ���� ( ����-����; �������-����;)
	bool isSameType(char* type1, char* type2);
	// ����� ����������� ��������
	void copy(Reservoid& reservoid);
	// ����� ������ ���������� �� �������
	void print();
	// ����� ����� ���������� �� �������
	void input();
};
