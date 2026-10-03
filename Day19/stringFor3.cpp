#include <iostream>
#include <string>
#include <cctype>
int main() {

    std::string s("hello world!!!");
    std::string orig(s);
    
    for (auto &c :s)
    c = std::toupper(c);
    std::cout << s << std::endl;


    return 0;
}