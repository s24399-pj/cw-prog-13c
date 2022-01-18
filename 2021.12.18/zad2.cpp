#include <iostream>
#include <string>

auto print(std::string* param1) -> void{
    std::cout<<"Oto Adres wskaznika:  \n";
    std::cout<<param1;
    std::cout<<"Oto napis stojacy za tym wskaznikiem:  \n";
    std::cout<<*param1;
}


auto main() -> int{

    std::string str="testtesttest1";
    print(&str);
    return 0;
}