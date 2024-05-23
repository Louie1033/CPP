#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main()
{
    /*
    NameSpace provides a solution for preventing name conflicts
    in large projects. Each entity need unique name. A namespace allows
    for indentically named entites as long as namespaces are diffrent
    */
    using namespace first;

    

    std::cout << x << "\n";
    std::cout << first::x << "\n";
    std::cout << second::x << "\n";

    using std::cout;
    using std::string;

    string name = "Louis";
    cout<<name;

    



   return 0;
}