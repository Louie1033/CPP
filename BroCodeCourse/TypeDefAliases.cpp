#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using  text_t = std::string;
using number_t = int;


int main()
{
    //typedef = reserved keyword used to create additional name for another
    //          data type. New identifier for an existing type Helps with
    //          readability/reduces typos Use when clear benifit
    //          Replaced by using(works better w/ templates)

    //pairlist_t pairlist;
    text_t firstName = "Louis";
    std::cout << firstName << "\n";

    number_t x = 17;
    std::cout<<x<<"\n";


    return 0;
}