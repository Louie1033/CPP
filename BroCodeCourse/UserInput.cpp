#include <iostream>


using std::cout;
using std::cin;
int main()
{
    std::string name;
    int age;

    cout << "What is your name?" << "\n";
    cin >> name;

    cout << "What is your age?" << "\n";
    cin >> age;

    cout << "You name is " << name <<  " and you are " << age << " years old" "\n";

    return 0;
}