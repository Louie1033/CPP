#include <iostream>

int main()
{
    /*Variables and basic data types*/

    //integers(whole numers)
    int x = 5;
    int y = 6;
    int sum = x + y;
    int age = 17;
    int year = 2024;
    int days = 7.5; //attempting to assign double to int results in truncation

    std::cout << "Integers" << "\n";
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";
    std::cout << days << "\n";



    //doubles(includes decimal)
    std::cout << "\nDoubles" << "\n";

    double price = 7.99;
    double gpa = 4.02;
    double temp = 70.8;

    std::cout << price << "\n";
    std::cout << gpa << "\n";
    std::cout << temp << "\n";
    
    //char(single characters)
    std::cout << "\nCharacters"<<"\n";

    char grade = 'A';
    char FInital = 'L';
    char currency = '$';

    std::cout << FInital << "\n";
    std::cout << grade << "\n";
    std::cout <<currency << "\n";

    //boolean(true or false)
    std::cout << "\n" << "Boolean" << "\n";

    bool daytime = true;
    bool adult = false;
    bool isOn = false;
    bool forSale = true;

    std::cout << daytime << "\n";
    std::cout << adult << "\n";
    std::cout << isOn << "\n";
    std::cout << forSale << "\n";


    //Strings (object that represents a sequencce of text)
    std::cout << "\n" <<"Strings" << "\n";

    std::string name = "Louis";
    std::string day = "Tuesday";
    std::string school = "Warren High School";

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old"<<"\n";



    return 0;
}