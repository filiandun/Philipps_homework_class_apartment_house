#include <iostream>
#include "apartmenthouse.h"

int main()
{
    setlocale(LC_ALL, "rus");

// ЧЕЛОВЕК 1: 
    // Имя: Nick, пол: 1 (мужской), возраст: 14
    int length_1 = 4;
    char* name_1 = new char[length_1 + 1] { 'N', 'i', 'c', 'k', '\0' };

    bool gender_1 = 1;
    short int age_1 = 14;

// ЧЕЛОВЕК 2: 
    // Имя: Derek, пол: 1 (мужской), возраст: 1
    int length_2 = 5;
    char* name_2 = new char[length_2 + 1] { 'D', 'e', 'r', 'e', 'k', '\0' };

    bool gender_2 = 1;
    short int age_2 = 1;

// ЧЕЛОВЕК 3: 
    // Имя: Ethan, пол: 1 (мужской), возраст: 45
    int length_3 = 5;
    char* name_3 = new char[length_3 + 1] { 'E', 't', 'h', 'a', 'n', '\0' };    

    bool gender_3 = 1;
    short int age_3 = 45;

 // ЧЕЛОВЕК 4: 
    // Имя: Agata, пол: 0 (женский), возраст: 22
    int length_4 = 5;
    char* name_4 = new char[length_4 + 1] { 'A', 'g', 'a', 't', 'a', '\0' };

    bool gender_4 = 0;
    short int age_4 = 22;

// ЧЕЛОВЕК 5: 
    // Имя: Peony, пол: 0 (женский), возраст: 90
    int length_5 = 5;
    char* name_5 = new char[length_5 + 1] { 'P', 'e', 'o', 'n', 'y', '\0' };

    bool gender_5 = 0;
    short int age_5 = 90;

// ЧЕЛОВЕК 6: 
    // Имя: Ula, пол: 0 (женский), возраст: 5
    int length_6 = 3;
    char* name_6 = new char[length_6 + 1] { 'U', 'l', 'a', '\0' };

    bool gender_6 = 0;
    short int age_6 = 5;





// ВЫВОД ДОМА
    std::cout << "ВЫВОД ОДНОГО ДОМА: " << std::endl;

    Human human_1(length_1, name_1, gender_1, age_1); // объект: один человек
    Human human_2(length_2, name_2, gender_2, age_2); // объект: второй человек
    Human human_3(length_3, name_3, gender_3, age_3); // объект: третий человек
    Human human_4(length_4, name_4, gender_4, age_4); // объект: четвёртый человек
    Human human_5(length_5, name_5, gender_5, age_5); // объект: пятый человек
    Human human_6(length_6, name_6, gender_6, age_6); // объект: шестой человек


    int length_array_of_humans_1 = 3;
    Human* array_of_humans_1 = new Human[length_array_of_humans_1]{ human_2, human_5, human_4 }; // массив из трёх человек

    int length_array_of_humans_2 = 2;
    Human* array_of_humans_2 = new Human[length_array_of_humans_2]{ human_1, human_3}; // массив из двух человек

    int length_array_of_humans_3 = 1;
    Human* array_of_humans_3 = new Human[length_array_of_humans_3]{ human_6 }; // массив из одного человека

    int length_array_of_humans_4 = 0;
    Human* array_of_humans_4 = nullptr; // массив без человека


    Apartment apartment_1(length_array_of_humans_1, array_of_humans_1, 11, 36); // объект: одна квартира
    Apartment apartment_2(length_array_of_humans_2, array_of_humans_2, 12, 28); // объект: вторая квартира
    Apartment apartment_3(length_array_of_humans_3, array_of_humans_3, 21, 74); // объект: третья квартира
    Apartment apartment_4(length_array_of_humans_4, array_of_humans_4, 22, 132); // объект: четвёртая квартира


    int length_array_of_apartment = 4;
    Apartment* array_of_apartment = new Apartment[length_array_of_apartment + 1] { apartment_1, apartment_2, apartment_3, apartment_4 }; // массив из четырёх квартир


    ApartmentHouse ApartmentHouse(length_array_of_apartment, array_of_apartment, 189, 2); // объект класса многоквартиный дом


    std::cout << ApartmentHouse;






//// ОТДЕЛЬНО ВЫВОД ОДНОГО ЧЕЛОВЕКА
//    std::cout << "ВЫВОД ОДНОГО ЧЕЛОВЕКА: " << std::endl;
//
//
//    Human human(length_1, name_1, gender_1, age_1); // объект: один человек
//
//    std::cout << human << std::endl << std::endl << std::endl;
//
//
//
//// ОТДЕЛЬНО ВЫВОД ОДНОЙ КВАРТИРЫ
//    std::cout << "ВЫВОД ОДНОЙ КВАРТИРЫ: " << std::endl;
//
//
//    int length_array_of_humans = 3;
//    Human* array_of_humans = new Human[length_array_of_humans] { human_1, human_3, human_6 }; // массив из трёх человек
//
//    Apartment apartment(length_array_of_humans, array_of_humans, 112, 36); // объект квартира
//
//
//    std::cout << apartment << std::endl << std::endl;



    return 0;
}

