#pragma once
#include <iostream>

class Human
{
public:
	Human();
	Human(const Human& human);
	Human(int length, char* name, bool gender, short int age);

	~Human();

private:
	int length; // размер массива
	char* name; // массив: имя

	bool gender; // пол
	short int age; // возраст

public:
	friend std::ostream& operator<<(std::ostream& output, const Human& human);

};



class Apartment
{
public:
	Apartment();
	Apartment(const Apartment& apartment);
	Apartment(int num_of_people, Human* people, short int apartment_num, double area);

	~Apartment();

private:
	int num_of_people; // размер массива и кол-во людей к квартире
	Human* people; // массив людей

private:
	short int apartment_num; // номер квартиры
	double area; // площадь квартиры

public:
	friend std::ostream& operator<<(std::ostream& output, const Apartment& apartment);

};



class ApartmentHouse
{
public:
	ApartmentHouse();
	ApartmentHouse(const ApartmentHouse& apartmenthouse);
	ApartmentHouse(int num_of_apartments, Apartment* apartments, short int house_num, short int num_of_floors);

	~ApartmentHouse();

private:
	int num_of_apartments; // размер массива и кол-во квартир в доме
	Apartment* apartments; // массив квартир

private:
	short int house_num; // номер дома
	short int num_of_floors; // кол-во этажей в доме

public:
	friend std::ostream& operator<<(std::ostream& output, const ApartmentHouse& apartmenthouse);

};