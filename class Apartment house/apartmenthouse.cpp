#include "apartmenthouse.h"


Human::Human()
{
	this->length = 0;
	this->name = nullptr;

	this->gender = 0;
	this->age = 0;
}

Human::Human(const Human& human)
{
	this->length = human.length;

	this->name = new char[this->length + 1];
	for (short int i = 0; i < this->length; ++i)
	{
		this->name[i] = human.name[i];
	}
	this->name[this->length] = '\0';

	this->gender = human.gender;
	this->age = human.age;
}

Human::Human(int length, char* name, bool gender, short int age)
{
	this->length = length;

	this->name = new char[this->length + 1];
	for (short int i = 0; i < this->length; ++i)
	{
		this->name[i] = name[i];
	}
	this->name[this->length] = '\0';

	this->gender = gender;
	this->age = age;
}


Human::~Human()
{
	delete[] this->name;
}


std::ostream& operator<<(std::ostream& output, const Human& human)
{
	output << "Имя: ";
	for (short int i = 0; i < human.length; ++i)
	{
		output << human.name[i];
	}

	output << "\tПол: " << human.gender
			<< "\tВозраст: " << human.age;

	return output;
}


//

Apartment::Apartment()
{
	this->num_of_people = 0;
	this->people = nullptr;

	this->area = 0;
	this->apartment_num = 0;
}

Apartment::Apartment(const Apartment& apartment)
{
	this->num_of_people = apartment.num_of_people;

	this->people = new Human[this->num_of_people];
	for (short int i = 0; i < this->num_of_people; ++i)
	{
		this->people[i] = apartment.people[i];
	}

	this->apartment_num = apartment.apartment_num;
	this->area = apartment.area;
}

Apartment::Apartment(int num_of_people, Human* people, short int apartment_num, double area)
{
	this->num_of_people = num_of_people;

	this->people = new Human[this->num_of_people];
	for (short int i = 0; i < this->num_of_people; ++i)
	{
		this->people[i] = people[i];
	}

	this->apartment_num = apartment_num;
	this->area = area;
}


Apartment::~Apartment()
{
	delete[] this->people;
}


std::ostream& operator<<(std::ostream& output, const Apartment& apartment)
{
	output << "Квартира под номером " << apartment.apartment_num 
			<< ", площадь " << apartment.area << " кв. м" 
			<< ", кол-во жителей " << apartment.num_of_people << ":" << std::endl;

	for (short int i = 0; i < apartment.num_of_people; ++i)
	{
		output << "\t\t" << apartment.people[i] << std::endl;
	}

	return output;
}


//

ApartmentHouse::ApartmentHouse()
{
	this->num_of_apartments = 0;
	this->apartments = nullptr;

	this->house_num = 0;
	this->num_of_floors = 0;

}

ApartmentHouse::ApartmentHouse(const ApartmentHouse& apartmenthouse)
{
	this->num_of_apartments = apartmenthouse.num_of_apartments;

	this->apartments = new Apartment[this->num_of_apartments];
	for (int i = 0; i < this->num_of_apartments; ++i)
	{
		this->apartments[i] = apartmenthouse.apartments[i];
	}

	this->house_num = apartmenthouse.house_num;
	this->num_of_floors = apartmenthouse.num_of_floors;
}

ApartmentHouse::ApartmentHouse(int num_of_apartments, Apartment* apartments, short int house_num, short int num_of_floors)
{
	this->num_of_apartments = num_of_apartments;

	this->apartments = new Apartment[this->num_of_apartments];
	for (int i = 0; i < this->num_of_apartments; ++i)
	{
		this->apartments[i] = apartments[i];
	}

	this->house_num = house_num;
	this->num_of_floors = num_of_floors;
}


ApartmentHouse::~ApartmentHouse()
{
	//delete[] this->num_of_apartments; // если раскомментировать, то ошибка, что тут не так?
}


std::ostream& operator<<(std::ostream& output, const ApartmentHouse& apartmenthouse)
{
	output << "Дом под номером " << apartmenthouse.house_num
			<< ", кол-во этажей " << apartmenthouse.num_of_floors
			<< ", кол-во квартир " << apartmenthouse.num_of_apartments << ":" << std::endl;

	for (short int i = 0; i < apartmenthouse.num_of_apartments; ++i)
	{
		output << "\t" << apartmenthouse.apartments[i] << std::endl;
	}
	output << std::endl;

	return output;
}
