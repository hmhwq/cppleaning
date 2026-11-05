#include <string>
#include <istream>
#include <ostream>

class Person
{
    std::string name;
    std::string address;

public:
    auto getname() const -> std::string const & { return name; }
    auto get_address() const -> std::string const & { return address; }
};
