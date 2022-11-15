#include "Header.h"
#include "Reservoir.h"

int main()
{
	setlocale(0, "");
	Reservoid reservoid1;
	Reservoid reservoid2;
	Reservoid reservoid3;
	reservoid1.input();
	reservoid2.input();
	reservoid3.input();
	reservoid1.print();
	reservoid2.print();
	reservoid3.print();
	cout << "Объем водоема 1: " << reservoid1.getVolume(reservoid1.getLeght(), reservoid1.getWidth(), reservoid1.getMaxDepth()) << endl;
	cout << "Введите  тип водоёма" << endl;
	char type[20];
	cin >> type;
	reservoid1.findType(reservoid1, reservoid2, reservoid3, type);
	cout << "Объем водоема 2: " << reservoid2.getVolume(reservoid2.getLeght(), reservoid2.getWidth(), reservoid2.getMaxDepth()) << endl;
	cout << "Введите тип водоёма" << endl;
	char type1[20];
	cin >> type1;
	cout << "Объем водоема 3: " << reservoid3.getVolume(reservoid3.getLeght(), reservoid3.getWidth(), reservoid3.getMaxDepth()) << endl;
	cout << "Введите тип водоёма" << endl;
	char type2[20];
	cin >> type2;
	cout << "Средний объем водоемов: " << (reservoid1.getVolume(reservoid1.getLeght(), reservoid1.getWidth(), reservoid1.getMaxDepth()) + reservoid2.getVolume(reservoid2.getLeght(), reservoid2.getWidth(), reservoid2.getMaxDepth()) + reservoid3.getVolume(reservoid3.getLeght(), reservoid3.getWidth(), reservoid3.getMaxDepth())) / 3 << endl;
	cout << "Средняя площадь водоемов: " << (reservoid1.getArea() + reservoid2.getArea() + reservoid3.getArea()) / 3 << endl;
	cout << "Средняя длина водоемов: " << (reservoid1.getLeght() + reservoid2.getLeght() + reservoid3.getLeght()) / 3 << endl;
	cout << "Средняя ширина водоемов: " << (reservoid1.getWidth() + reservoid2.getWidth() + reservoid3.getWidth()) / 3 << endl;
	cout << "Средняя максимальная глубина водоемов: " << (reservoid1.getMaxDepth() + reservoid2.getMaxDepth() + reservoid3.getMaxDepth()) / 3 << endl;
	cout << "Максимальная площадь водоёма: " << max(reservoid1.getArea(), max(reservoid2.getArea(), reservoid3.getArea())) << endl;
	cout << "Копирование водоема 1 в водоем 2" << endl;
	reservoid2 = reservoid1;
	reservoid2.print();
	cout << "Копирование водоема 2 в водоем 3" << endl;
	reservoid3 = reservoid2;
	reservoid3.print();
	cout << "Поикс водоема по типу: " << endl;
	char type3[20];
	cin >> type3;
	reservoid1.findType(reservoid1, reservoid2, reservoid3, type3);
	system("pause");
}