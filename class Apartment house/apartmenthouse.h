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
	int length; // ������ �������
	char* name; // ������: ���

	bool gender; // ���
	short int age; // �������

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
	int num_of_people; // ������ ������� � ���-�� ����� � ��������
	Human* people; // ������ �����

private:
	short int apartment_num; // ����� ��������
	double area; // ������� ��������

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
	int num_of_apartments; // ������ ������� � ���-�� ������� � ����
	Apartment* apartments; // ������ �������

private:
	short int house_num; // ����� ����
	short int num_of_floors; // ���-�� ������ � ����

public:
	friend std::ostream& operator<<(std::ostream& output, const ApartmentHouse& apartmenthouse);

};