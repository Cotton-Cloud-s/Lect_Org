#include "A.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void funcShow(Staff object)
{}
Staff funcReturnObject()
{
	Staff object;
	return object;
}
int main() {
	setlocale(LC_ALL, "Russian");
	Lector AKlymenko;
	AKlymenko.setLectorName("Алла Клименко");
	AKlymenko.setSci_Field("Счастье в жизни людей");
	AKlymenko.setExperience(5);
	AKlymenko.setEdDegree("Бакалавр в области изучения психологии");
	string speech1 = "1991.txt";
	ifstream fin;
	fin.open(speech1);
	char st;
	Security Ohorona("Black", 6);
	Ohorona.getRotation();
	Ohorona.CheckInvitation();
	Volunteers Help("Blue", 15);
	Help.help();
	while (fin.get(st))
	{
		cout << st;
	}
	Staff obj1;
	funcShow(obj1);
	funcReturnObject();
	Staff obj2 = obj1;
	const int Lenght = 3;
	Staff arr[Lenght];
	arr[0] = Staff("Black", 10);
	fin.close();
	system("pause");
	return 0;
}
